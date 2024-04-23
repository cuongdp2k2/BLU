/* verilator lint_off UNUSED */
/* verilator lint_off DECLFILENAME */
module BK_black_dot (
    input logic [1:0] P_i , G_i ,

    output logic P_o , G_o
) ;
    assign P_o = P_i[1] & P_i[0] ;
    assign G_o = G_i[1] | (P_i[1] & G_i[0]) ;
endmodule : BK_black_dot

// module BK_comp (
//     input logic [3:0] G_i , P_i,

//     input logic [3:0] G_o , P_o
// );
//     logic [1:0] G,P
//     // Stage 1
//     BK_black_dot stg1_dot_0 (
//         .P_i(P_i[1:0]) ,
//         .G_i(G_i[1:0]) ,
        
//         .P_o(P[0]),
//         .G_o(G[0])
//     );

//     BK_black_dot stg1_dot_1 (
//         .P_i(P_i[3:2]) ,
//         .G_i(G_i[3:2]) ,
        
//         .P_o(P[1]),
//         .G_o(G[1])
//     );

//     // Stage 2
//     BK_black_dot stg2_dot  (
//         .P_i(P) ,
//         .G_i(G) ,
        
//         .P_o(P_o[3]),
//         .G_o(G_o[3])
//     );

//     assign {G_o[2],P_o[2]} = {G_i[2],P_i[2]} ;
//     assign {G_o[1],P_o[1]} = {G[0],P[0]} ;
//     assign {G_o[0],P_o[0]} = {G_i[0],P_i[0]} ;
// endmodule : BK_comp

module BK_RCA (
    input logic [3:0] S_i ,
    input logic       mode_i ,
    output logic [3:0] S_o 
) ;
    assign S_o[0] = (!mode_i) ? S_i[0] : ~S_i[0];
    assign S_o[1] = (!mode_i) ? S_i[1] : S_i[0] ^ S_i[1] ;
    assign S_o[2] = (!mode_i) ? S_i[2] : S_i[2] ^ (S_i[1] & S_i[0]) ;
    assign S_o[3] = (!mode_i) ? S_i[3] : S_i[3] ^ (S_i[2] & S_i[1] & S_i [0]) ;
    
endmodule : BK_RCA

module BK_pre_Process (
    input logic [3:0] A_i , B_i ,

    output logic [3:0] G_o , P_o 
);
    assign G_o = A_i & B_i ;
    assign P_o = A_i ^ B_i ;
endmodule : BK_pre_Process

module BK_Process(
    input logic [3:0] G_i , P_i ,
    
    output logic [3:0] C_o 
) ;
    logic [1:0] G_stg1, P_stg1 ;
    logic       G_stg2, P_stg2 ;
    logic       G_stg3, P_stg3 ;

    // Stage 1
    BK_black_dot stg1_dot_0 (
        .P_i(P_i[1:0]) ,
        .G_i(G_i[1:0]) ,
        
        .P_o(P_stg1[0]),
        .G_o(G_stg1[0])
    );

    BK_black_dot stg1_dot_1 (
        .P_i(P_i[3:2]) ,
        .G_i(G_i[3:2]) ,
        
        .P_o(P_stg1[1]),
        .G_o(G_stg1[1])
    ); 

    // Stage 2
    BK_black_dot stg2_dot  (
        .P_i(P_stg1) ,
        .G_i(G_stg1) ,
        
        .P_o(P_stg2),
        .G_o(G_stg2)
    );

    // Stage 3
    BK_black_dot stg3_dot (
        .P_i({P_i[2],P_stg1[0]}),
        .G_i({G_i[2],G_stg1[0]}),

        .P_o(P_stg3),
        .G_o(G_stg3)
    );

    // OUTPUT
    assign C_o = {G_stg2 , G_stg3 , G_stg1[0] , G_i[0]} ;
endmodule : BK_Process

module BK_post_Process(
    input logic [3:0] P_i ,
    input logic [3:0] C_i ,
    input logic       carry_i ,

    output logic [3:0] sum_o ,
    output logic       carry_o 
);
    assign sum_o[0] = P_i[0] ^ carry_i;
    assign sum_o[1] = P_i[1] ^ C_i[0] ;
    assign sum_o[2] = P_i[2] ^ C_i[1] ;
    assign sum_o[3] = P_i[3] ^ C_i[2] ;
    assign carry_o  = C_i[3]          ;
endmodule : BK_post_Process

module Brent_Kung_adder_4bit (
    input logic [3:0] a_i , b_i ,
    input logic        carry_i , 

    output logic [3:0] sum_o,
    output logic       carry_o 
) ;
    logic [3:0] G , P , C , sum;
   
    BK_pre_Process preProcessingStage (
        .A_i(a_i) ,
        .B_i(b_i) ,

        .G_o(G) ,
        .P_o(P) 
    ) ;

    BK_Process  ProcessStage (
        .G_i(G)   ,
        .P_i(P)   ,
        
        .C_o(C) 
    ) ;

    BK_RCA RCA (
        .S_i(C) ,
        .mode_i(carry_i) ,
        
        .S_o(sum)
    ) ;

    BK_post_Process postProcessStage (
        .P_i(P)   ,
        .C_i(sum)   ,
        .carry_i(1'b0) ,

        .sum_o (sum_o) ,
        .carry_o(carry_o)
    );

endmodule : Brent_Kung_adder_4bit
/* verilator lint_on UNUSED */
/* verilator lint_on DECLFILENAME */