module dili_div2 #(
    parameter WIDTH = 32 ,
    parameter QINV  = 58728449 ,
    parameter Q     = 8380417 ,
    parameter N     = 256
)(
    input signed [31:0] x_i ,
    output signed [31:0] x_o 
) ;
    logic signed [30:0] x_temp ;

    assign x_temp = {31{x_i[0]}} & Q;
    assign x_o    = x_i[31:0] + x_temp;

endmodule : dili_div2