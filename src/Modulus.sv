/* verilator lint_off WIDTH */
/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSED */

// module MontRED#(
//     parameter QINV = 58728449 ,
//     parameter Q    = 8380417  
// )(
//     input  logic signed [63:0] A_i,
//     output logic signed [31:0] A_o
// );
//     reg signed [63:0] a_temp;
//     reg signed [63:0] t_temp;

//     always @* begin
//         // Bước 1: t = (int64_t)(int32_t)a*QINV
//         a_temp = A_i;
//         t_temp = a_temp * QINV;

//         // Bước 2: t = (a - (int64_t)t*Q) >> 32
//         t_temp = a_temp - (t_temp[31:0] * Q) >> 32;

//         // Bước 3: Gán kết quả
//         A_o = t_temp[31:0];
//     end

// endmodule : MontRED

module reduce32 #(
    parameter QINV = 58728449 ,
    parameter Q    = 8380417  
)(
    input logic [31:0] A_i ,

    output logic [31:0] A_o 
) ;
    logic [31:0] t        ;

    assign t = (A_i + (1 << 22)) >> 23;
    assign A_o = A_i - t*Q;

endmodule : reduce32 

module caddq#(
    parameter QINV = 58728449 ,
    parameter Q    = 8380417  
)(
    input logic [31:0] A_i ,

    output logic [31:0] A_o
);
    assign A_o = A_i + ((A_i >> 31) & Q) ;
    
endmodule : caddq

module Modulus#(
    parameter QINV = 58728449 ,
    parameter Q    = 8380417  
)(
    input logic  [31:0] A_i ,

    output logic [31:0] A_o
);
    logic [31:0] A_wire ;
    // logic [31:0] A_temp ; 
    // MontRED mont_comp (
    //     .A_i (A_i),
    //     .A_o (A_temp)
    // ) ;

    reduce32 reduce32_comp(
        .A_i(A_i)  ,
        .A_o(A_wire)
    );
    caddq    caddq_comp (
        .A_i(A_wire) ,
        .A_o(A_o)
    ) ;
endmodule : Modulus

/* verilator lint_on UNUSED */
/* verilator lint_on WIDTH */ 
/* verilator lint_on DECLFILENAME */