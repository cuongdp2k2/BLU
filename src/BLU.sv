/* verilator lint_off WIDTH */
module BLU #(
    parameter WIDTH = 8
) (
    // input
    input logic clk_i, rstn_i,
    input logic ct_i ,
    input unsigned [WIDTH-1:0] a_i , b_i , q_i ,
    
    // output
    output reg [2*WIDTH-1:0] x_o , y_o  
);
    reg [WIDTH:0] a_reg , b_reg , q_reg ;

    always @(posedge clk_i or negedge rstn_i) begin
        if (!rstn_i) begin
            a_reg <= 0  ;
            b_reg <= 0  ;
            q_reg <= 0  ;
            x_o   <= 0  ;
            y_o   <= 0  ;
        end else begin
            a_reg <= a_i     ; 
            b_reg <= b_i     ;
            q_reg <= q_i     ;
            
            if(ct_i) begin
                /*
                *  x = a + b * q ;
                *  y = a - b * q ;
                */
                x_o <= a_reg + b_reg * q_reg ;
                y_o <= a_reg - b_reg * q_reg ;
            end else begin
               /*
               *  x = q * ( a + b )
               *  y = q * ( a - b )
               */ 
               x_o <= ( a_reg + b_reg ) * q_reg ;
               y_o <= ( a_reg - b_reg ) * q_reg ;
            end
        end
    end
endmodule : BLU
/* verilator lint_on WIDTH */    