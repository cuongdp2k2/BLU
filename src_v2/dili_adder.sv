module dili_adder(
    input signed [31:0] A, B,
    input clk, rstn,
    input Ci,
    output signed [31:0] S,
    output Co
);
    reg [31:0] G_reg  [6:1] ;
    reg [31:0] P_reg  [6:1] ;
    reg        C_reg  [11:1] ;
    reg [31:0] P1_reg [11:2] ;
    reg [31:0] P6_reg [11:7] ;
    reg [31:0] G6_reg [11:7] ;
    reg [32:1] C      [11:7];
    reg [31:0] S_temp ;
    reg        Co_temp ;
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
    //////// Generating 7th /////
    always @(posedge clk or negedge rstn) begin
        if(!rstn) begin
            C[7] <= 0 ;
            P1_reg[7] <=0 ;
            C_reg[7] <=0 ;
            P6_reg[7] <= 0 ;
            G6_reg[7] <= 0 ;
        end else begin 
            C[7][1]  <= G_reg[6][0]  | (P_reg[6][0]  & C_reg[6]);
            C[7][2]  <= G_reg[6][1]  | (P_reg[6][1]  & C_reg[6]);
            C[7][3]  <= 0 ;
            C[7][4]  <= G_reg[6][3]  | (P_reg[6][3]  & C_reg[6]);
            C[7][5]  <= 0 ;
            C[7][6]  <= 0 ;
            C[7][7]  <= 0 ;
            C[7][8]  <= G_reg[6][7]  | (P_reg[6][7]  & C_reg[6]);
            C[7][9]  <= 0 ;
            C[7][10] <= 0 ;
            C[7][11] <= 0 ;
            C[7][12] <= 0 ;
            C[7][13] <= 0 ;
            C[7][14] <= 0 ;
            C[7][15] <= 0 ;
            C[7][16] <= G_reg[6][15] | (P_reg[6][15] & C_reg[6]);
            C[7][17] <= 0 ;
            C[7][18] <= 0 ;
            C[7][19] <= 0 ;
            C[7][20] <= 0 ;
            C[7][21] <= 0 ;
            C[7][22] <= 0 ;
            C[7][23] <= 0 ;
            C[7][24] <= 0 ;
            C[7][25] <= 0 ;
            C[7][26] <= 0 ;
            C[7][27] <= 0 ;
            C[7][28] <= 0 ;
            C[7][29] <= 0 ;
            C[7][30] <= 0 ;
            C[7][31] <= 0 ;
            C[7][32] <= G_reg[6][31] | (P_reg[6][31] & C_reg[6]);

            P1_reg[7] <= P1_reg[6] ;
            P6_reg[7] <= P_reg[6] ;
            G6_reg[7] <= G_reg[6] ;
            C_reg[7] <= C_reg[6] ;
        end
    end
    //////// Generating 8th /////
    always @(posedge clk or negedge rstn) begin
        if(!rstn) begin
            C[8] <= 0 ;
            P1_reg[8] <=0 ;
            C_reg[8] <=0 ;
            P6_reg[8] <= 0 ;
            G6_reg[8] <= 0 ;
        end else begin 
            C[8][1]  <= C[7][1];
            C[8][2]  <= C[7][2];
            C[8][3]  <= G6_reg[7][2] | (P6_reg[7][2] & C[7][2]) ;
            C[8][4]  <= C[7][4];
            C[8][5]  <= G6_reg[7][4] | (P6_reg[7][4] & C[7][4]);
            C[8][6]  <= G6_reg[7][5] | (P6_reg[7][5] & C[7][4]);
            C[8][7]  <= 0 ;
            C[8][8]  <= C[7][8];
            C[8][9]  <= G6_reg[7][8]  | (P6_reg[7][8]  & C[7][8]);
            C[8][10] <= G6_reg[7][9]  | (P6_reg[7][9]  & C[7][8]);
            C[8][11] <= 0 ;
            C[8][12] <= G6_reg[7][11] | (P6_reg[7][11] & C[7][8]);
            C[8][13] <= 0 ;
            C[8][14] <= 0 ;
            C[8][15] <= 0 ;
            C[8][16] <= C[7][16];
            C[8][17] <= G6_reg[7][16] | (P6_reg[7][16] & C[7][16]);
            C[8][18] <= G6_reg[7][17] | (P6_reg[7][17] & C[7][16]);
            C[8][19] <= 0 ;
            C[8][20] <= G6_reg[7][19] | (P6_reg[7][19] & C[7][16]);
            C[8][21] <= 0 ;
            C[8][22] <= 0 ;
            C[8][23] <= 0 ;
            C[8][24] <= G6_reg[7][23] | (P6_reg[7][23] & C[7][16]);
            C[8][25] <= 0 ;
            C[8][26] <= 0 ;
            C[8][27] <= 0 ;
            C[8][28] <= 0 ;
            C[8][29] <= 0 ;
            C[8][30] <= 0 ;
            C[8][31] <= 0 ;
            C[8][32] <= C[7][32];

            P1_reg[8] <= P1_reg[7] ;
            P6_reg[8] <= P6_reg[7] ;
            G6_reg[8] <= G6_reg[7] ;
            C_reg[8] <= C_reg[7] ;
        end
    end
    //////// Generating 9th /////
    always @(posedge clk or negedge rstn) begin
        if(!rstn) begin
            C[9] <= 0 ;
            P1_reg[9] <=0 ;
            C_reg[9] <=0 ;
            P6_reg[9] <= 0 ;
            G6_reg[9] <= 0 ;
        end else begin 
            C[9][1]  <= C[8][1];
            C[9][2]  <= C[8][2];
            C[9][3]  <= C[8][3];
            C[9][4]  <= C[8][4];
            C[9][5]  <= C[8][5];
            C[9][6]  <= C[8][6];
            C[9][7]  <= G6_reg[8][6] | (P6_reg[8][6] & C[8][6]);
            C[9][8]  <= C[8][8];
            C[9][9]  <= C[8][9];
            C[9][10] <= C[8][10];
            C[9][11] <= G6_reg[8][10] | (P6_reg[8][10] & C[8][10]);
            C[9][12] <= C[8][12];
            C[9][13] <= G6_reg[8][12] | (P6_reg[8][12] & C[8][12]);
            C[9][14] <= G6_reg[8][13] | (P6_reg[8][13] & C[8][12]);
            C[9][15] <= 0 ;
            C[9][16] <= C[8][16];
            C[9][17] <= C[8][17];
            C[9][18] <= C[8][18];
            C[9][19] <= G6_reg[8][18] | (P6_reg[8][18] & C[8][18]);
            C[9][20] <= C[8][20];
            C[9][21] <= G6_reg[8][20] | (P6_reg[8][20] & C[8][20]);
            C[9][22] <= G6_reg[8][21] | (P6_reg[8][21] & C[8][20]);
            C[9][23] <= 0 ;
            C[9][24] <= C[8][24];
            C[9][25] <= G6_reg[8][24] | (P6_reg[8][24] & C[8][24]);
            C[9][26] <= G6_reg[8][25] | (P6_reg[8][25] & C[8][24]);
            C[9][27] <= 0 ;
            C[9][28] <= G6_reg[8][27] | (P6_reg[8][27] & C[8][24]);
            C[9][29] <= 0 ;
            C[9][30] <= 0 ;
            C[9][31] <= 0 ;
            C[9][32] <= C[8][32];

            P1_reg[9] <= P1_reg[8] ;
            P6_reg[9] <= P6_reg[8] ;
            G6_reg[9] <= G6_reg[8] ;
            C_reg[9]  <= C_reg[8] ;
        end
    end
    //////// Generating 10th /////
    always @(posedge clk or negedge rstn) begin
        if(!rstn) begin
            C[10] <= 0 ;
            P1_reg[10] <=0 ;
            C_reg[10] <=0 ;
            P6_reg[10] <= 0 ;
            G6_reg[10] <= 0 ;
        end else begin 
            C[10][1]  <= C[9][1];
            C[10][2]  <= C[9][2];
            C[10][3]  <= C[9][3];
            C[10][4]  <= C[9][4] ;
            C[10][5]  <= C[9][5];
            C[10][6]  <= C[9][6];
            C[10][7]  <= C[9][7];
            C[10][8]  <= C[9][8];
            C[10][9]  <= C[9][9];
            C[10][10] <= C[9][10];
            C[10][11] <= C[9][11];
            C[10][12] <= C[8][12];
            C[10][13] <= C[9][13];
            C[10][14] <= C[9][14];
            C[10][15] <= G6_reg[9][14] | (P6_reg[9][14] & C[9][14]);
            C[10][16] <= C[9][16];
            C[10][17] <= C[9][17];
            C[10][18] <= C[9][18];
            C[10][19] <= C[9][19];
            C[10][20] <= C[8][20];
            C[10][21] <= C[9][21];
            C[10][22] <= C[9][22];
            C[10][23] <= G6_reg[9][22] | (P6_reg[9][22] & C[9][22]);
            C[10][24] <= C[9][24];
            C[10][25] <= C[9][25];
            C[10][26] <= C[9][26];
            C[10][27] <= G6_reg[9][26] | (P6_reg[9][26] & C[9][26]);
            C[10][28] <= C[9][28];
            C[10][29] <= G6_reg[9][28] | (P6_reg[9][28] & C[9][28]);
            C[10][30] <= G6_reg[9][29] | (P6_reg[9][29] & C[9][28]);
            C[10][31] <= 0 ;
            C[10][32] <= C[9][32];

            P1_reg[10] <= P1_reg[9] ;
            P6_reg[10] <= P6_reg[9] ;
            G6_reg[10] <= G6_reg[9] ;
            C_reg[10] <= C_reg[9] ;
        end
    end
    //////// Generating 11th /////
    always @(posedge clk or negedge rstn) begin
        if(!rstn) begin
            C[11] <= 0 ;
            P1_reg[11] <=0 ;
            C_reg[11] <=0 ;
            P6_reg[11] <= 0 ;
            G6_reg[11] <= 0 ;
        end else begin 
            C[11][1]  <= C[10][1];
            C[11][2]  <= C[10][2];
            C[11][3]  <= C[10][3];
            C[11][4]  <= C[10][4] ;
            C[11][5]  <= C[10][5];
            C[11][6]  <= C[10][6];
            C[11][7]  <= C[10][7];
            C[11][8]  <= C[10][8];
            C[11][9]  <= C[10][9];
            C[11][10] <= C[10][10];
            C[11][11] <= C[10][11];
            C[11][12] <= C[10][12];
            C[11][13] <= C[10][13];
            C[11][14] <= C[10][14];
            C[11][15] <= C[10][15];
            C[11][16] <= C[10][16];
            C[11][17] <= C[10][17];
            C[11][18] <= C[10][18];
            C[11][19] <= C[10][19];
            C[11][20] <= C[10][20];
            C[11][21] <= C[10][21];
            C[11][22] <= C[10][22];
            C[11][23] <= C[10][23];
            C[11][24] <= C[10][24];
            C[11][25] <= C[10][25];
            C[11][26] <= C[10][26];
            C[11][27] <= C[10][27];
            C[11][28] <= C[10][28];
            C[11][29] <= C[10][29];
            C[11][30] <= C[10][30];
            C[11][31] <= G6_reg[10][30] | (P6_reg[10][30] & C[10][30]);
            C[11][32] <= C[10][32];

            P1_reg[11] <= P1_reg[10] ;
            P6_reg[11] <= P6_reg[10] ;
            G6_reg[11] <= G6_reg[10] ;
            C_reg[11] <= C_reg[10] ;
        end
    end
    ////
    always @(posedge clk or negedge rstn) begin
        if(!rstn) begin
            S_temp <= 0;
            Co_temp <= 0;
        end else begin
            S_temp <= P1_reg[11] ^ {C[11][31:1],C_reg[11]};
            Co_temp <= C[11][32];
        end
    end
    
    assign S = S_temp ;
    assign Co = Co_temp ;
    
endmodule : dili_adder
