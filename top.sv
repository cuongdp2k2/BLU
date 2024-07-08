/* verilator lint_off WIDTH */
/* verilator lint_off UNUSED */
module top #(
    parameter DATA_WIDTH = 32 ,
    parameter QINV = 58728449 ,
    parameter Q    = 8380417  
)(
    input logic        rst_ni , clk_i ,
    input logic  [22:0] A_i , B_i ,
    output reg   [23:0] Res_o 
);
    dili_modMult dut (
        .*
    );

    // always @(posedge clk_i) begin
        
    // end
endmodule : top 
/* verilator lint_on WIDTH */
