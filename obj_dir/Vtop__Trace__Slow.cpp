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
        tracep->declBit(c+23,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+24,"reset_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+25,"data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+26,"data2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+27,"w_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+28,"data2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+29,"data1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+30,"top DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+23,"top clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+24,"top reset_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+25,"top data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+26,"top data2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+27,"top w_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+28,"top data2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+29,"top data1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+30,"top dut DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+24,"top dut reset_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+25,"top dut data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+26,"top dut data2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+27,"top dut w_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+28,"top dut data2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+29,"top dut data1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+1,"top dut data1_intt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+3,"top dut data2_intt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+30,"top dut ntt_comp DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+31,"top dut ntt_comp Val_Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+24,"top dut ntt_comp reset_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+25,"top dut ntt_comp data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+26,"top dut ntt_comp data2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+27,"top dut ntt_comp w_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+3,"top dut ntt_comp ntt_data2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1,"top dut ntt_comp ntt_data1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+5,"top dut ntt_comp u",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+7,"top dut ntt_comp t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+9,"top dut ntt_comp w_Q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+31,"top dut ntt_comp genW_Q divisor",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+27,"top dut ntt_comp genW_Q A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+9,"top dut ntt_comp genW_Q A_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+10,"top dut ntt_comp genW_Q temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+30,"top dut intt_comp DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+31,"top dut intt_comp Val_Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+24,"top dut intt_comp reset_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+1,"top dut intt_comp data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+3,"top dut intt_comp data2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+27,"top dut intt_comp w_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+28,"top dut intt_comp intt_data2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+29,"top dut intt_comp intt_data1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+11,"top dut intt_comp u",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+13,"top dut intt_comp t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+15,"top dut intt_comp half_u",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+17,"top dut intt_comp half_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+15,"top dut intt_comp intt_data1_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+19,"top dut intt_comp intt_data2_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+21,"top dut intt_comp w_Q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+31,"top dut intt_comp genW_Q divisor",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+27,"top dut intt_comp genW_Q A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+21,"top dut intt_comp genW_Q A_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+22,"top dut intt_comp genW_Q temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
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
        tracep->fullQData(oldp+5,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u),64);
        tracep->fullQData(oldp+7,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t),64);
        tracep->fullIData(oldp+9,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w_Q),32);
        tracep->fullIData(oldp+10,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__genW_Q__DOT__temp),32);
        tracep->fullQData(oldp+11,((vlTOPp->top__DOT__dut__DOT__data1_intt 
                                    + vlTOPp->top__DOT__dut__DOT__data2_intt)),64);
        tracep->fullQData(oldp+13,((vlTOPp->top__DOT__dut__DOT__data1_intt 
                                    - vlTOPp->top__DOT__dut__DOT__data2_intt)),64);
        tracep->fullQData(oldp+15,(((vlTOPp->top__DOT__dut__DOT__data1_intt 
                                     + vlTOPp->top__DOT__dut__DOT__data2_intt) 
                                    >> 1U)),64);
        tracep->fullQData(oldp+17,(((vlTOPp->top__DOT__dut__DOT__data1_intt 
                                     - vlTOPp->top__DOT__dut__DOT__data2_intt) 
                                    >> 1U)),64);
        tracep->fullQData(oldp+19,(VL_DIV_QQQ(64, (
                                                   (vlTOPp->top__DOT__dut__DOT__data1_intt 
                                                    - vlTOPp->top__DOT__dut__DOT__data2_intt) 
                                                   >> 1U), 
                                              (((QData)((IData)(
                                                                (- (IData)(
                                                                           (1U 
                                                                            & (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w_Q 
                                                                               >> 0x1fU)))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w_Q))))),64);
        tracep->fullIData(oldp+21,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w_Q),32);
        tracep->fullIData(oldp+22,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__genW_Q__DOT__temp),32);
        tracep->fullBit(oldp+23,(vlTOPp->clk_i));
        tracep->fullBit(oldp+24,(vlTOPp->reset_ni));
        tracep->fullIData(oldp+25,(vlTOPp->data1_i),32);
        tracep->fullIData(oldp+26,(vlTOPp->data2_i),32);
        tracep->fullIData(oldp+27,(vlTOPp->w_i),32);
        tracep->fullIData(oldp+28,(vlTOPp->data2_o),32);
        tracep->fullIData(oldp+29,(vlTOPp->data1_o),32);
        tracep->fullIData(oldp+30,(0x20U),32);
        tracep->fullIData(oldp+31,(0x7fe001U),32);
    }
}
