/* verilator lint_off UNUSED */
/* verilator lint_off DECLFILENAME */
module BK_black_dot (
    input logic [1:0] P_i , G_i ,

    output logic P_o , G_o
) ;
    assign P_o = P_i[1] & P_i[0] ;
    assign G_o = G_i[1] | (P_i[1] & G_i[0]) ;
endmodule : BK_black_dot

module BK_adder_16bit(
    input logic [15:0] a_i , b_i ,
    input logic        carry_i ,

    output logic [15:0] sum_o ,
    output              carry_o
);
    logic [15:0] P_stg1 , G_stg1 ;
    logic [7:0]  P_stg2 , G_stg2 ;
    logic [3:0]  P_stg3 , G_stg3 ;
    logic [1:0]  P_stg4 , G_stg4 ;
    logic        P_stg5 , G_stg5 ;
    logic        P_stg6 , G_stg6 ;
    logic [2:0]  P_stg7 , G_stg7 ;
    logic [7:0]  P_stg8 , G_stg8 ;
    logic [15:0] C               ;

    // stage 1 
    assign P_stg1 = a_i ^ b_i ;
    assign G_stg1 = a_i & b_i ;

    // Stage 2
    genvar i ;
    generate 
        for(i=0 ; i<16 ; i+=2) begin : satge2_black_dot_Connection
            BK_black_dot stage2_dot (
                .P_i(P_stg1[i+1:i]),
                .G_i(G_stg1[i+1:i]),

                .P_o(P_stg2[i/2]),
                .G_o(G_stg2[i/2])    
            ) ;
        end
    endgenerate

    // Stage 3
    generate 
        for(i=0 ; i<8 ; i+=2) begin : satge3_black_dot_Connection
            BK_black_dot stage3_dot (
                .P_i(P_stg2[i+1:i]),
                .G_i(G_stg2[i+1:i]),

                .P_o(P_stg3[i/2]),
                .G_o(G_stg3[i/2])    
            ) ;
        end
    endgenerate

    // Stage 4
    generate 
        for(i=0 ; i<4 ; i+=2) begin : satge4_black_dot_Connection
            BK_black_dot stage4_dot (
                .P_i(P_stg3[i+1:i]),
                .G_i(G_stg3[i+1:i]),

                .P_o(P_stg4[i/2]),
                .G_o(G_stg4[i/2])    
            ) ;
        end
    endgenerate

    // Stage 5
    BK_black_dot stage5_dot (
        .P_i(P_stg4) ,
        .G_i(G_stg4) ,

        .P_o(P_stg5) ,
        .G_o(G_stg5)
    );

    // Stage 6
    BK_black_dot stage6_dot (
        .P_i({P_stg3[2],P_stg4[0]}) ,
        .G_i({G_stg3[2],G_stg4[0]}) ,

        .P_o(P_stg6) ,
        .G_o(G_stg6)
    ) ;

    // Stage 7 
    BK_black_dot stage7_dot1 (
        .P_i({P_stg2[2],P_stg3[0]}) ,
        .G_i({G_stg2[2],G_stg3[0]}) ,

        .P_o(P_stg7[0]) ,
        .G_o(G_stg7[0])
    ) ;

    BK_black_dot stage7_dot2 (
        .P_i({P_stg2[4],P_stg3[1]}) ,
        .G_i({G_stg2[4],G_stg3[1]}) ,

        .P_o(P_stg7[1]) ,
        .G_o(G_stg7[1])
    ) ;

    BK_black_dot stage7_dot3 (
        .P_i({P_stg2[6],P_stg6}) ,
        .G_i({G_stg2[6],G_stg6}) ,

        .P_o(P_stg7[2]) ,
        .G_o(G_stg7[2])
    ) ;

    // Stage 8
    assign G_stg8[0] = G_stg1[0] | (P_stg1[0] & carry_i) ;

    BK_black_dot stage8_dot2 (
        .P_i({P_stg1[2],P_stg2[0]}) ,
        .G_i({G_stg1[2],G_stg2[0]}) ,

        .P_o(P_stg8[1]) ,
        .G_o(G_stg8[1])
    ) ;

    BK_black_dot stage8_dot3 (
        .P_i({P_stg1[4],P_stg3[0]}) ,
        .G_i({G_stg1[4],G_stg3[0]}) ,

        .P_o(P_stg8[2]) ,
        .G_o(G_stg8[2])
    ) ;

    BK_black_dot stage8_dot4 (
        .P_i({P_stg1[6],P_stg7[0]}) ,
        .G_i({G_stg1[6],G_stg7[0]}) ,

        .P_o(P_stg8[3]) ,
        .G_o(G_stg8[3])
    ) ;

    BK_black_dot stage8_dot5 (
        .P_i({P_stg1[8],P_stg4[0]}) ,
        .G_i({G_stg1[8],G_stg4[0]}) ,

        .P_o(P_stg8[4]) ,
        .G_o(G_stg8[4])
    ) ;

    BK_black_dot stage8_dot6 (
        .P_i({P_stg1[10],P_stg7[1]}) ,
        .G_i({G_stg1[10],G_stg7[1]}) ,

        .P_o(P_stg8[5]) ,
        .G_o(G_stg8[5])
    ) ;

    BK_black_dot stage8_dot7 (  
        .P_i({P_stg1[12],P_stg6}) ,
        .G_i({G_stg1[12],G_stg6}) ,

        .P_o(P_stg8[6]) ,
        .G_o(G_stg8[6])
    ) ;

    BK_black_dot stage8_dot8 (
        .P_i({P_stg1[14],P_stg7[2]}) ,
        .G_i({G_stg1[14],G_stg7[2]}) ,

        .P_o(P_stg8[7]) ,
        .G_o(G_stg8[7])
    ) ;

    assign C[0] = G_stg8[0]  ;
    assign C[1] = G_stg2[0]  ;
    assign C[2] = G_stg8[1]  ;
    assign C[3] = G_stg3[0]  ;
    assign C[4] = G_stg8[2]  ;
    assign C[5] = G_stg7[0]  ;
    assign C[6] = G_stg8[3]  ;
    assign C[7] = G_stg4[0]  ;
    assign C[8] = G_stg8[4]  ;
    assign C[9] = G_stg7[1]  ;
    assign C[10] = G_stg8[5] ;
    assign C[11] = G_stg6    ;
    assign C[12] = G_stg8[6] ;
    assign C[13] = G_stg7[2] ;
    assign C[14] = G_stg8[7] ;
    assign C[15] = G_stg5    ;

    assign sum_o[0]  = P_stg1[0]          ;
    assign sum_o[1]  = P_stg1[1]  ^ C[0]  ;
    assign sum_o[2]  = P_stg1[2]  ^ C[1]  ;
    assign sum_o[3]  = P_stg1[3]  ^ C[2]  ;
    assign sum_o[4]  = P_stg1[4]  ^ C[3]  ;
    assign sum_o[5]  = P_stg1[5]  ^ C[4]  ;
    assign sum_o[6]  = P_stg1[6]  ^ C[5]  ;
    assign sum_o[7]  = P_stg1[7]  ^ C[6]  ;
    assign sum_o[8]  = P_stg1[8]  ^ C[7]  ;
    assign sum_o[9]  = P_stg1[9]  ^ C[8]  ;
    assign sum_o[10] = P_stg1[10] ^ C[9]  ;
    assign sum_o[11] = P_stg1[11] ^ C[10] ;
    assign sum_o[12] = P_stg1[12] ^ C[11] ;
    assign sum_o[13] = P_stg1[13] ^ C[12] ;
    assign sum_o[14] = P_stg1[14] ^ C[13] ;
    assign sum_o[15] = P_stg1[15] ^ C[14] ;
    assign carry_o   = C[15]              ;
    
endmodule : BK_adder_16bit

