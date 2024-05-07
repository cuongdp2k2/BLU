/* verilator lint_off WIDTH */
module top #(
    parameter DATA_WIDTH = 32 ,
    parameter QINV = 58728449 ,
    parameter Q    = 8380417  
)(
    input logic reset_ni , clk_i,
    input logic [DATA_WIDTH-1:0] data1_i , data2_i , 
    input logic [DATA_WIDTH-1:0] zeta_i ,

    output logic [DATA_WIDTH-1:0] data2_o , data1_o 
);
    DigitalTop_v3 dut (
        .*
    );

    always @(posedge clk_i) begin
        
    end
endmodule : top 
/* verilator lint_on WIDTH */
