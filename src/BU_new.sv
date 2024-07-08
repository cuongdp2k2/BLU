/* verilator lint_off UNOPTFLAT */
/* verilator lint_off WIDTH */
/* verilator lint_off UNUSED */
module BU_new (
    input logic clk_i, rst_ni,
    input logic CT_nGS_i ,
    input signed [31:0] u_i , t_i , w_i ,

    output logic [31:0] u_o , t_o 
) ;
    reg [31:0] u_i_temp,t_i_temp,w_i_temp ;
    reg [31:0] u_o_temp,t_o_temp ;
    logic signed [31:0] u_reduce32 , t_reduce32 , w_reduce32 ;
    logic signed [31:0] u_temp1 , t_temp1, u_temp2, t_temp2  ;
    logic signed [31:0] u_ct , t_ct ;
    logic signed [31:0] add_reduce , sub_reduce , mult_reduce ;
    logic signed [31:0] t_selected , mult_inp ;
    logic signed [31:0] add2modular , sub2modular ;
    logic signed [63:0] mult2modular ;

    always @(posedge clk_i) begin
        u_i_temp <= u_i      ;
        t_i_temp <= t_i      ;
        w_i_temp <= w_i      ;
        u_o_temp <= u_temp2 ;
        t_o_temp <= t_temp2 ;
    end

    Modulus Red_u2Q (
        .A_i (u_i_temp) ,
        .A_o (u_reduce32)
    );    

    assign u_ct = (CT_nGS_i) ? u_i_temp : u_reduce32;

    Modulus Red_t2Q(
        .A_i(t_i_temp) ,
        .A_o(t_reduce32)
    );

    Modulus Red_w2Q(
        .A_i(w_i_temp) ,
        .A_o(w_reduce32)
    );

    assign t_ct = (CT_nGS_i) ? t_i_temp : t_reduce32 ;

    assign t_selected = (CT_nGS_i) ? t_ct : mult_reduce ;
    assign mult_inp   = (CT_nGS_i) ? sub_reduce : t_ct  ;

    // add_modular
    assign add2modular = u_ct + t_selected ;

    Modulus Add_Modular (
        .A_i (add2modular) ,
        .A_o (add_reduce) 
    );
    
    // sub_modular
    assign sub2modular = u_ct - t_selected ;

    Modulus Sub_Modular(
        .A_i (sub2modular) ,
        .A_o (sub_reduce)
    ) ; 

    // mult_modular
    assign mult2modular = mult_inp * w_reduce32 ;

    MontRED MontModular(
        .A_i(mult2modular) ,
        .A_o(mult_reduce)
    );

    // Output
    assign u_temp1 = (CT_nGS_i) ? add2modular >> 1 : add2modular ;
    assign t_temp1 = (CT_nGS_i) ? sub2modular >> 1 : sub2modular ;
    // assign u_temp1 = (CT_nGS_i) ? add_reduce >> 1 : add_reduce ;
    // assign t_temp1 = (CT_nGS_i) ? sub_reduce >> 1 : sub_reduce ;

    MontRED Red2u (
        .A_i(u_temp1),
        .A_o(u_temp2)
    );

    MontRED Red2t (
        .A_i(t_temp1 ),
        .A_o(t_temp2)
    );

    assign u_o = (rst_ni) ? u_o_temp : 0 ;
    assign t_o = (rst_ni) ? t_o_temp : 0 ;

endmodule : BU_new
