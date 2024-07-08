module dili_freeze #(
    parameter WIDTH = 32 ,
    parameter QINV  = 58728449 ,
    parameter Q     = 8380417 
)(
    input  signed [WIDTH-1:0]  a_i,
    output signed [WIDTH-1:0]  a_o
);
    logic signed [WIDTH-1:0] a_wire ;
    
    dili_reduce32 reduce32(
        .a_i(a_i),
        .a_o(a_wire) 
    );

    dili_caddq caddq (
        .a_i(a_wire) ,
        .a_o(a_o)
    ) ;

endmodule : dili_freeze