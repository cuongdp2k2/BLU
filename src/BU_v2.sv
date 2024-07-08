/* verilator lint_off DECLFILENAME */
/* verilator lint_off WIDTH */
/* verilator lint_off UNUSED */

module reduce32 #(
    parameter QINV = 58728449 ,
    parameter Q    = 8380417  
) (
    input logic [31:0] data ,
    output logic [31:0] red_data 
);
    logic [31:0] add_sr_23 ;
    logic [31:0] add ;
    logic [63:0] mul_res ;

    assign add = data + (1 << 22) ;
    assign add_sr_23 = add >> 23 ;
    assign mul_res = add_sr_23 * Q ;
    assign red_data = data - mul_res[31:0] ;
endmodule : reduce32

module fqmul #(
    parameter QINV = 58728449 ,
    parameter Q    = 8380417  
) (
    input logic [31:0] a , b ,
    output logic [31:0] c 
);
    logic [63:0] mul_ab ;
    logic [31:0] mul_invq ;
    logic [63:0] mul_q ;

    assign mul_ab = a * b ;
    assign mul_invq = mul_ab * QINV ;
    assign mul_q = mul_invq * Q ;
    assign c = (mul_ab - mul_q) ;

endmodule : fqmul

module BU_v2 (
    input logic clk, rstn, ct_mode ,
    input logic [31:0] rs1_i , rs2_i , w_i ,

    output logic [31:0] rs1_o , rs2_o 
);
    logic [31:0] input_a , input_b ;
    logic [31:0] add_sel , mul_res , add_red ;
    logic [31:0] rs1_temp , rs2_temp ;
    
    reduce32 red (
        .data(rs1_i),
        .red_data(add_red)
    );
    
    assign input_a = (!ct_mode) ? rs1_i - rs2_i : rs2_i ;
    assign input_b = w_i ; // (ct_mode) ? rs1_i : w_i ;

    fqmul mulcomp(
        .a(input_a),
        .b(input_b),
        .c(mul_res)
    );

    assign add_sel = (!ct_mode) ? rs2_i : mul_res ;
    assign rs1_temp = (ct_mode) ? add_red : rs1_i + add_sel ;
    assign rs2_temp = (ct_mode) ? rs1_i - mul_res : mul_res ;  

    assign rs1_o = rs1_temp >> 0 ;
    assign rs2_o = rs2_temp >> 0 ;

endmodule : BU_v2