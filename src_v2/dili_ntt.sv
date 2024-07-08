module dili_ntt #(
    parameter WIDTH = 32 ,
    parameter QINV  = 58728449 ,
    parameter Q     = 8380417 ,
    parameter N     = 256
)(
    input signed [WIDTH-1:0] a_i [N-1:0] , zeta_i ,
    output signed [WIDTH-1:0] a_o [N-1:0]
);

    genvar len, j, k ;
    generate
        for (j = 0 ; j < 128 ; ++j ) begin : NTT_BU
            dili_ntt_bu NTT_BU(
                .a_even_i(a_i[j]) ,
                .a_odd_i(a_i[j + 128]) ,
                .zeta_i(zeta_i)  ,
                .a_even_o(a_o[j]) ,
                .a_odd_o(a_o[j + 128]) 
            );
        end
    endgenerate

endmodule : dili_ntt