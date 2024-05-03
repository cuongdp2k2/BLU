/* verilator lint_off WIDTH */
module top #(
    parameter DATA_WIDTH=64
) (
    input logic clk_i , reset_ni ,
    input logic [DATA_WIDTH-1:0] data1_i , data2_i , 
    input logic [(DATA_WIDTH/2)-1:0] zeta_i ,

    output logic [(DATA_WIDTH/2)-1:0] zeta_o ,
    output logic [DATA_WIDTH-1:0] data2_o , data1_o 
);
    DigitalTop_v2 dut (
        .*
    );

    always @(posedge clk_i) begin
        
    end
endmodule : top 
/* verilator lint_on WIDTH */
