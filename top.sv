/* verilator lint_off WIDTH */
module top #(
    parameter DATA_WIDTH=32
) (
    input logic clk_i ,
    input logic [15:0] a_i , b_i ,
    input logic       carry_i ,

    output logic [15:0] sum_o ,
    output logic       carry_o
);
    BK_adder_16bit dut (
        .*
    );

    always @(posedge clk_i) begin
        
    end
endmodule : top 
/* verilator lint_on WIDTH */
