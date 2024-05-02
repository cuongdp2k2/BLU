/* verilator lint_off UNUSED */
/* verilator lint_off WIDTH */
module INTT_BU #(
    parameter DATA_WIDTH = 32 , 
    parameter Val_Q = 8380417 
) (
    input logic reset_ni ,
    input logic [2*DATA_WIDTH-1:0] data1_i , data2_i , 
    input logic [DATA_WIDTH-1:0] w_i ,

    output logic [DATA_WIDTH-1:0] intt_data2_o , intt_data1_o 
);
    logic  [2*DATA_WIDTH-1:0] u ;
    logic  [2*DATA_WIDTH-1:0] t ;
    logic  [2*DATA_WIDTH-1:0] half_u ;
    logic  [2*DATA_WIDTH-1:0] half_t ;
    logic  [2*DATA_WIDTH-1:0] intt_data1_temp , intt_data2_temp ;
    logic  [DATA_WIDTH-1:0]  w_Q ;

    // assign w_Q = w_i % Val_Q ;
    ModulusComponent genW_Q (
        .A_i(w_i) ,
        .A_o(w_Q)
    );

    always_comb begin : NTT
        if(!reset_ni) begin
            intt_data1_o = 0 ;
            intt_data2_o = 0 ;
        end else begin
            u = data1_i + data2_i ;
            t = data1_i - data2_i ;
            half_u = u / 2 ;
            half_t = t / 2 ;
            intt_data1_temp = half_u ;
            intt_data2_temp = ( half_t / {{32{w_Q[DATA_WIDTH-1]}},w_Q} ) ;

            intt_data1_o = intt_data1_temp[31:0] ;
            intt_data2_o = intt_data2_temp[31:0] ;
        end
    end
    
endmodule : INTT_BU 
/* verilator lint_on WIDTH */
/* verilator lint_on UNUSED */