// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


//======================

void Vtop::trace(VerilatedFstC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vtop::traceInit(void* userp, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vtop::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vtop::traceInitTop(void* userp, VerilatedFst* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vtop::traceInitSub0(void* userp, VerilatedFst* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+272,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+273,"reset_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+274,"data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+276,"data2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+278,"zeta_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+279,"zeta_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+280,"data2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+282,"data1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+370,"top DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+272,"top clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+273,"top reset_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+274,"top data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+276,"top data2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+278,"top zeta_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+279,"top zeta_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+280,"top data2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+282,"top data1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+371,"top dut DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+273,"top dut reset_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+272,"top dut clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+274,"top dut data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+276,"top dut data2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+278,"top dut zeta_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+279,"top dut zeta_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+280,"top dut data2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+282,"top dut data1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+284,"top dut data1_intt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+286,"top dut data2_intt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+83,"top dut zeta_NTT2INTT",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+371,"top dut ntt_comp DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+372,"top dut ntt_comp Val_Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+273,"top dut ntt_comp reset_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+272,"top dut ntt_comp clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+373,"top dut ntt_comp is_GS_BU_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+274,"top dut ntt_comp data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+276,"top dut ntt_comp data2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+278,"top dut ntt_comp zeta_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+83,"top dut ntt_comp zeta_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+286,"top dut ntt_comp data2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+284,"top dut ntt_comp data1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        {int i; for (i=0; i<6; i++) {
                tracep->declBit(c+84+i*1,"top dut ntt_comp is_GS_BU",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));}}
        tracep->declBus(c+90,"top dut ntt_comp zeta32",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declQuad(c+91,"top dut ntt_comp zeta64",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+93+i*2,"top dut ntt_comp w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 63,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+103+i*2,"top dut ntt_comp u",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1), 63,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+111+i*2,"top dut ntt_comp u_div2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+3), 63,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+115+i*2,"top dut ntt_comp t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1), 63,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+123+i*2,"top dut ntt_comp t_div2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+3), 63,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+127+i*2,"top dut ntt_comp mul_res",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 63,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+131+i*2,"top dut ntt_comp data1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 63,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+137+i*2,"top dut ntt_comp data2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 63,0);}}
        tracep->declBus(c+372,"top dut ntt_comp mod_Q Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+278,"top dut ntt_comp mod_Q A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+90,"top dut ntt_comp mod_Q A_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+143,"top dut ntt_comp mod_Q temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+371,"top dut ntt_comp STG_0 DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+372,"top dut ntt_comp STG_0 Val_Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+273,"top dut ntt_comp STG_0 reset_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+272,"top dut ntt_comp STG_0 clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+373,"top dut ntt_comp STG_0 is_GS_BU_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+274,"top dut ntt_comp STG_0 data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+276,"top dut ntt_comp STG_0 data2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+91,"top dut ntt_comp STG_0 w_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+288,"top dut ntt_comp STG_0 is_GS_BU_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+289,"top dut ntt_comp STG_0 data2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+291,"top dut ntt_comp STG_0 data1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+293,"top dut ntt_comp STG_0 w_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+1,"top dut ntt_comp STG_0 is_GS_BU_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+2,"top dut ntt_comp STG_0 data2_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+4,"top dut ntt_comp STG_0 data1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+6,"top dut ntt_comp STG_0 w_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+371,"top dut ntt_comp STG_1 DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+372,"top dut ntt_comp STG_1 Val_Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+273,"top dut ntt_comp STG_1 reset_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+272,"top dut ntt_comp STG_1 clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+144,"top dut ntt_comp STG_1 is_GS_BU_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+145,"top dut ntt_comp STG_1 data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+147,"top dut ntt_comp STG_1 data2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+149,"top dut ntt_comp STG_1 data_mul_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+151,"top dut ntt_comp STG_1 w_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+295,"top dut ntt_comp STG_1 is_GS_BU_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+296,"top dut ntt_comp STG_1 data2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+298,"top dut ntt_comp STG_1 data1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+300,"top dut ntt_comp STG_1 data_mul_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+302,"top dut ntt_comp STG_1 w_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+8,"top dut ntt_comp STG_1 is_GS_BU_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+9,"top dut ntt_comp STG_1 data_mul_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+11,"top dut ntt_comp STG_1 data2_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+13,"top dut ntt_comp STG_1 data1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+15,"top dut ntt_comp STG_1 w_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+371,"top dut ntt_comp STG_2 DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+372,"top dut ntt_comp STG_2 Val_Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+273,"top dut ntt_comp STG_2 reset_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+272,"top dut ntt_comp STG_2 clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+153,"top dut ntt_comp STG_2 is_GS_BU_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+154,"top dut ntt_comp STG_2 u_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+156,"top dut ntt_comp STG_2 t_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+158,"top dut ntt_comp STG_2 w_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+304,"top dut ntt_comp STG_2 is_GS_BU_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+305,"top dut ntt_comp STG_2 u_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+307,"top dut ntt_comp STG_2 t_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+309,"top dut ntt_comp STG_2 w_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+17,"top dut ntt_comp STG_2 is_GS_BU_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+18,"top dut ntt_comp STG_2 u_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+20,"top dut ntt_comp STG_2 t_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+22,"top dut ntt_comp STG_2 w_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+371,"top dut ntt_comp STG_3 DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+372,"top dut ntt_comp STG_3 Val_Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+273,"top dut ntt_comp STG_3 reset_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+272,"top dut ntt_comp STG_3 clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+160,"top dut ntt_comp STG_3 is_GS_BU_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+161,"top dut ntt_comp STG_3 u_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+163,"top dut ntt_comp STG_3 t_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+165,"top dut ntt_comp STG_3 w_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+311,"top dut ntt_comp STG_3 is_GS_BU_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+312,"top dut ntt_comp STG_3 u_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+314,"top dut ntt_comp STG_3 t_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+316,"top dut ntt_comp STG_3 w_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+24,"top dut ntt_comp STG_3 is_GS_BU_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+25,"top dut ntt_comp STG_3 u_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+27,"top dut ntt_comp STG_3 t_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+29,"top dut ntt_comp STG_3 w_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+371,"top dut ntt_comp STG_4 DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+372,"top dut ntt_comp STG_4 Val_Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+273,"top dut ntt_comp STG_4 reset_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+272,"top dut ntt_comp STG_4 clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+167,"top dut ntt_comp STG_4 is_GS_BU_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+168,"top dut ntt_comp STG_4 u_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+170,"top dut ntt_comp STG_4 t_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+172,"top dut ntt_comp STG_4 u_div2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+174,"top dut ntt_comp STG_4 t_div2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+176,"top dut ntt_comp STG_4 w_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+318,"top dut ntt_comp STG_4 is_GS_BU_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+319,"top dut ntt_comp STG_4 u_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+321,"top dut ntt_comp STG_4 t_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+323,"top dut ntt_comp STG_4 u_div2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+325,"top dut ntt_comp STG_4 t_div2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+327,"top dut ntt_comp STG_4 w_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+31,"top dut ntt_comp STG_4 is_GS_BU_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+32,"top dut ntt_comp STG_4 u_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+34,"top dut ntt_comp STG_4 t_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+36,"top dut ntt_comp STG_4 u_div2_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+38,"top dut ntt_comp STG_4 t_div2_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+40,"top dut ntt_comp STG_4 w_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+371,"top dut intt_comp DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+372,"top dut intt_comp Val_Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+273,"top dut intt_comp reset_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+272,"top dut intt_comp clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+374,"top dut intt_comp is_GS_BU_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+284,"top dut intt_comp data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+286,"top dut intt_comp data2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+83,"top dut intt_comp zeta_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+279,"top dut intt_comp zeta_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+280,"top dut intt_comp data2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+282,"top dut intt_comp data1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        {int i; for (i=0; i<6; i++) {
                tracep->declBit(c+178+i*1,"top dut intt_comp is_GS_BU",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));}}
        tracep->declBus(c+184,"top dut intt_comp zeta32",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declQuad(c+185,"top dut intt_comp zeta64",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+187+i*2,"top dut intt_comp w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 63,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+197+i*2,"top dut intt_comp u",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1), 63,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+205+i*2,"top dut intt_comp u_div2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+3), 63,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+209+i*2,"top dut intt_comp t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1), 63,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+217+i*2,"top dut intt_comp t_div2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+3), 63,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+221+i*2,"top dut intt_comp mul_res",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 63,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+225+i*2,"top dut intt_comp data1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 63,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+231+i*2,"top dut intt_comp data2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 63,0);}}
        tracep->declBus(c+372,"top dut intt_comp mod_Q Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+83,"top dut intt_comp mod_Q A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+184,"top dut intt_comp mod_Q A_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+237,"top dut intt_comp mod_Q temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+371,"top dut intt_comp STG_0 DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+372,"top dut intt_comp STG_0 Val_Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+273,"top dut intt_comp STG_0 reset_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+272,"top dut intt_comp STG_0 clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+374,"top dut intt_comp STG_0 is_GS_BU_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+284,"top dut intt_comp STG_0 data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+286,"top dut intt_comp STG_0 data2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+185,"top dut intt_comp STG_0 w_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+329,"top dut intt_comp STG_0 is_GS_BU_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+330,"top dut intt_comp STG_0 data2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+332,"top dut intt_comp STG_0 data1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+334,"top dut intt_comp STG_0 w_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+42,"top dut intt_comp STG_0 is_GS_BU_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+43,"top dut intt_comp STG_0 data2_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+45,"top dut intt_comp STG_0 data1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+47,"top dut intt_comp STG_0 w_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+371,"top dut intt_comp STG_1 DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+372,"top dut intt_comp STG_1 Val_Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+273,"top dut intt_comp STG_1 reset_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+272,"top dut intt_comp STG_1 clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+238,"top dut intt_comp STG_1 is_GS_BU_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+239,"top dut intt_comp STG_1 data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+241,"top dut intt_comp STG_1 data2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+243,"top dut intt_comp STG_1 data_mul_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+245,"top dut intt_comp STG_1 w_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+336,"top dut intt_comp STG_1 is_GS_BU_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+337,"top dut intt_comp STG_1 data2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+339,"top dut intt_comp STG_1 data1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+341,"top dut intt_comp STG_1 data_mul_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+343,"top dut intt_comp STG_1 w_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+49,"top dut intt_comp STG_1 is_GS_BU_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+50,"top dut intt_comp STG_1 data_mul_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+52,"top dut intt_comp STG_1 data2_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+54,"top dut intt_comp STG_1 data1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+56,"top dut intt_comp STG_1 w_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+371,"top dut intt_comp STG_2 DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+372,"top dut intt_comp STG_2 Val_Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+273,"top dut intt_comp STG_2 reset_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+272,"top dut intt_comp STG_2 clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+247,"top dut intt_comp STG_2 is_GS_BU_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+248,"top dut intt_comp STG_2 u_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+250,"top dut intt_comp STG_2 t_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+252,"top dut intt_comp STG_2 w_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+345,"top dut intt_comp STG_2 is_GS_BU_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+346,"top dut intt_comp STG_2 u_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+348,"top dut intt_comp STG_2 t_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+350,"top dut intt_comp STG_2 w_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+58,"top dut intt_comp STG_2 is_GS_BU_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+59,"top dut intt_comp STG_2 u_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+61,"top dut intt_comp STG_2 t_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+63,"top dut intt_comp STG_2 w_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+371,"top dut intt_comp STG_3 DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+372,"top dut intt_comp STG_3 Val_Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+273,"top dut intt_comp STG_3 reset_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+272,"top dut intt_comp STG_3 clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+254,"top dut intt_comp STG_3 is_GS_BU_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+255,"top dut intt_comp STG_3 u_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+257,"top dut intt_comp STG_3 t_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+259,"top dut intt_comp STG_3 w_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+352,"top dut intt_comp STG_3 is_GS_BU_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+353,"top dut intt_comp STG_3 u_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+355,"top dut intt_comp STG_3 t_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+357,"top dut intt_comp STG_3 w_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+65,"top dut intt_comp STG_3 is_GS_BU_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+66,"top dut intt_comp STG_3 u_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+68,"top dut intt_comp STG_3 t_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+70,"top dut intt_comp STG_3 w_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+371,"top dut intt_comp STG_4 DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+372,"top dut intt_comp STG_4 Val_Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+273,"top dut intt_comp STG_4 reset_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+272,"top dut intt_comp STG_4 clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+261,"top dut intt_comp STG_4 is_GS_BU_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+262,"top dut intt_comp STG_4 u_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+264,"top dut intt_comp STG_4 t_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+266,"top dut intt_comp STG_4 u_div2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+268,"top dut intt_comp STG_4 t_div2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+270,"top dut intt_comp STG_4 w_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+359,"top dut intt_comp STG_4 is_GS_BU_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+360,"top dut intt_comp STG_4 u_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+362,"top dut intt_comp STG_4 t_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+364,"top dut intt_comp STG_4 u_div2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+366,"top dut intt_comp STG_4 t_div2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+368,"top dut intt_comp STG_4 w_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+72,"top dut intt_comp STG_4 is_GS_BU_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+73,"top dut intt_comp STG_4 u_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+75,"top dut intt_comp STG_4 t_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+77,"top dut intt_comp STG_4 u_div2_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+79,"top dut intt_comp STG_4 t_div2_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+81,"top dut intt_comp STG_4 w_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    }
}

void Vtop::traceRegister(VerilatedFst* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vtop::traceFullTop0(void* userp, VerilatedFst* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vtop::traceFullSub0(void* userp, VerilatedFst* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_0__DOT__is_GS_BU_reg));
        tracep->fullQData(oldp+2,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_0__DOT__data2_reg),64);
        tracep->fullQData(oldp+4,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_0__DOT__data1_reg),64);
        tracep->fullQData(oldp+6,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_0__DOT__w_reg),64);
        tracep->fullBit(oldp+8,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__is_GS_BU_reg));
        tracep->fullQData(oldp+9,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__data_mul_reg),64);
        tracep->fullQData(oldp+11,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__data2_reg),64);
        tracep->fullQData(oldp+13,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__data1_reg),64);
        tracep->fullQData(oldp+15,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__w_reg),64);
        tracep->fullBit(oldp+17,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_2__DOT__is_GS_BU_reg));
        tracep->fullQData(oldp+18,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_2__DOT__u_reg),64);
        tracep->fullQData(oldp+20,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_2__DOT__t_reg),64);
        tracep->fullQData(oldp+22,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_2__DOT__w_reg),64);
        tracep->fullBit(oldp+24,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_3__DOT__is_GS_BU_reg));
        tracep->fullQData(oldp+25,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_3__DOT__u_reg),64);
        tracep->fullQData(oldp+27,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_3__DOT__t_reg),64);
        tracep->fullQData(oldp+29,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_3__DOT__w_reg),64);
        tracep->fullBit(oldp+31,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__is_GS_BU_reg));
        tracep->fullQData(oldp+32,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__u_reg),64);
        tracep->fullQData(oldp+34,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__t_reg),64);
        tracep->fullQData(oldp+36,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__u_div2_reg),64);
        tracep->fullQData(oldp+38,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__t_div2_reg),64);
        tracep->fullQData(oldp+40,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__w_reg),64);
        tracep->fullBit(oldp+42,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_0__DOT__is_GS_BU_reg));
        tracep->fullQData(oldp+43,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_0__DOT__data2_reg),64);
        tracep->fullQData(oldp+45,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_0__DOT__data1_reg),64);
        tracep->fullQData(oldp+47,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_0__DOT__w_reg),64);
        tracep->fullBit(oldp+49,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__is_GS_BU_reg));
        tracep->fullQData(oldp+50,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__data_mul_reg),64);
        tracep->fullQData(oldp+52,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__data2_reg),64);
        tracep->fullQData(oldp+54,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__data1_reg),64);
        tracep->fullQData(oldp+56,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__w_reg),64);
        tracep->fullBit(oldp+58,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_2__DOT__is_GS_BU_reg));
        tracep->fullQData(oldp+59,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_2__DOT__u_reg),64);
        tracep->fullQData(oldp+61,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_2__DOT__t_reg),64);
        tracep->fullQData(oldp+63,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_2__DOT__w_reg),64);
        tracep->fullBit(oldp+65,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_3__DOT__is_GS_BU_reg));
        tracep->fullQData(oldp+66,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_3__DOT__u_reg),64);
        tracep->fullQData(oldp+68,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_3__DOT__t_reg),64);
        tracep->fullQData(oldp+70,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_3__DOT__w_reg),64);
        tracep->fullBit(oldp+72,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__is_GS_BU_reg));
        tracep->fullQData(oldp+73,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__u_reg),64);
        tracep->fullQData(oldp+75,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__t_reg),64);
        tracep->fullQData(oldp+77,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__u_div2_reg),64);
        tracep->fullQData(oldp+79,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__t_div2_reg),64);
        tracep->fullQData(oldp+81,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__w_reg),64);
        tracep->fullIData(oldp+83,((IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w
                                           [4U])),32);
        tracep->fullBit(oldp+84,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU[0]));
        tracep->fullBit(oldp+85,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU[1]));
        tracep->fullBit(oldp+86,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU[2]));
        tracep->fullBit(oldp+87,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU[3]));
        tracep->fullBit(oldp+88,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU[4]));
        tracep->fullBit(oldp+89,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU[5]));
        tracep->fullIData(oldp+90,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__zeta32),32);
        tracep->fullQData(oldp+91,(((0x80000000U & vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__zeta32)
                                     ? (0xffffffff00000000ULL 
                                        | (QData)((IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__zeta32)))
                                     : (QData)((IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__zeta32)))),64);
        tracep->fullQData(oldp+93,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w[0]),64);
        tracep->fullQData(oldp+95,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w[1]),64);
        tracep->fullQData(oldp+97,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w[2]),64);
        tracep->fullQData(oldp+99,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w[3]),64);
        tracep->fullQData(oldp+101,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w[4]),64);
        tracep->fullQData(oldp+103,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u[0]),64);
        tracep->fullQData(oldp+105,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u[1]),64);
        tracep->fullQData(oldp+107,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u[2]),64);
        tracep->fullQData(oldp+109,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u[3]),64);
        tracep->fullQData(oldp+111,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u_div2[0]),64);
        tracep->fullQData(oldp+113,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u_div2[1]),64);
        tracep->fullQData(oldp+115,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t[0]),64);
        tracep->fullQData(oldp+117,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t[1]),64);
        tracep->fullQData(oldp+119,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t[2]),64);
        tracep->fullQData(oldp+121,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t[3]),64);
        tracep->fullQData(oldp+123,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t_div2[0]),64);
        tracep->fullQData(oldp+125,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t_div2[1]),64);
        tracep->fullQData(oldp+127,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__mul_res[0]),64);
        tracep->fullQData(oldp+129,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__mul_res[1]),64);
        tracep->fullQData(oldp+131,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__data1[0]),64);
        tracep->fullQData(oldp+133,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__data1[1]),64);
        tracep->fullQData(oldp+135,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__data1[2]),64);
        tracep->fullQData(oldp+137,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__data2[0]),64);
        tracep->fullQData(oldp+139,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__data2[1]),64);
        tracep->fullQData(oldp+141,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__data2[2]),64);
        tracep->fullIData(oldp+143,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__mod_Q__DOT__temp),32);
        tracep->fullBit(oldp+144,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU
                                  [0U]));
        tracep->fullQData(oldp+145,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__data1
                                    [0U]),64);
        tracep->fullQData(oldp+147,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__data2
                                    [0U]),64);
        tracep->fullQData(oldp+149,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__mul_res
                                    [0U]),64);
        tracep->fullQData(oldp+151,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w
                                    [0U]),64);
        tracep->fullBit(oldp+153,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU
                                  [1U]));
        tracep->fullQData(oldp+154,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u
                                    [0U]),64);
        tracep->fullQData(oldp+156,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t
                                    [0U]),64);
        tracep->fullQData(oldp+158,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w
                                    [1U]),64);
        tracep->fullBit(oldp+160,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU
                                  [2U]));
        tracep->fullQData(oldp+161,((vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u
                                     [1U] + vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t
                                     [1U])),64);
        tracep->fullQData(oldp+163,((vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u
                                     [1U] - vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t
                                     [1U])),64);
        tracep->fullQData(oldp+165,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w
                                    [2U]),64);
        tracep->fullBit(oldp+167,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU
                                  [3U]));
        tracep->fullQData(oldp+168,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u
                                    [2U]),64);
        tracep->fullQData(oldp+170,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t
                                    [2U]),64);
        tracep->fullQData(oldp+172,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u_div2
                                    [0U]),64);
        tracep->fullQData(oldp+174,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t_div2
                                    [0U]),64);
        tracep->fullQData(oldp+176,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w
                                    [3U]),64);
        tracep->fullBit(oldp+178,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU[0]));
        tracep->fullBit(oldp+179,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU[1]));
        tracep->fullBit(oldp+180,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU[2]));
        tracep->fullBit(oldp+181,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU[3]));
        tracep->fullBit(oldp+182,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU[4]));
        tracep->fullBit(oldp+183,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU[5]));
        tracep->fullIData(oldp+184,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__zeta32),32);
        tracep->fullQData(oldp+185,(((0x80000000U & vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__zeta32)
                                      ? (0xffffffff00000000ULL 
                                         | (QData)((IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__zeta32)))
                                      : (QData)((IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__zeta32)))),64);
        tracep->fullQData(oldp+187,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w[0]),64);
        tracep->fullQData(oldp+189,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w[1]),64);
        tracep->fullQData(oldp+191,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w[2]),64);
        tracep->fullQData(oldp+193,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w[3]),64);
        tracep->fullQData(oldp+195,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w[4]),64);
        tracep->fullQData(oldp+197,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u[0]),64);
        tracep->fullQData(oldp+199,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u[1]),64);
        tracep->fullQData(oldp+201,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u[2]),64);
        tracep->fullQData(oldp+203,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u[3]),64);
        tracep->fullQData(oldp+205,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u_div2[0]),64);
        tracep->fullQData(oldp+207,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u_div2[1]),64);
        tracep->fullQData(oldp+209,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t[0]),64);
        tracep->fullQData(oldp+211,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t[1]),64);
        tracep->fullQData(oldp+213,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t[2]),64);
        tracep->fullQData(oldp+215,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t[3]),64);
        tracep->fullQData(oldp+217,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t_div2[0]),64);
        tracep->fullQData(oldp+219,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t_div2[1]),64);
        tracep->fullQData(oldp+221,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__mul_res[0]),64);
        tracep->fullQData(oldp+223,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__mul_res[1]),64);
        tracep->fullQData(oldp+225,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__data1[0]),64);
        tracep->fullQData(oldp+227,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__data1[1]),64);
        tracep->fullQData(oldp+229,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__data1[2]),64);
        tracep->fullQData(oldp+231,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__data2[0]),64);
        tracep->fullQData(oldp+233,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__data2[1]),64);
        tracep->fullQData(oldp+235,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__data2[2]),64);
        tracep->fullIData(oldp+237,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__mod_Q__DOT__temp),32);
        tracep->fullBit(oldp+238,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU
                                  [0U]));
        tracep->fullQData(oldp+239,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__data1
                                    [0U]),64);
        tracep->fullQData(oldp+241,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__data2
                                    [0U]),64);
        tracep->fullQData(oldp+243,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__mul_res
                                    [0U]),64);
        tracep->fullQData(oldp+245,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w
                                    [0U]),64);
        tracep->fullBit(oldp+247,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU
                                  [1U]));
        tracep->fullQData(oldp+248,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u
                                    [0U]),64);
        tracep->fullQData(oldp+250,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t
                                    [0U]),64);
        tracep->fullQData(oldp+252,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w
                                    [1U]),64);
        tracep->fullBit(oldp+254,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU
                                  [2U]));
        tracep->fullQData(oldp+255,((vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u
                                     [1U] + vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t
                                     [1U])),64);
        tracep->fullQData(oldp+257,((vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u
                                     [1U] - vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t
                                     [1U])),64);
        tracep->fullQData(oldp+259,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w
                                    [2U]),64);
        tracep->fullBit(oldp+261,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU
                                  [3U]));
        tracep->fullQData(oldp+262,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u
                                    [2U]),64);
        tracep->fullQData(oldp+264,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t
                                    [2U]),64);
        tracep->fullQData(oldp+266,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u_div2
                                    [0U]),64);
        tracep->fullQData(oldp+268,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t_div2
                                    [0U]),64);
        tracep->fullQData(oldp+270,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w
                                    [3U]),64);
        tracep->fullBit(oldp+272,(vlTOPp->clk_i));
        tracep->fullBit(oldp+273,(vlTOPp->reset_ni));
        tracep->fullQData(oldp+274,(vlTOPp->data1_i),64);
        tracep->fullQData(oldp+276,(vlTOPp->data2_i),64);
        tracep->fullIData(oldp+278,(vlTOPp->zeta_i),32);
        tracep->fullIData(oldp+279,(vlTOPp->zeta_o),32);
        tracep->fullQData(oldp+280,(vlTOPp->data2_o),64);
        tracep->fullQData(oldp+282,(vlTOPp->data1_o),64);
        tracep->fullQData(oldp+284,(((IData)(vlTOPp->reset_ni)
                                      ? (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU
                                         [4U] ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u
                                         [3U] : vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u_div2
                                         [1U]) : 0ULL)),64);
        tracep->fullQData(oldp+286,(((IData)(vlTOPp->reset_ni)
                                      ? (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU
                                         [4U] ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t
                                         [3U] : VL_DIV_QQQ(64, 
                                                           vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t_div2
                                                           [1U], 
                                                           vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w
                                                           [4U]))
                                      : 0ULL)),64);
        tracep->fullBit(oldp+288,(((IData)(vlTOPp->reset_ni)
                                    ? (1U & (IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_0__DOT__is_GS_BU_reg))
                                    : 0U)));
        tracep->fullQData(oldp+289,(((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_0__DOT__data2_reg
                                      : 0ULL)),64);
        tracep->fullQData(oldp+291,(((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_0__DOT__data1_reg
                                      : 0ULL)),64);
        tracep->fullQData(oldp+293,(((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_0__DOT__w_reg
                                      : 0ULL)),64);
        tracep->fullBit(oldp+295,(((IData)(vlTOPp->reset_ni)
                                    ? (1U & (IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__is_GS_BU_reg))
                                    : 0U)));
        tracep->fullQData(oldp+296,(((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__data2_reg
                                      : 0ULL)),64);
        tracep->fullQData(oldp+298,(((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__data1_reg
                                      : 0ULL)),64);
        tracep->fullQData(oldp+300,(((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__data_mul_reg
                                      : 0ULL)),64);
        tracep->fullQData(oldp+302,(((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__w_reg
                                      : 0ULL)),64);
        tracep->fullBit(oldp+304,(((IData)(vlTOPp->reset_ni)
                                    ? (1U & (IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_2__DOT__is_GS_BU_reg))
                                    : 0U)));
        tracep->fullQData(oldp+305,(((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_2__DOT__u_reg
                                      : 0ULL)),64);
        tracep->fullQData(oldp+307,(((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_2__DOT__t_reg
                                      : 0ULL)),64);
        tracep->fullQData(oldp+309,(((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_2__DOT__w_reg
                                      : 0ULL)),64);
        tracep->fullBit(oldp+311,(((IData)(vlTOPp->reset_ni)
                                    ? (1U & (IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_3__DOT__is_GS_BU_reg))
                                    : 0U)));
        tracep->fullQData(oldp+312,(((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_3__DOT__u_reg
                                      : 0ULL)),64);
        tracep->fullQData(oldp+314,(((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_3__DOT__t_reg
                                      : 0ULL)),64);
        tracep->fullQData(oldp+316,(((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_3__DOT__w_reg
                                      : 0ULL)),64);
        tracep->fullBit(oldp+318,(((IData)(vlTOPp->reset_ni)
                                    ? (1U & (IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__is_GS_BU_reg))
                                    : 0U)));
        tracep->fullQData(oldp+319,(((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__u_reg
                                      : 0ULL)),64);
        tracep->fullQData(oldp+321,(((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__t_reg
                                      : 0ULL)),64);
        tracep->fullQData(oldp+323,(((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__u_div2_reg
                                      : 0ULL)),64);
        tracep->fullQData(oldp+325,(((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__t_div2_reg
                                      : 0ULL)),64);
        tracep->fullQData(oldp+327,(((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__w_reg
                                      : 0ULL)),64);
        tracep->fullBit(oldp+329,(((IData)(vlTOPp->reset_ni)
                                    ? (1U & (IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_0__DOT__is_GS_BU_reg))
                                    : 0U)));
        tracep->fullQData(oldp+330,(((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_0__DOT__data2_reg
                                      : 0ULL)),64);
        tracep->fullQData(oldp+332,(((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_0__DOT__data1_reg
                                      : 0ULL)),64);
        tracep->fullQData(oldp+334,(((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_0__DOT__w_reg
                                      : 0ULL)),64);
        tracep->fullBit(oldp+336,(((IData)(vlTOPp->reset_ni)
                                    ? (1U & (IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__is_GS_BU_reg))
                                    : 0U)));
        tracep->fullQData(oldp+337,(((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__data2_reg
                                      : 0ULL)),64);
        tracep->fullQData(oldp+339,(((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__data1_reg
                                      : 0ULL)),64);
        tracep->fullQData(oldp+341,(((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__data_mul_reg
                                      : 0ULL)),64);
        tracep->fullQData(oldp+343,(((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__w_reg
                                      : 0ULL)),64);
        tracep->fullBit(oldp+345,(((IData)(vlTOPp->reset_ni)
                                    ? (1U & (IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_2__DOT__is_GS_BU_reg))
                                    : 0U)));
        tracep->fullQData(oldp+346,(((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_2__DOT__u_reg
                                      : 0ULL)),64);
        tracep->fullQData(oldp+348,(((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_2__DOT__t_reg
                                      : 0ULL)),64);
        tracep->fullQData(oldp+350,(((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_2__DOT__w_reg
                                      : 0ULL)),64);
        tracep->fullBit(oldp+352,(((IData)(vlTOPp->reset_ni)
                                    ? (1U & (IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_3__DOT__is_GS_BU_reg))
                                    : 0U)));
        tracep->fullQData(oldp+353,(((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_3__DOT__u_reg
                                      : 0ULL)),64);
        tracep->fullQData(oldp+355,(((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_3__DOT__t_reg
                                      : 0ULL)),64);
        tracep->fullQData(oldp+357,(((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_3__DOT__w_reg
                                      : 0ULL)),64);
        tracep->fullBit(oldp+359,(((IData)(vlTOPp->reset_ni)
                                    ? (1U & (IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__is_GS_BU_reg))
                                    : 0U)));
        tracep->fullQData(oldp+360,(((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__u_reg
                                      : 0ULL)),64);
        tracep->fullQData(oldp+362,(((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__t_reg
                                      : 0ULL)),64);
        tracep->fullQData(oldp+364,(((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__u_div2_reg
                                      : 0ULL)),64);
        tracep->fullQData(oldp+366,(((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__t_div2_reg
                                      : 0ULL)),64);
        tracep->fullQData(oldp+368,(((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__w_reg
                                      : 0ULL)),64);
        tracep->fullIData(oldp+370,(0x40U),32);
        tracep->fullIData(oldp+371,(0x20U),32);
        tracep->fullIData(oldp+372,(0x7fe001U),32);
        tracep->fullBit(oldp+373,(1U));
        tracep->fullBit(oldp+374,(0U));
    }
}
