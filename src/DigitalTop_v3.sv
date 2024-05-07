module DigitalTop_v3 #(
    parameter DATA_WIDTH = 32     
) (
    input logic reset_ni , clk_i,
    input logic [DATA_WIDTH-1:0] data1_i , data2_i , 
    input logic [DATA_WIDTH-1:0] zeta_i ,

    output logic [DATA_WIDTH-1:0] data2_o , data1_o 
);
    logic  [DATA_WIDTH-1:0] data1_intt , data2_intt ;
    
    BU_new ntt_comp (
        .rst_ni(reset_ni) ,
        .clk_i(clk_i),
        .u_i(data1_i) ,
        .CT_nGS_i(1'b0) ,
        .t_i(data2_i) ,
        .w_i(zeta_i) ,

        .u_o (data1_intt) ,
        .t_o (data2_intt) 
    );

    BU_new intt_comp (
        .rst_ni(reset_ni) ,
        .clk_i(clk_i),
        .u_i(data1_intt) ,
        .t_i(data2_intt) ,
        .CT_nGS_i(1'b1) ,
        .w_i(zeta_i) ,

        .u_o (data1_o) ,
        .t_o (data2_o) 
    ) ;
endmodule : DigitalTop_v3