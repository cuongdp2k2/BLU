module DigitalTop_v2 #(
    parameter DATA_WIDTH = 32     
) (
    input logic reset_ni ,
    input logic [2*DATA_WIDTH-1:0] data1_i , data2_i , 
    input logic [DATA_WIDTH-1:0] zeta_i ,

    output logic [2*DATA_WIDTH-1:0] data2_o , data1_o 
);
    logic  [2*DATA_WIDTH-1:0] data1_intt , data2_intt ;
    
    BU2x2_Unit #(.DATA_WIDTH(DATA_WIDTH)) ntt_comp (
        .reset_ni(reset_ni) ,
        .data1_i(data1_i) ,
        .is_GS_BU(1'b1) ,
        .data2_i(data2_i) ,
        .zeta_i(zeta_i) ,

        .data1_o (data1_intt) ,
        .data2_o (data2_intt) 
    );

    BU2x2_Unit #(.DATA_WIDTH(DATA_WIDTH)) intt_comp (
        .reset_ni(reset_ni) ,
        .data1_i(data1_intt) ,
        .data2_i(data2_intt) ,
        .is_GS_BU(1'b0) ,
        .zeta_i(zeta_i) ,

        .data1_o (data1_o) ,
        .data2_o (data2_o) 
    ) ;
endmodule : DigitalTop_v2