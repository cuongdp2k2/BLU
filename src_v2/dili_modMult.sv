/* verilator lint_off ENDLABEL */
/* verilator lint_off WIDTH */
/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSED */
module DSP0 (
    input logic [22:0] A_i,
    input logic [5:0]  B_i,
    input logic        rst_ni, clk_i,

    output reg [28:0]  Res_o 
);
    logic [28:0] Res_temp ;
    assign Res_temp = A_i * B_i ;

    always @(posedge clk_i or negedge rst_ni ) begin
        Res_o <= (rst_ni) ? Res_temp : 0 ;
    end

endmodule : DSP0

module DSP1 (
    input logic [22:0] A_i ,
    input logic [16:0] B_i ,
    input logic [28:0] C_i ,
    input logic        rst_ni , clk_i ,

    output reg [45:0] U_o 
);
    reg [39:0] mult_reg ;

    logic [45:0] C_shift17 ;
    logic [39:0] res_mult ;
    logic [46:0] res_add ;

    assign res_mult = A_i * B_i ;
    assign C_shift17 = C_i << 17 ;
    assign res_add  = mult_reg + C_shift17 ;

    always @(posedge clk_i or negedge rst_ni) begin
        mult_reg <= (!rst_ni) ? 0 : res_mult ;
        U_o      <= (rst_ni)  ? res_add : 0  ;
    end
endmodule : DSP1

module UH_Mult (
    input logic [23:0] V_i ,
    output logic [24:0] V_o 
);
    logic [24:0] V1_H ;
    logic [34:0] V1   ;
    logic [24:0] V_shift1 ;
    logic [25:0] V2 ;
    logic [34:0] V12 ;

    assign V1_H = V_i + V_i[23:10] ;
    assign V_shift1 = V_i << 1 ;
    assign V2 = V_shift1 + V_i + V_i[23:1] ;
    assign V1 = {V1_H,V_i[9:0]} ;
    assign V12 = V1 + V2 ;
    assign V_o = V12[34:11] ;
endmodule : UH_Mult

module UL_Mult (
    input logic [23:0] W_i ,
    output logic [23:0] X_o 
);
    logic [10:0] W_s ;

    assign W_s = W_i[23:13] - W_i[10:0] ;
    assign X_o[23] = W_s[10] ^ W_i[0] ;
    assign X_o[22:13] = W_s[9:0] ;
    assign X_o[12:0] = W_i[12:0] ;
endmodule : UL_Mult

module ModularReduction #(
    parameter Q = 8370417 ,
    parameter L = 24 ,
    parameter T = 8396807 
)(
    input logic [45:0] U_i ,
    input logic        rst_ni , clk_i ,
    output reg [23:0] U_o 
);
    reg [23:0] W_reg ;
    reg [23:0] Y_reg ;

    logic [23:0] W_wire ;
    logic [23:0] X_wire ;
    logic [23:0] subYX  ;
    logic [23:0] subYXQ ;
    logic [23:0] U_temp ;

    UH_Mult VxT_shift24(
        .V_i(U_i[45:22]) ,
        .V_o(W_wire) 
    );

    UL_Mult WxQ_mod_2power24(
        .W_i(W_reg) ,
        .X_o(X_wire)
    );

    assign subYX = Y_reg - X_wire ;
    assign subYXQ = subYX - Q ; 
    assign U_temp = (subYXQ[23]) ? subYX : subYXQ ;

    always @(posedge clk_i or negedge rst_ni) begin
        W_reg <= (rst_ni) ? W_wire : 0 ;
        Y_reg <= (rst_ni) ? U_i[23:0] : 0 ;
        U_o   <= (rst_ni) ? U_temp : 0 ;
    end

endmodule : ModularReduction

module dili_modMult #(
    parameter Q = 8370417 ,
    parameter L = 24 ,
    parameter T = 8396807 
) (
    input logic        rst_ni , clk_i ,
    input logic  [22:0] A_i , B_i ,
    output reg   [23:0] Res_o 
) ;
    logic [28:0] dsp0_2_dsp1 ;
    logic [45:0] dsp1_2_mr   ;

    DSP0 DSP_0 (
        .A_i (A_i) , 
        .B_i (B_i[22:17]) ,
        .rst_ni (rst_ni) ,
        .clk_i (clk_i) ,

        .Res_o(dsp0_2_dsp1)
    ) ;

    DSP1 DSP_1 (
        .A_i (A_i) ,
        .B_i (B_i[16:0]) ,
        .C_i (dsp0_2_dsp1) ,
        .rst_ni (rst_ni) ,
        .clk_i (clk_i) ,

        .U_o (dsp1_2_mr)
    ) ;

    ModularReduction MR (
        .U_i (dsp1_2_mr) ,
        .rst_ni(rst_ni) ,
        .clk_i (clk_i) ,

        .U_o (Res_o)
    ) ;
endmodule : dili_modMult