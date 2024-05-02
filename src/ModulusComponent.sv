module ModulusComponent #(
    parameter divisor = 8380417 
)(
    input logic [31:0] A_i ,     // Input A_i
    //input [31:0] divisor,   // Divisor
    output reg [31:0] A_o    // Modulus A_o
);
    reg signed [31:0] temp;

    always_comb begin
        temp = A_i - (divisor * (A_i / divisor));
        A_o = (temp >= 0) ? temp : temp + divisor;
    end

endmodule : ModulusComponent
