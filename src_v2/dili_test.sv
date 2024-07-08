module dili_test(
    //input logic clk_i ,
    output logic [31:0] data_debug[255:0] ,
    output logic [31:0] data_out [255:0] 
);
    reg signed [31:0] data  [255:0];
    reg signed [31:0] data_temp [255:0] ;
    

    initial begin
        $readmemh("./src_v2/dili_test_data.mem",data) ;
    end

    dili_ntt NTT256 (
        .a_i(data) ,
        .zeta_i(44288),
        .a_o(data_temp)
    );

    assign data_debug = data_temp ;

    dili_intt INTT256 (
        .a_i(data_temp) ,
        .zeta_i(-44288),
        .a_o(data_out)
    );


endmodule : dili_test 
