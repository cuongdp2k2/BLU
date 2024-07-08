module DigitalTop_v4 #(
    parameter DATA_WIDTH = 32     
) (
    input logic reset_ni , clk_i,
    input logic [DATA_WIDTH-1:0] data1_i , data2_i , 
    input logic [DATA_WIDTH-1:0] zeta_i ,

    output logic [DATA_WIDTH-1:0] data2_o , data1_o 
);
    logic [DATA_WIDTH-1:0] data2 , data1 ;

    BU_v2 NTT(
        .clk(clk_i) ,
        .rstn(reset_ni) ,
        .ct_mode(1'b1) ,

        .rs1_i(data1_i) ,
        .rs2_i(data2_i) ,
        .w_i(zeta_i) ,

        .rs1_o(data1) ,
        .rs2_o(data2)
    );
    BU_v2 INTT(
        .clk(clk_i) ,
        .rstn(reset_ni) ,
        .ct_mode(1'b0) ,

        .rs1_i(data1) ,
        .rs2_i(data2) ,
        .w_i(zeta_i) ,

        .rs1_o(data1_o) ,
        .rs2_o(data2_o)
    ) ;

endmodule : DigitalTop_v4