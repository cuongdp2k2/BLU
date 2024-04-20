module DigitalTop #(
    parameter DATA_WIDTH = 32     
)(
    input logic reset_ni ,
    input logic [DATA_WIDTH-1:0] data1_i , data2_i , w_i ,

    output logic [DATA_WIDTH-1:0] data2_o , data1_o 
);

    logic  [2*DATA_WIDTH-1:0] data1_intt , data2_intt ;
    
    NTT_BU #(.DATA_WIDTH(DATA_WIDTH)) ntt_comp (
        .reset_ni(reset_ni) ,
        .data1_i(data1_i) ,
        .data2_i(data2_i) ,
        .w_i(w_i) ,

        .ntt_data1_o (data1_intt) ,
        .ntt_data2_o (data2_intt) 
    );

    INTT_BU #(.DATA_WIDTH(DATA_WIDTH)) intt_comp (
        .reset_ni(reset_ni) ,
        .data1_i(data1_intt) ,
        .data2_i(data2_intt) ,
        .w_i(w_i) ,

        .intt_data1_o (data1_o) ,
        .intt_data2_o (data2_o) 
    ) ;

endmodule : DigitalTop
