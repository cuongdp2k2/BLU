module ModulusComponent #(
    parameter Q = 8380417 
)(
    input logic [31:0] A_i ,     // Input A_i
    //input [31:0] Q,   // Q
    output reg [31:0] A_o    // Modulus A_o
);
    reg signed [31:0] temp;

    always_comb begin
        temp = A_i - (Q * (A_i / Q));
        A_o = (temp >= 0) ? temp : temp + Q;
    end

endmodule : ModulusComponent
