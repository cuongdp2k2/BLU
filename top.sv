/* verilator lint_off WIDTH */
module top #(
    parameter DATA_WIDTH=32
) (
    input logic clk_i ,
    input logic [3:0] a_i , b_i ,
    input logic        carry_i ,

    output logic [3:0] sum_o,
    output logic       carry_o 
);
    Brent_Kung_adder dut (
        .*
    );

    always @(posedge clk_i) begin
        
    end
endmodule : top 
/* verilator lint_on WIDTH */
