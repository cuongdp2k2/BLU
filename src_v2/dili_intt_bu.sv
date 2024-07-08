/* verilator lint_off PINCONNECTEMPTY */
module dili_intt_bu #(
    parameter WIDTH = 32 ,
    parameter QINV  = 58728449 ,
    parameter Q     = 8380417 
)(
    input signed [WIDTH-1:0] a_even_i , a_odd_i , zeta_i ,
    output signed [WIDTH-1:0] a_even_o , a_odd_o 
);
    logic signed [WIDTH-1:0] t , u , mul_reduce ;
    logic signed [2*WIDTH-1:0] zeta_mul_odd ;

    assign t = a_even_i + a_odd_i ;
    assign u = a_even_i - a_odd_i ;

    assign zeta_mul_odd = zeta_i * u ;

    dili_montgomery_reduce montRED (
        .a_i(zeta_mul_odd) ,
        .a_o(mul_reduce)
    );

    assign a_even_o = t >>> 1;
    assign a_odd_o  = mul_reduce >>> 1 ;
    
endmodule : dili_intt_bu
/* verilator lint_on PINCONNECTEMPTY */