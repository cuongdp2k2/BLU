/* verilator lint_off WIDTH */
module top #(
    parameter DATA_WIDTH=32
) (
    input logic clk_i , reset_ni ,
    input logic [DATA_WIDTH-1:0] data1_i , data2_i , w_i ,

    output logic [DATA_WIDTH-1:0] data2_o , data1_o 
);
    DigitalTop dut (
        .*
    );

    always @(posedge clk_i) begin
        
    end
endmodule : top 
/* verilator lint_on WIDTH */
