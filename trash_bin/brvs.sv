module brvs #(
    parameter DATA_WIDTH = 32  
)(
    input logic [DATA_WIDTH-1:0] data_i ,
    output logic [DATA_WIDTH-1:0] data_o 
);
    genvar i ;
    generate
        for(i=0; i<DATA_WIDTH ; i++ ) 
            assign data_o[i] = data_i[DATA_WIDTH-1-i] ;
    endgenerate
endmodule