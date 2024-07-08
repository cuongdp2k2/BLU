module dili_intt #(
    parameter WIDTH = 32 ,
    parameter QINV  = 58728449 ,
    parameter Q     = 8380417 ,
    parameter N     = 256
)(
    input signed [WIDTH-1:0] a_i [N-1:0] , zeta_i ,
    output signed [WIDTH-1:0] a_o [N-1:0]
) ;
    // logic signed [WIDTH-1:0] a_temp [N-1:0] ;

    genvar j,k ;
    generate
        for ( j = 0 ; j < 128 ; ++j ) begin : INTT_BU
            dili_intt_bu INTT_BU (
                .a_even_i(a_i[j]) ,
                .a_odd_i(a_i[j + 128]) ,
                .zeta_i(zeta_i)  ,
                .a_even_o(a_o[j]) ,
                .a_odd_o(a_o[j + 128])
            );
        end
    endgenerate

    // generate
    //     for ( k = 0 ; k < 256 ; ++k ) begin : post_process
    //         assign a_o[k] = a_temp[k] >>> 1 ;
    //         // dili_div2 div2 (
    //         //     .x_i(a_temp[k]) ,
    //         //     .x_o(a_o[k])
    //         // ); 
    //     end
    // endgenerate
endmodule : dili_intt