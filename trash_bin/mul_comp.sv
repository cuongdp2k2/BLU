module mul_comp #(
    parameter WIDTH = 32 
)(
    input signed [WIDTH-1:0] a_i , b_i ,

    output signed [2*WIDTH-1:0] sum_o 
);
    assign sum_o = a_i * b_i ; 

endmodule : mul_comp
