/* verilator lint_off WIDTH */
module BU #(
    parameter WIDTH = 32
) (
    // input
    input logic clk_i, rstn_i,
    input logic ct_i ,
    input signed [WIDTH-1:0] a_i , b_i , q_i ,
    
    // output
    output logic [2*WIDTH-1:0] x_o , y_o  
);
    reg [2*WIDTH-1:0] a_reg , b_reg ;
    reg [WIDTH-1:0]   q_reg ;
    logic [2*WIDTH-1:0] b_mul_q ; 
    logic [2*WIDTH-1:0] b_sel_data ;
    logic [2*WIDTH-1:0] a_sub_b ;
    logic [2*WIDTH-1:0] a_sub_b_mul_q ;

    always @(posedge clk_i or negedge rstn_i) begin
        if (!rstn_i) begin
            a_reg <= 0  ;
            b_reg <= 0  ;
            q_reg <= 0  ;
        end else begin
            a_reg <= {{32{a_i[WIDTH-1]}},a_i}     ; 
            b_reg <= {{32{b_i[WIDTH-1]}},b_i}     ;
            q_reg <= q_i    ;
        end
    end

    mul_comp bXq (
        .a_i (b_reg[WIDTH-1:0]) , 
        .b_i (q_reg[WIDTH-1:0]) ,

        .sum_o(b_mul_q)
    );

    assign b_sel_data = (ct_i) ? b_mul_q : b_reg ;

    assign x_o = (!rstn_i) ? 0 : a_reg + b_sel_data  ;

    assign a_sub_b = a_reg - b_sel_data ;

    mul_comp q_X_a_sub_b (
        .a_i (a_sub_b[WIDTH-1:0]) ,
        .b_i (q_reg[WIDTH-1:0])   ,
        
        .sum_o(a_sub_b_mul_q) 
    );

    assign y_o = (!rstn_i)? 0 : (ct_i) ? a_sub_b : a_sub_b_mul_q ;

endmodule : BU
/* verilator lint_on WIDTH */    
