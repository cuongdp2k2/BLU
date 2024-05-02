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
        tracep->declBit(c+31,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+32,"reset_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+33,"data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+35,"data2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+37,"zeta_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+38,"data2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+40,"data1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+42,"top DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+31,"top clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+32,"top reset_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+33,"top data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+35,"top data2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+37,"top zeta_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+38,"top data2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+40,"top data1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+43,"top dut DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+32,"top dut reset_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+33,"top dut data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+35,"top dut data2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+37,"top dut zeta_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+38,"top dut data2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+40,"top dut data1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1,"top dut data1_intt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+3,"top dut data2_intt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+43,"top dut ntt_comp DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+44,"top dut ntt_comp Val_Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+32,"top dut ntt_comp reset_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+45,"top dut ntt_comp is_GS_BU",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+33,"top dut ntt_comp data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+35,"top dut ntt_comp data2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+37,"top dut ntt_comp zeta_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+3,"top dut ntt_comp data2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1,"top dut ntt_comp data1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+5,"top dut ntt_comp zeta_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declQuad(c+6,"top dut ntt_comp w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+8,"top dut ntt_comp u",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+10,"top dut ntt_comp u_div2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+12,"top dut ntt_comp t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+14,"top dut ntt_comp t_div2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+16,"top dut ntt_comp data1_o_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+18,"top dut ntt_comp data2_o_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+44,"top dut ntt_comp mod_Q Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+37,"top dut ntt_comp mod_Q A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+5,"top dut ntt_comp mod_Q A_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+20,"top dut ntt_comp mod_Q temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+43,"top dut intt_comp DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+44,"top dut intt_comp Val_Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+32,"top dut intt_comp reset_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+46,"top dut intt_comp is_GS_BU",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+1,"top dut intt_comp data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+3,"top dut intt_comp data2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+37,"top dut intt_comp zeta_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+38,"top dut intt_comp data2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+40,"top dut intt_comp data1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+21,"top dut intt_comp zeta_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declQuad(c+22,"top dut intt_comp w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+1,"top dut intt_comp u",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+24,"top dut intt_comp u_div2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+3,"top dut intt_comp t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+26,"top dut intt_comp t_div2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+24,"top dut intt_comp data1_o_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+28,"top dut intt_comp data2_o_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+44,"top dut intt_comp mod_Q Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+37,"top dut intt_comp mod_Q A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+21,"top dut intt_comp mod_Q A_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+30,"top dut intt_comp mod_Q temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
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
        tracep->fullQData(oldp+1,(vlTOPp->top__DOT__dut__DOT__data1_intt),64);
        tracep->fullQData(oldp+3,(vlTOPp->top__DOT__dut__DOT__data2_intt),64);
        tracep->fullIData(oldp+5,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__zeta_temp),32);
        tracep->fullQData(oldp+6,(((0x80000000U & vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__zeta_temp)
                                    ? (0xffffffff00000000ULL 
                                       | (QData)((IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__zeta_temp)))
                                    : (QData)((IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__zeta_temp)))),64);
        tracep->fullQData(oldp+8,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u),64);
        tracep->fullQData(oldp+10,(((vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u 
                                     + vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t) 
                                    >> 1U)),64);
        tracep->fullQData(oldp+12,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t),64);
        tracep->fullQData(oldp+14,(((vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u 
                                     - vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t) 
                                    >> 1U)),64);
        tracep->fullQData(oldp+16,((vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u 
                                    + vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t)),64);
        tracep->fullQData(oldp+18,((vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u 
                                    - vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t)),64);
        tracep->fullIData(oldp+20,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__mod_Q__DOT__temp),32);
        tracep->fullIData(oldp+21,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__zeta_temp),32);
        tracep->fullQData(oldp+22,(((0x80000000U & vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__zeta_temp)
                                     ? (0xffffffff00000000ULL 
                                        | (QData)((IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__zeta_temp)))
                                     : (QData)((IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__zeta_temp)))),64);
        tracep->fullQData(oldp+24,(((vlTOPp->top__DOT__dut__DOT__data1_intt 
                                     + vlTOPp->top__DOT__dut__DOT__data2_intt) 
                                    >> 1U)),64);
        tracep->fullQData(oldp+26,(((vlTOPp->top__DOT__dut__DOT__data1_intt 
                                     - vlTOPp->top__DOT__dut__DOT__data2_intt) 
                                    >> 1U)),64);
        tracep->fullQData(oldp+28,(VL_DIV_QQQ(64, (
                                                   (vlTOPp->top__DOT__dut__DOT__data1_intt 
                                                    - vlTOPp->top__DOT__dut__DOT__data2_intt) 
                                                   >> 1U), 
                                              ((0x80000000U 
                                                & vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__zeta_temp)
                                                ? (0xffffffff00000000ULL 
                                                   | (QData)((IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__zeta_temp)))
                                                : (QData)((IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__zeta_temp))))),64);
        tracep->fullIData(oldp+30,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__mod_Q__DOT__temp),32);
        tracep->fullBit(oldp+31,(vlTOPp->clk_i));
        tracep->fullBit(oldp+32,(vlTOPp->reset_ni));
        tracep->fullQData(oldp+33,(vlTOPp->data1_i),64);
        tracep->fullQData(oldp+35,(vlTOPp->data2_i),64);
        tracep->fullIData(oldp+37,(vlTOPp->zeta_i),32);
        tracep->fullQData(oldp+38,(vlTOPp->data2_o),64);
        tracep->fullQData(oldp+40,(vlTOPp->data1_o),64);
        tracep->fullIData(oldp+42,(0x40U),32);
        tracep->fullIData(oldp+43,(0x20U),32);
        tracep->fullIData(oldp+44,(0x7fe001U),32);
        tracep->fullBit(oldp+45,(1U));
        tracep->fullBit(oldp+46,(0U));
    }
}
