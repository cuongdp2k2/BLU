module dili_caddq #(
    parameter WIDTH = 32 ,
    parameter QINV  = 58728449 ,
    parameter Q     = 8380417 
)(
    input  signed [WIDTH-1:0]  a_i,
    output signed [WIDTH-1:0]  a_o
);
    logic signed [WIDTH-1:0] a_shift, a_and ;

    assign a_shift = a_i >>> 31 ;
    assign a_and   = a_shift & Q ;
    assign a_o     = a_i + a_and ;

endmodule : dili_caddq