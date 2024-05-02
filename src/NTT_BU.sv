/* verilator lint_off UNUSED */
module NTT_BU #(
    parameter DATA_WIDTH = 32 , 
    parameter Val_Q = 8380417 
) (
    input logic reset_ni ,
    input logic [DATA_WIDTH-1:0] data1_i , data2_i , w_i ,

    output logic [2*DATA_WIDTH-1:0] ntt_data2_o , ntt_data1_o 
);
    logic  [2*DATA_WIDTH-1:0] u ;
    logic  [2*DATA_WIDTH-1:0] t ;
    logic  [DATA_WIDTH-1:0] w_Q ;

    // assign w_Q = w_i % Val_Q ;
    ModulusComponent genW_Q (
        .A_i(w_i) ,
        .A_o(w_Q)
    );

    // always_comb begin : ntt_comp
    //     if(!reset_ni) begin
    //         ntt_data1_o = 0 ;
    //         ntt_data2_o = 0 ;
    //     end else begin
    //         u = {{DATA_WIDTH{data1_i[DATA_WIDTH-1]}},data1_i } ;
    //         t = data2_i * w_Q ;
    //         ntt_data1_o = (u + t);
    //         ntt_data2_o = (u - t);
    //     end
    // end
    assign u = {{DATA_WIDTH{data1_i[DATA_WIDTH-1]}},data1_i } ;
    assign t =  data2_i * w_Q ;
    assign ntt_data1_o = (reset_ni) ? u + t : 0 ;
    assign ntt_data2_o = (reset_ni) ? u - t : 0 ;

endmodule : NTT_BU 
/* verilator lint_on UNUSED */