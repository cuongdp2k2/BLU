module mul_mod #(
    parameter WIDTH = 64 
) (
    // input
    input unsigned [WIDTH-1:0] a_i   ,   
                               b_i   ,
                               mod_i , 

    // output
    output unsigned [WIDTH-1:0] res_o 
);
    reg [WIDTH-1:0] res_temp ;

    always_comb begin : mul_mod
        res_temp = (a_i * b_i) % mod_i ;
    end

    assign res_o = res_temp ;
endmodule