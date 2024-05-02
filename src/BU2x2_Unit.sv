module BU2x2_Unit #(
    parameter DATA_WIDTH = 32 , 
    parameter Val_Q = 8380417 
)(
    input logic reset_ni ,
    input logic is_GS_BU ,
    input logic [2*DATA_WIDTH-1:0] data1_i , data2_i ,
    input logic [DATA_WIDTH-1:0] zeta_i ,

    output logic [2*DATA_WIDTH-1:0] data2_o , data1_o 
);
    // Wires
    logic [DATA_WIDTH-1:0]   zeta_temp ;
    logic [2*DATA_WIDTH-1:0] w ;
    logic [2*DATA_WIDTH-1:0] u , _u_ , u_div2 ;
    logic [2*DATA_WIDTH-1:0] t , _t_ , t_div2 ;
    logic [2*DATA_WIDTH-1:0] data1_o_temp ;
    logic [2*DATA_WIDTH-1:0] data2_o_temp ;

    // Stage_1
    ModulusComponent mod_Q (
        .A_i(zeta_i) ,
        .A_o(zeta_temp)
    );
    assign w[63:0] = (zeta_temp[31]) ? {32'hffffffff,zeta_temp} : {32'h0,zeta_temp} ;

    // Stage_2
    assign u = (is_GS_BU) ? {{DATA_WIDTH{data1_i[DATA_WIDTH-1]}},data1_i[DATA_WIDTH-1:0] } : data1_i ;
    assign t = (is_GS_BU) ? data2_i[DATA_WIDTH-1:0] * w : data2_i ;

    // Stage_3
    assign _u_ = u + t ;
    assign _t_ = u - t ;

    //  Stage_4 
    assign u_div2 = _u_ / 2 ;
    assign t_div2 = _t_ / 2 ;

    // Stage_5 
    assign data1_o_temp = (is_GS_BU) ? _u_ : u_div2 ;
    assign data2_o_temp = (is_GS_BU) ? _t_ : t_div2 / w ; 

    // Stage_6
    assign data1_o = (reset_ni) ? data1_o_temp : 0 ;
    assign data2_o = (reset_ni) ? data2_o_temp : 0 ;

endmodule