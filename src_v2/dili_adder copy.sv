module dili_adder(
    input signed [31:0] A, B,
    input clk, rstn,
    input Ci,
    output signed [31:0] S,
    output Co
);
    reg [31:0] G_reg [6:1] ;
    reg [31:0] P_reg [6:1] ;
    reg        C_reg [7:1] ;
    reg [31:0] P1_reg[7:2] ;
    reg [31:0] P6_reg [11:7] ;
    reg [31:0] G6_reg [11:7] ;
    reg [32:1] C[11:7];
    // logic [31:0] P1, G1;
	// logic [15:0] G2,P2;
	// logic [7:0] G3, P3;
	// logic [3:0] G4,P4;
	// logic [1:0] G5,P5;
	// logic G6, P6;

    /////// Generating 1st order P's and G's signals ////////
    always @(posedge clk or negedge rstn) begin
        if(!rstn) begin
            P_reg[1] <= 0 ;
            G_reg[1] <= 0 ;
            C_reg[1] <= 0 ;
        end else begin
            P_reg[1] <= A ^ B ;
            G_reg[1] <= A & B ;
            C_reg[1] <= Ci    ;
        end
    end
    // assign P1 = A ^ B;
    // assign G1 = A & B;
    //////// Generating 2nd order P's and G's signals ///////
    genvar i,j;
    generate
        for(i=0; i<=30; i=i+2) begin: second_stage_0  //32
            always @(posedge clk or negedge rstn) begin 
                if(!rstn) begin
                    P_reg[2][i+1] <= 0 ;
                    G_reg[2][i+1] <= 0 ;
                end else begin
                    G_reg[2][i+1] <= G_reg[1][i+1] | (P_reg[1][i+1] & G_reg[1][i]) ;
                    P_reg[2][i+1] <= P_reg[1][i+1] & P_reg[1][i] ;
                end
            end
        end
            // assign G2[i/2] = G1[i+1] | (P1[i+1] & G1[i]);
            // assign P2[i/2] = P1[i+1] & P1[i];
        for(i=0; i<=30 ; i=i+2) begin : second_stage_1
            always @(posedge clk or negedge rstn) begin
                if(!rstn) begin
                    P_reg[2][i] <= 0 ;
                    G_reg[2][i] <= 0 ;
                end else begin
                    G_reg[2][i] <= G_reg[1][i] ;
                    P_reg[2][i] <= P_reg[1][i] ;
                end
            end
        end
    endgenerate
    always @(posedge clk or negedge rstn) begin
        if(!rstn) begin
            C_reg[2] <= 1'b0 ;
            P1_reg[2] <= 0   ;
        end else begin
            C_reg[2]  <= C_reg[1] ;
            P1_reg[2] <= P_reg[1] ;
        end
    end
    /////// Generating 3rd order P's and G's signals //////
    generate
        for(i=1; i<=31; i=i+4) begin: third_stage_0   //16
            always @(posedge clk or negedge rstn) begin
                if(!rstn) begin
                    P_reg[3][i+2] <= 0 ;
                    G_reg[3][i+2] <= 0 ;
                end else begin
                    G_reg[3][i+2] <= G_reg[2][i+2] | (P_reg[2][i+2] & G_reg[2][i]) ;
                    P_reg[3][i+2] <= P_reg[2][i+2] & P_reg[2][i] ;
                end
            end
            // assign G3[i/2] = G2[i+1] | (P2[i+1] & G2[i]);
            // assign P3[i/2] = P2[i+1] & P2[i];
        end

        for(i=0; i<=7 ; i=i+1) begin : third_stage_group
            for(j=0; j<=2 ; j=j+1) begin : third_stage_1
                always @(posedge clk or negedge rstn) begin : third_stage_bit_process
                    if(!rstn) begin
                        P_reg[3][4*i+j] <= 0 ;
                        G_reg[3][4*i+j] <= 0 ;
                    end else begin
                        G_reg[3][4*i+j] <= G_reg[2][4*i+j] ;
                        P_reg[3][4*i+j] <= P_reg[2][4*i+j] ;
                    end
                end
            end
        end
    endgenerate
    always @(posedge clk or negedge rstn) begin
        if(!rstn) begin
            C_reg[3] <= 1'b0 ;
            P1_reg[3] <= 0   ;
        end else begin
            C_reg[3] <= C_reg[2] ;
            P1_reg[3] <= P1_reg[2] ;
        end
    end
    
    ///////  Generating 4th order P's and G's signals /////
    generate
        for(i=3; i<=31; i=i+8) begin: fourth_stage_0  //8
            always @(posedge clk or negedge rstn) begin
                if(!rstn) begin
                    P_reg[4][i+4] <= 0 ;
                    G_reg[4][i+4] <= 0 ;
                end else begin
                    G_reg[4][i+4] <= G_reg[3][i+4] | (P_reg[3][i+4] & G_reg[3][i]) ;
                    P_reg[4][i+4] <= P_reg[3][i+4] & P_reg[3][i] ;
                end
            end
            // assign G4[i/2] = G3[i+1] | (P3[i+1] & G3[i]);
            // assign P4[i/2] = P3[i+1] & P3[i];
        end

        for(i=0 ; i<=3; i=i+1) begin : fourth_stage_group
            for(j=0; j<=6; j=j+1) begin : fourth_stage_1
                always @(posedge clk or negedge rstn) begin : fourth_stage_bit_process
                    if(!rstn) begin
                        P_reg[4][8*i+j] <= 0;
                        G_reg[4][8*i+j] <= 0;
                    end else begin
                        G_reg[4][8*i+j] <= G_reg[3][8*i+j] ;
                        P_reg[4][8*i+j] <= P_reg[3][8*i+j] ;
                    end
                end
            end
        end
    endgenerate
    always @(posedge clk or negedge rstn) begin
        if(!rstn) begin
            C_reg[4] <= 1'b0 ;
            P1_reg[4] <= 0   ;
        end else begin
            C_reg[4] <= C_reg[3] ;
            P1_reg[4] <= P1_reg[3] ;
        end
    end
    
    ///////  Generating 5th order P's and G's signals
    generate
        for(i=7; i<=31; i=i+16) begin: fifth_stage_0  //4
            always @(posedge clk or negedge rstn) begin
                if(!rstn) begin
                    P_reg[5][i+8] <= 0 ;
                    G_reg[5][i+8] <= 0 ;
                end else begin
                    G_reg[5][i+8] <= G_reg[4][i+8] | (P_reg[4][i+8] & G_reg[4][i]) ;
                    P_reg[5][i+8] <= P_reg[4][i+8] & P_reg[4][i] ;
                end
            end
            // assign G5[i/2] = G4[i+1] | (P4[i+1] & G4[i]);
            // assign P5[i/2] = P4[i+1] & P4[i];
        end
        for(i=0 ; i<=1 ; i=i+1) begin : fifth_stage_group
            for(j=0; j<=14 ; j=j+1) begin : fifth_stage_1
                always @(posedge clk or negedge rstn) begin : fifth_stage_bit_process
                    if(!rstn) begin
                        P_reg[5][16*i+j] <= 0;
                        G_reg[5][16*i+j] <= 0;
                    end else begin
                        G_reg[5][16*i+j] <= G_reg[4][16*i+j];
                        P_reg[5][16*i+j] <= P_reg[4][16*i+j];
                    end
                end
            end
        end
    endgenerate
    always @(posedge clk or negedge rstn) begin
        if(!rstn) begin
            C_reg[5] <= 1'b0 ;
            P1_reg[5] <= 0 ;
        end else begin
            C_reg[5] <= C_reg[4] ;
            P1_reg[5] <= P1_reg[4] ;
        end
    end
   
    //////// Generating 6th order P's and G's signals
    always @(posedge clk or negedge rstn) begin
        G_reg[6][31] <= G_reg[5][31] | (P_reg[5][31] & G_reg[5][15]) ;
        P_reg[6][31] <= P_reg[5][31] & P_reg[5][15] ;
    end
    // assign G6 = G5[1] | (P5[1] & G5[0]);
    // assign P6 = P5[1] & P5[0];
    generate
        for(i=0 ; i<=30 ; i=i+1) begin : sixth_stage
            always @(posedge clk or negedge rstn) begin
                if(!rstn) begin
                    G_reg[6][i] <= 0 ;
                    P_reg[6][i] <= 0 ;
                end else begin
                    G_reg[6][i] <= G_reg[5][i] ;
                    P_reg[6][i] <= P_reg[5][i] ;
                end
            end
        end
    endgenerate
    always @(posedge clk or negedge rstn) begin
        if(!rstn) begin
            C_reg[6] <= 1'b0 ;
            P1_reg[6] <= 0   ;
        end else begin
            C_reg[6] <= C_reg[5] ;
            P1_reg[6] <= P1_reg[5] ;
        end
    end
    //////// Generating carry which can be calculated directly from input carry /////
    always @(posedge clk or negedge rstn) begin
        if(!rstn) begin
            C <= 0 ;
            P1_reg[7] <=0 ;
            C_reg[7] <=0 ;
        end else begin
            C[1]  <= G_reg[6][0]  | (P_reg[6][0]  & C_reg[6]);
            C[2]  <= G_reg[6][1]  | (P_reg[6][1]  & C_reg[6]);
            C[4]  <= G_reg[6][3]  | (P_reg[6][3]  & C_reg[6]);
            C[8]  <= G_reg[6][7]  | (P_reg[6][7]  & C_reg[6]);
            C[16] <= G_reg[6][15] | (P_reg[6][15] & C_reg[6]);
            C[32] <= G_reg[6][31] | (P_reg[6][31] & C_reg[6]);

            // assign C[1] = G1[0] | (P1[0] & Ci);
            // assign C[2] = G2[0] | (P2[0] & Ci);
            // assign C[4] = G3[0] | (P3[0] & Ci);
            // assign C[8] = G4[0] | (P4[0] & Ci);
            // assign C[16] = G5[0] | (P5[0] & Ci);
            // assign C[32] = G6 | (P6 & Ci);
            
            /////// Now generating all carry signals at remaining stages ////////////
            
            C[3] <= G_reg[6][2] | (P_reg[6][2] & C[2]);
            //assign C[3] = G1[2] | (P1[2] & C[2]);
            
            C[5] <= G_reg[6][4] | (P_reg[6][4] & C[4]);
            C[6] <= G_reg[6][5] | (P_reg[6][5] & C[4]);
            C[7] <= G_reg[6][6] | (P_reg[6][6] & C[6]);
            // assign C[5] = G1[4] | (P1[4] & C[4]);
            // assign C[6] = G2[2] | (P2[2] & C[4]);
            // assign C[7] = G1[6] | (P1[6] & C[6]);
            
            C[9]  <= G_reg[6][8]  | (P_reg[6][8]  & C[8]);
            C[10] <= G_reg[6][9]  | (P_reg[6][9]  & C[8]);
            C[11] <= G_reg[6][10] | (P_reg[6][10] & C[10]);
            C[12] <= G_reg[6][11] | (P_reg[6][11] & C[8]);
            C[13] <= G_reg[6][12] | (P_reg[6][12] & C[12]);
            C[14] <= G_reg[6][13] | (P_reg[6][13] & C[12]);
            C[15] <= G_reg[6][14] | (P_reg[6][14] & C[14]);
            // assign C[9] = G1[8] | (P1[8] & C[8]);
            // assign C[10] = G2[4] | (P2[4] & C[8]);
            // assign C[11] = G1[10] | (P1[10] & C[10]);
            // assign C[12] = G3[2] | (P3[2] & C[8]);
            // assign C[13] = G1[12] | (P1[12] & C[12]);
            // assign C[14] = G2[6] | (P2[6] & C[12]);
            // assign C[15] = G1[14] | (P1[14] & C[14]);
            
            C[17] <= G_reg[6][16] | (P_reg[6][16] & C[16]);
            C[18] <= G_reg[6][17] | (P_reg[6][17] & C[16]);     //2nd order => /2
            C[19] <= G_reg[6][18] | (P_reg[6][18] & C[18]);
            C[20] <= G_reg[6][19] | (P_reg[6][19] & C[16]); //3rd order = /4
            C[21] <= G_reg[6][20] | (P_reg[6][20] & C[20]);
            C[22] <= G_reg[6][21] | (P_reg[6][21] & C[20]);
            C[23] <= G_reg[6][22] | (P_reg[6][22] & C[22]);
            C[24] <= G_reg[6][23] | (P_reg[6][23] & C[16]); //4th order => /8
            C[25] <= G_reg[6][24] | (P_reg[6][24] & C[24]);
            C[26] <= G_reg[6][25] | (P_reg[6][25] & C[24]);
            C[27] <= G_reg[6][26] | (P_reg[6][26] & C[26]);
            C[28] <= G_reg[6][27] | (P_reg[6][27] & C[24]);
            C[29] <= G_reg[6][28] | (P_reg[6][28] & C[28]);
            C[30] <= G_reg[6][29] | (P_reg[6][29] & C[28]);
            C[31] <= G_reg[6][30] | (P_reg[6][30] & C[30]);
            // assign C[17] = G1[16] | (P1[16] & C[16]);
            // assign C[18] = G2[8] | (P2[8] & C[16]);     //2nd order => /2
            // assign C[19] = G1[18] | (P1[18] & C[18]);
            // assign C[20] = G3[4] | (P3[4] & C[16]); //3rd order = /4
            // assign C[21] = G1[20] | (P1[20] & C[20]);
            // assign C[22] = G2[10] | (P2[10] & C[20]);
            // assign C[23] = G1[22] | (P1[22] & C[22]);
            // assign C[24] = G4[2] | (P4[2] & C[16]); //4th order => /8
            // assign C[25] = G1[24] | (P1[24] & C[24]);
            // assign C[26] = G2[12] | (P2[12] & C[24]);
            // assign C[27] = G1[26] | (P1[26] & C[26]);
            // assign C[28] = G3[6] | (P3[6] & C[24]);
            // assign C[29] = G1[28] | (P1[28] & C[28]);
            // assign C[30] = G2[14] | (P2[14] & C[28]);
            // assign C[31] = G1[30] | (P1[30] & C[30]);

            P1_reg[7] <= P1_reg[6] ;
            C_reg[7] <= C_reg[6] ;
        end
    end
    ///////////////////////
    assign S = P1_reg[7] ^ {C[31:1],C_reg[7]};
    assign Co = C[32];
    
endmodule : dili_adder
