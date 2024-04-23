// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop::traceChgTop0(void* userp, VerilatedFst* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vtop::traceChgSub0(void* userp, VerilatedFst* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgSData(oldp+0,(vlTOPp->top__DOT__dut__DOT__P_stg1),16);
            tracep->chgSData(oldp+1,(vlTOPp->top__DOT__dut__DOT__G_stg1),16);
            tracep->chgCData(oldp+2,(vlTOPp->top__DOT__dut__DOT__P_stg2),8);
            tracep->chgCData(oldp+3,(vlTOPp->top__DOT__dut__DOT__G_stg2),8);
            tracep->chgCData(oldp+4,(vlTOPp->top__DOT__dut__DOT__P_stg3),4);
            tracep->chgCData(oldp+5,(vlTOPp->top__DOT__dut__DOT__G_stg3),4);
            tracep->chgCData(oldp+6,(vlTOPp->top__DOT__dut__DOT__P_stg4),2);
            tracep->chgCData(oldp+7,(vlTOPp->top__DOT__dut__DOT__G_stg4),2);
            tracep->chgBit(oldp+8,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg4) 
                                           >> 1U) & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg4)))));
            tracep->chgBit(oldp+9,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__G_stg4) 
                                           >> 1U) | 
                                          (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg4) 
                                            >> 1U) 
                                           & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg4))))));
            tracep->chgBit(oldp+10,(vlTOPp->top__DOT__dut__DOT__P_stg6));
            tracep->chgBit(oldp+11,(vlTOPp->top__DOT__dut__DOT__G_stg6));
            tracep->chgCData(oldp+12,(vlTOPp->top__DOT__dut__DOT__P_stg7),3);
            tracep->chgCData(oldp+13,(vlTOPp->top__DOT__dut__DOT__G_stg7),3);
            tracep->chgCData(oldp+14,(vlTOPp->top__DOT__dut__DOT__P_stg8),8);
            tracep->chgCData(oldp+15,(vlTOPp->top__DOT__dut__DOT__G_stg8),8);
            tracep->chgSData(oldp+16,(vlTOPp->top__DOT__dut__DOT__C),16);
            tracep->chgCData(oldp+17,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage6_dot__P_i),2);
            tracep->chgCData(oldp+18,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage6_dot__G_i),2);
            tracep->chgCData(oldp+19,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot1__P_i),2);
            tracep->chgCData(oldp+20,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot1__G_i),2);
            tracep->chgBit(oldp+21,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot1__P_i) 
                                            >> 1U) 
                                           & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot1__P_i)))));
            tracep->chgBit(oldp+22,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot1__G_i) 
                                            >> 1U) 
                                           | (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot1__P_i) 
                                               >> 1U) 
                                              & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot1__G_i))))));
            tracep->chgCData(oldp+23,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot2__P_i),2);
            tracep->chgCData(oldp+24,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot2__G_i),2);
            tracep->chgBit(oldp+25,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot2__P_i) 
                                            >> 1U) 
                                           & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot2__P_i)))));
            tracep->chgBit(oldp+26,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot2__G_i) 
                                            >> 1U) 
                                           | (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot2__P_i) 
                                               >> 1U) 
                                              & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot2__G_i))))));
            tracep->chgCData(oldp+27,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot3__P_i),2);
            tracep->chgCData(oldp+28,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot3__G_i),2);
            tracep->chgBit(oldp+29,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot3__P_i) 
                                            >> 1U) 
                                           & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot3__P_i)))));
            tracep->chgBit(oldp+30,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot3__G_i) 
                                            >> 1U) 
                                           | (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot3__P_i) 
                                               >> 1U) 
                                              & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot3__G_i))))));
            tracep->chgCData(oldp+31,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot2__P_i),2);
            tracep->chgCData(oldp+32,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot2__G_i),2);
            tracep->chgBit(oldp+33,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot2__P_i) 
                                            >> 1U) 
                                           & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot2__P_i)))));
            tracep->chgBit(oldp+34,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot2__G_i) 
                                            >> 1U) 
                                           | (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot2__P_i) 
                                               >> 1U) 
                                              & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot2__G_i))))));
            tracep->chgCData(oldp+35,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot3__P_i),2);
            tracep->chgCData(oldp+36,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot3__G_i),2);
            tracep->chgBit(oldp+37,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot3__P_i) 
                                            >> 1U) 
                                           & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot3__P_i)))));
            tracep->chgBit(oldp+38,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot3__G_i) 
                                            >> 1U) 
                                           | (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot3__P_i) 
                                               >> 1U) 
                                              & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot3__G_i))))));
            tracep->chgCData(oldp+39,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot4__P_i),2);
            tracep->chgCData(oldp+40,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot4__G_i),2);
            tracep->chgBit(oldp+41,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot4__P_i) 
                                            >> 1U) 
                                           & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot4__P_i)))));
            tracep->chgBit(oldp+42,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot4__G_i) 
                                            >> 1U) 
                                           | (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot4__P_i) 
                                               >> 1U) 
                                              & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot4__G_i))))));
            tracep->chgCData(oldp+43,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot5__P_i),2);
            tracep->chgCData(oldp+44,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot5__G_i),2);
            tracep->chgBit(oldp+45,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot5__P_i) 
                                            >> 1U) 
                                           & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot5__P_i)))));
            tracep->chgBit(oldp+46,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot5__G_i) 
                                            >> 1U) 
                                           | (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot5__P_i) 
                                               >> 1U) 
                                              & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot5__G_i))))));
            tracep->chgCData(oldp+47,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot6__P_i),2);
            tracep->chgCData(oldp+48,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot6__G_i),2);
            tracep->chgBit(oldp+49,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot6__P_i) 
                                            >> 1U) 
                                           & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot6__P_i)))));
            tracep->chgBit(oldp+50,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot6__G_i) 
                                            >> 1U) 
                                           | (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot6__P_i) 
                                               >> 1U) 
                                              & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot6__G_i))))));
            tracep->chgCData(oldp+51,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot7__P_i),2);
            tracep->chgCData(oldp+52,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot7__G_i),2);
            tracep->chgBit(oldp+53,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot7__P_i) 
                                            >> 1U) 
                                           & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot7__P_i)))));
            tracep->chgBit(oldp+54,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot7__G_i) 
                                            >> 1U) 
                                           | (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot7__P_i) 
                                               >> 1U) 
                                              & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot7__G_i))))));
            tracep->chgCData(oldp+55,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot8__P_i),2);
            tracep->chgCData(oldp+56,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot8__G_i),2);
            tracep->chgBit(oldp+57,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot8__P_i) 
                                            >> 1U) 
                                           & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot8__P_i)))));
            tracep->chgBit(oldp+58,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot8__G_i) 
                                            >> 1U) 
                                           | (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot8__P_i) 
                                               >> 1U) 
                                              & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot8__G_i))))));
            tracep->chgCData(oldp+59,((3U & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg1))),2);
            tracep->chgCData(oldp+60,((3U & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg1))),2);
            tracep->chgBit(oldp+61,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                            >> 1U) 
                                           & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg1)))));
            tracep->chgBit(oldp+62,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                            >> 1U) 
                                           | (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                               >> 1U) 
                                              & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg1))))));
            tracep->chgCData(oldp+63,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                             >> 2U))),2);
            tracep->chgCData(oldp+64,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                             >> 2U))),2);
            tracep->chgBit(oldp+65,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                            >> 3U) 
                                           & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                              >> 2U)))));
            tracep->chgBit(oldp+66,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                            >> 3U) 
                                           | (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                               >> 3U) 
                                              & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                                 >> 2U))))));
            tracep->chgCData(oldp+67,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                             >> 4U))),2);
            tracep->chgCData(oldp+68,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                             >> 4U))),2);
            tracep->chgBit(oldp+69,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                            >> 5U) 
                                           & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                              >> 4U)))));
            tracep->chgBit(oldp+70,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                            >> 5U) 
                                           | (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                               >> 5U) 
                                              & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                                 >> 4U))))));
            tracep->chgCData(oldp+71,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                             >> 6U))),2);
            tracep->chgCData(oldp+72,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                             >> 6U))),2);
            tracep->chgBit(oldp+73,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                            >> 7U) 
                                           & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                              >> 6U)))));
            tracep->chgBit(oldp+74,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                            >> 7U) 
                                           | (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                               >> 7U) 
                                              & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                                 >> 6U))))));
            tracep->chgCData(oldp+75,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                             >> 8U))),2);
            tracep->chgCData(oldp+76,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                             >> 8U))),2);
            tracep->chgBit(oldp+77,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                            >> 9U) 
                                           & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                              >> 8U)))));
            tracep->chgBit(oldp+78,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                            >> 9U) 
                                           | (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                               >> 9U) 
                                              & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                                 >> 8U))))));
            tracep->chgCData(oldp+79,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                             >> 0xaU))),2);
            tracep->chgCData(oldp+80,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                             >> 0xaU))),2);
            tracep->chgBit(oldp+81,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                            >> 0xbU) 
                                           & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                              >> 0xaU)))));
            tracep->chgBit(oldp+82,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                            >> 0xbU) 
                                           | (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                               >> 0xbU) 
                                              & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                                 >> 0xaU))))));
            tracep->chgCData(oldp+83,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                             >> 0xcU))),2);
            tracep->chgCData(oldp+84,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                             >> 0xcU))),2);
            tracep->chgBit(oldp+85,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                            >> 0xdU) 
                                           & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                              >> 0xcU)))));
            tracep->chgBit(oldp+86,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                            >> 0xdU) 
                                           | (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                               >> 0xdU) 
                                              & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                                 >> 0xcU))))));
            tracep->chgCData(oldp+87,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                             >> 0xeU))),2);
            tracep->chgCData(oldp+88,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                             >> 0xeU))),2);
            tracep->chgBit(oldp+89,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                            >> 0xfU) 
                                           & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                              >> 0xeU)))));
            tracep->chgBit(oldp+90,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                            >> 0xfU) 
                                           | (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                               >> 0xfU) 
                                              & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                                 >> 0xeU))))));
            tracep->chgCData(oldp+91,((3U & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg2))),2);
            tracep->chgCData(oldp+92,((3U & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg2))),2);
            tracep->chgBit(oldp+93,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg2) 
                                            >> 1U) 
                                           & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg2)))));
            tracep->chgBit(oldp+94,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__G_stg2) 
                                            >> 1U) 
                                           | (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg2) 
                                               >> 1U) 
                                              & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg2))))));
            tracep->chgCData(oldp+95,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg2) 
                                             >> 2U))),2);
            tracep->chgCData(oldp+96,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg2) 
                                             >> 2U))),2);
            tracep->chgBit(oldp+97,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg2) 
                                            >> 3U) 
                                           & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg2) 
                                              >> 2U)))));
            tracep->chgBit(oldp+98,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__G_stg2) 
                                            >> 3U) 
                                           | (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg2) 
                                               >> 3U) 
                                              & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg2) 
                                                 >> 2U))))));
            tracep->chgCData(oldp+99,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg2) 
                                             >> 4U))),2);
            tracep->chgCData(oldp+100,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg2) 
                                              >> 4U))),2);
            tracep->chgBit(oldp+101,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg2) 
                                             >> 5U) 
                                            & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg2) 
                                               >> 4U)))));
            tracep->chgBit(oldp+102,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__G_stg2) 
                                             >> 5U) 
                                            | (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg2) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg2) 
                                                  >> 4U))))));
            tracep->chgCData(oldp+103,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg2) 
                                              >> 6U))),2);
            tracep->chgCData(oldp+104,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg2) 
                                              >> 6U))),2);
            tracep->chgBit(oldp+105,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg2) 
                                             >> 7U) 
                                            & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg2) 
                                               >> 6U)))));
            tracep->chgBit(oldp+106,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__G_stg2) 
                                             >> 7U) 
                                            | (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg2) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg2) 
                                                  >> 6U))))));
            tracep->chgCData(oldp+107,((3U & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg3))),2);
            tracep->chgCData(oldp+108,((3U & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg3))),2);
            tracep->chgBit(oldp+109,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg3) 
                                             >> 1U) 
                                            & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg3)))));
            tracep->chgBit(oldp+110,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__G_stg3) 
                                             >> 1U) 
                                            | (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg3) 
                                                >> 1U) 
                                               & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg3))))));
            tracep->chgCData(oldp+111,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg3) 
                                              >> 2U))),2);
            tracep->chgCData(oldp+112,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg3) 
                                              >> 2U))),2);
            tracep->chgBit(oldp+113,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg3) 
                                             >> 3U) 
                                            & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg3) 
                                               >> 2U)))));
            tracep->chgBit(oldp+114,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__G_stg3) 
                                             >> 3U) 
                                            | (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg3) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg3) 
                                                  >> 2U))))));
        }
        tracep->chgBit(oldp+115,(vlTOPp->clk_i));
        tracep->chgSData(oldp+116,(vlTOPp->a_i),16);
        tracep->chgSData(oldp+117,(vlTOPp->b_i),16);
        tracep->chgBit(oldp+118,(vlTOPp->carry_i));
        tracep->chgSData(oldp+119,(vlTOPp->sum_o),16);
        tracep->chgBit(oldp+120,(vlTOPp->carry_o));
    }
}

void Vtop::traceCleanup(void* userp, VerilatedFst* /*unused*/) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
