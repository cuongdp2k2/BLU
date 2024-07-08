/* verilator lint_off PINCONNECTEMPTY */
module dili_ntt_bu #(
    parameter WIDTH = 32 ,
    parameter QINV  = 58728449 ,
    parameter Q     = 8380417 
)(
    input signed [WIDTH-1:0] a_even_i , a_odd_i , zeta_i ,
    output signed [WIDTH-1:0] a_even_o , a_odd_o 
);
    logic signed [WIDTH-1:0] t ;
    logic signed [2*WIDTH-1:0] zeta_mul_odd ;

    assign zeta_mul_odd = zeta_i * a_odd_i ;

    dili_montgomery_reduce  montRED (
        .a_i (zeta_mul_odd) ,
        .a_o (t) 
    ) ;

    assign a_odd_o  = a_even_i - t ;
    assign a_even_o = a_even_i + t ;

endmodule : dili_ntt_bu
/* verilator lint_on PINCONNECTEMPTY */