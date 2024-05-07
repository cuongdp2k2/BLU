module ButterflyUnit (
    // input
    input logic clk_i;
    input logic rst_ni;

    input signed [31:0] a_i , b_i , w_i ;
    input signed ct_mode_i ,

    // output
    output reg [31:0] a_o , b_o
);
    logic signed [31:0] add , add_reduceQ , half_add ;
    logic signed [31:0] sub , sub_reduceQ , half_sub ;
    logic signed [31:0] w_reduceQ ;

    assign add = a_o + b_i ;
    assign sub = a_i - b_i ;

    Modulus reduce32_sub (
        .A_i (sub) ,
        .A_o (sub_reduceQ)
    );

    Modulus reduce32_add (
        .A_i (add) ,
        .A_o (add_reduceQ)
    ) ;

    Modulus reduce32_w (
        .A_i (w_i) ,
        .A_o (w_reduceQ)
    );

    assign half_add = add_reduceQ >> 1 ;
    assign half_sub = sub_reduceQ >> 1 ;

    
endmodule