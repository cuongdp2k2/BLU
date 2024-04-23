// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

//==========

void Vtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval\n"); );
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("top.sv", 2, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtop::_eval_initial_loop(Vtop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("top.sv", 2, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vtop::_combo__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__dut__DOT__G_stg1 = ((IData)(vlTOPp->a_i) 
                                          & (IData)(vlTOPp->b_i));
    vlTOPp->top__DOT__dut__DOT__P_stg1 = ((IData)(vlTOPp->a_i) 
                                          ^ (IData)(vlTOPp->b_i));
    vlTOPp->sum_o = ((0xfffeU & (IData)(vlTOPp->sum_o)) 
                     | (1U & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg1)));
    vlTOPp->top__DOT__dut__DOT__G_stg8 = ((0xfeU & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg8)) 
                                          | (1U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                                   | ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                                      & (IData)(vlTOPp->carry_i)))));
    vlTOPp->top__DOT__dut__DOT__G_stg2 = ((0xfeU & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg2)) 
                                          | (1U & (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                                    >> 1U) 
                                                   | (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                                       >> 1U) 
                                                      & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg1)))));
    vlTOPp->top__DOT__dut__DOT__G_stg2 = ((0xfdU & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg2)) 
                                          | (2U & (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                                    >> 2U) 
                                                   | (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                                       >> 2U) 
                                                      & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                                         >> 1U)))));
    vlTOPp->top__DOT__dut__DOT__G_stg2 = ((0xfbU & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg2)) 
                                          | (4U & (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                                    >> 3U) 
                                                   | (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                                       >> 3U) 
                                                      & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                                         >> 2U)))));
    vlTOPp->top__DOT__dut__DOT__G_stg2 = ((0xf7U & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg2)) 
                                          | (8U & (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                                    >> 4U) 
                                                   | (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                                       >> 4U) 
                                                      & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                                         >> 3U)))));
    vlTOPp->top__DOT__dut__DOT__G_stg2 = ((0xefU & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg2)) 
                                          | (0x10U 
                                             & (((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                                 >> 5U) 
                                                | (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                                    >> 5U) 
                                                   & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                                      >> 4U)))));
    vlTOPp->top__DOT__dut__DOT__G_stg2 = ((0xdfU & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg2)) 
                                          | (0x20U 
                                             & (((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                                 >> 6U) 
                                                | (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                                    >> 6U) 
                                                   & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                                      >> 5U)))));
    vlTOPp->top__DOT__dut__DOT__G_stg2 = ((0xbfU & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg2)) 
                                          | (0x40U 
                                             & (((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                                 >> 7U) 
                                                | (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                                    >> 7U) 
                                                   & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                                      >> 6U)))));
    vlTOPp->top__DOT__dut__DOT__G_stg2 = ((0x7fU & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg2)) 
                                          | (0x80U 
                                             & (((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                                 >> 8U) 
                                                | (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                                    >> 8U) 
                                                   & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                                      >> 7U)))));
    vlTOPp->top__DOT__dut__DOT__P_stg2 = ((0xfeU & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg2)) 
                                          | (1U & (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                                    >> 1U) 
                                                   & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg1))));
    vlTOPp->top__DOT__dut__DOT__P_stg2 = ((0xfdU & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg2)) 
                                          | (2U & (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                                    >> 2U) 
                                                   & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                                      >> 1U))));
    vlTOPp->top__DOT__dut__DOT__P_stg2 = ((0xfbU & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg2)) 
                                          | (4U & (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                                    >> 3U) 
                                                   & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                                      >> 2U))));
    vlTOPp->top__DOT__dut__DOT__P_stg2 = ((0xf7U & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg2)) 
                                          | (8U & (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                                    >> 4U) 
                                                   & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                                      >> 3U))));
    vlTOPp->top__DOT__dut__DOT__P_stg2 = ((0xefU & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg2)) 
                                          | (0x10U 
                                             & (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                                 >> 5U) 
                                                & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                                   >> 4U))));
    vlTOPp->top__DOT__dut__DOT__P_stg2 = ((0xdfU & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg2)) 
                                          | (0x20U 
                                             & (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                                 >> 6U) 
                                                & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                                   >> 5U))));
    vlTOPp->top__DOT__dut__DOT__P_stg2 = ((0xbfU & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg2)) 
                                          | (0x40U 
                                             & (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                                 >> 7U) 
                                                & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                                   >> 6U))));
    vlTOPp->top__DOT__dut__DOT__P_stg2 = ((0x7fU & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg2)) 
                                          | (0x80U 
                                             & (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                                 >> 8U) 
                                                & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                                   >> 7U))));
    vlTOPp->top__DOT__dut__DOT__C = ((0xfffdU & (IData)(vlTOPp->top__DOT__dut__DOT__C)) 
                                     | (2U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg2) 
                                              << 1U)));
    vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot2__G_i 
        = ((2U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                  >> 1U)) | (1U & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg2)));
    vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot2__P_i 
        = ((2U & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                  >> 1U)) | (1U & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg2)));
    vlTOPp->top__DOT__dut__DOT__G_stg3 = ((0xeU & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg3)) 
                                          | (1U & (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg2) 
                                                    >> 1U) 
                                                   | (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg2) 
                                                       >> 1U) 
                                                      & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg2)))));
    vlTOPp->top__DOT__dut__DOT__G_stg3 = ((0xdU & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg3)) 
                                          | (2U & (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg2) 
                                                    >> 2U) 
                                                   | (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg2) 
                                                       >> 2U) 
                                                      & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg2) 
                                                         >> 1U)))));
    vlTOPp->top__DOT__dut__DOT__G_stg3 = ((0xbU & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg3)) 
                                          | (4U & (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg2) 
                                                    >> 3U) 
                                                   | (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg2) 
                                                       >> 3U) 
                                                      & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg2) 
                                                         >> 2U)))));
    vlTOPp->top__DOT__dut__DOT__G_stg3 = ((7U & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg3)) 
                                          | (8U & (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg2) 
                                                    >> 4U) 
                                                   | (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg2) 
                                                       >> 4U) 
                                                      & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg2) 
                                                         >> 3U)))));
    vlTOPp->top__DOT__dut__DOT__P_stg3 = ((0xeU & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg3)) 
                                          | (1U & (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg2) 
                                                    >> 1U) 
                                                   & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg2))));
    vlTOPp->top__DOT__dut__DOT__P_stg3 = ((0xdU & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg3)) 
                                          | (2U & (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg2) 
                                                    >> 2U) 
                                                   & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg2) 
                                                      >> 1U))));
    vlTOPp->top__DOT__dut__DOT__P_stg3 = ((0xbU & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg3)) 
                                          | (4U & (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg2) 
                                                    >> 3U) 
                                                   & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg2) 
                                                      >> 2U))));
    vlTOPp->top__DOT__dut__DOT__P_stg3 = ((7U & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg3)) 
                                          | (8U & (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg2) 
                                                    >> 4U) 
                                                   & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg2) 
                                                      >> 3U))));
    vlTOPp->top__DOT__dut__DOT__P_stg8 = ((0xfdU & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg8)) 
                                          | (2U & ((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot2__P_i) 
                                                   & ((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot2__P_i) 
                                                      << 1U))));
    vlTOPp->top__DOT__dut__DOT__G_stg8 = ((0xfdU & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg8)) 
                                          | (2U & ((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot2__G_i) 
                                                   | ((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot2__P_i) 
                                                      & ((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot2__G_i) 
                                                         << 1U)))));
    vlTOPp->top__DOT__dut__DOT__C = ((0xfff7U & (IData)(vlTOPp->top__DOT__dut__DOT__C)) 
                                     | (8U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg3) 
                                              << 3U)));
    vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot3__G_i 
        = ((2U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                  >> 3U)) | (1U & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg3)));
    vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot1__G_i 
        = ((2U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg2) 
                  >> 1U)) | (1U & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg3)));
    vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot2__G_i 
        = ((2U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg2) 
                  >> 3U)) | (1U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg3) 
                                   >> 1U)));
    vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot3__P_i 
        = ((2U & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                  >> 3U)) | (1U & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg3)));
    vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot1__P_i 
        = ((2U & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg2) 
                  >> 1U)) | (1U & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg3)));
    vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot2__P_i 
        = ((2U & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg2) 
                  >> 3U)) | (1U & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg3) 
                                   >> 1U)));
    vlTOPp->top__DOT__dut__DOT__G_stg4 = ((2U & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg4)) 
                                          | (1U & (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg3) 
                                                    >> 1U) 
                                                   | (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg3) 
                                                       >> 1U) 
                                                      & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg3)))));
    vlTOPp->top__DOT__dut__DOT__G_stg4 = ((1U & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg4)) 
                                          | (2U & (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg3) 
                                                    >> 2U) 
                                                   | (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg3) 
                                                       >> 2U) 
                                                      & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg3) 
                                                         >> 1U)))));
    vlTOPp->top__DOT__dut__DOT__P_stg4 = ((2U & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg4)) 
                                          | (1U & (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg3) 
                                                    >> 1U) 
                                                   & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg3))));
    vlTOPp->top__DOT__dut__DOT__P_stg4 = ((1U & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg4)) 
                                          | (2U & (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg3) 
                                                    >> 2U) 
                                                   & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg3) 
                                                      >> 1U))));
    vlTOPp->top__DOT__dut__DOT__P_stg8 = ((0xfbU & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg8)) 
                                          | (4U & (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot3__P_i) 
                                                    << 1U) 
                                                   & ((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot3__P_i) 
                                                      << 2U))));
    vlTOPp->top__DOT__dut__DOT__G_stg8 = ((0xfbU & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg8)) 
                                          | (4U & (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot3__G_i) 
                                                    << 1U) 
                                                   | (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot3__P_i) 
                                                       << 1U) 
                                                      & ((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot3__G_i) 
                                                         << 2U)))));
    vlTOPp->top__DOT__dut__DOT__P_stg7 = ((6U & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg7)) 
                                          | (1U & (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot1__P_i) 
                                                    >> 1U) 
                                                   & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot1__P_i))));
    vlTOPp->top__DOT__dut__DOT__G_stg7 = ((6U & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg7)) 
                                          | (1U & (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot1__G_i) 
                                                    >> 1U) 
                                                   | (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot1__P_i) 
                                                       >> 1U) 
                                                      & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot1__G_i)))));
    vlTOPp->top__DOT__dut__DOT__P_stg7 = ((5U & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg7)) 
                                          | (2U & ((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot2__P_i) 
                                                   & ((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot2__P_i) 
                                                      << 1U))));
    vlTOPp->top__DOT__dut__DOT__G_stg7 = ((5U & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg7)) 
                                          | (2U & ((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot2__G_i) 
                                                   | ((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot2__P_i) 
                                                      & ((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot2__G_i) 
                                                         << 1U)))));
    vlTOPp->top__DOT__dut__DOT__C = ((0xff7fU & (IData)(vlTOPp->top__DOT__dut__DOT__C)) 
                                     | (0x80U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg4) 
                                                 << 7U)));
    vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot5__G_i 
        = ((2U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                  >> 7U)) | (1U & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg4)));
    vlTOPp->top__DOT__dut__DOT____Vcellinp__stage6_dot__G_i 
        = ((2U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg3) 
                  >> 1U)) | (1U & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg4)));
    vlTOPp->top__DOT__dut__DOT__C = ((0x7fffU & (IData)(vlTOPp->top__DOT__dut__DOT__C)) 
                                     | (0x8000U & (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg4) 
                                                    << 0xeU) 
                                                   | (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg4) 
                                                       << 0xeU) 
                                                      & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg4) 
                                                         << 0xfU)))));
    vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot5__P_i 
        = ((2U & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                  >> 7U)) | (1U & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg4)));
    vlTOPp->top__DOT__dut__DOT____Vcellinp__stage6_dot__P_i 
        = ((2U & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg3) 
                  >> 1U)) | (1U & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg4)));
    vlTOPp->top__DOT__dut__DOT__P_stg8 = ((0xefU & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg8)) 
                                          | (0x10U 
                                             & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot5__P_i) 
                                                 << 3U) 
                                                & ((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot5__P_i) 
                                                   << 4U))));
    vlTOPp->top__DOT__dut__DOT__G_stg8 = ((0xefU & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg8)) 
                                          | (0x10U 
                                             & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot5__G_i) 
                                                 << 3U) 
                                                | (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot5__P_i) 
                                                    << 3U) 
                                                   & ((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot5__G_i) 
                                                      << 4U)))));
    vlTOPp->top__DOT__dut__DOT__G_stg6 = (1U & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage6_dot__G_i) 
                                                 >> 1U) 
                                                | (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage6_dot__P_i) 
                                                    >> 1U) 
                                                   & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage6_dot__G_i))));
    vlTOPp->top__DOT__dut__DOT__P_stg6 = (1U & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage6_dot__P_i) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage6_dot__P_i)));
    vlTOPp->top__DOT__dut__DOT__C = ((0xf7ffU & (IData)(vlTOPp->top__DOT__dut__DOT__C)) 
                                     | ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg6) 
                                        << 0xbU));
    vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot7__G_i 
        = ((2U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                  >> 0xbU)) | (IData)(vlTOPp->top__DOT__dut__DOT__G_stg6));
    vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot3__G_i 
        = ((2U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg2) 
                  >> 5U)) | (IData)(vlTOPp->top__DOT__dut__DOT__G_stg6));
    vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot7__P_i 
        = ((2U & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                  >> 0xbU)) | (IData)(vlTOPp->top__DOT__dut__DOT__P_stg6));
    vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot3__P_i 
        = ((2U & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg2) 
                  >> 5U)) | (IData)(vlTOPp->top__DOT__dut__DOT__P_stg6));
    vlTOPp->top__DOT__dut__DOT__P_stg8 = ((0xbfU & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg8)) 
                                          | (0x40U 
                                             & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot7__P_i) 
                                                 << 5U) 
                                                & ((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot7__P_i) 
                                                   << 6U))));
    vlTOPp->top__DOT__dut__DOT__G_stg8 = ((0xbfU & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg8)) 
                                          | (0x40U 
                                             & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot7__G_i) 
                                                 << 5U) 
                                                | (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot7__P_i) 
                                                    << 5U) 
                                                   & ((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot7__G_i) 
                                                      << 6U)))));
    vlTOPp->top__DOT__dut__DOT__P_stg7 = ((3U & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg7)) 
                                          | (4U & (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot3__P_i) 
                                                    << 1U) 
                                                   & ((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot3__P_i) 
                                                      << 2U))));
    vlTOPp->top__DOT__dut__DOT__G_stg7 = ((3U & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg7)) 
                                          | (4U & (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot3__G_i) 
                                                    << 1U) 
                                                   | (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot3__P_i) 
                                                       << 1U) 
                                                      & ((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot3__G_i) 
                                                         << 2U)))));
    vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot4__P_i 
        = ((2U & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                  >> 5U)) | (1U & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg7)));
    vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot6__P_i 
        = ((2U & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                  >> 9U)) | (1U & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg7) 
                                   >> 1U)));
    vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot8__P_i 
        = ((2U & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                  >> 0xdU)) | (1U & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg7) 
                                     >> 2U)));
    vlTOPp->top__DOT__dut__DOT__C = ((0xffdfU & (IData)(vlTOPp->top__DOT__dut__DOT__C)) 
                                     | (0x20U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg7) 
                                                 << 5U)));
    vlTOPp->top__DOT__dut__DOT__C = ((0xfdffU & (IData)(vlTOPp->top__DOT__dut__DOT__C)) 
                                     | (0x200U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg7) 
                                                  << 8U)));
    vlTOPp->top__DOT__dut__DOT__C = ((0xdfffU & (IData)(vlTOPp->top__DOT__dut__DOT__C)) 
                                     | (0x2000U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg7) 
                                                   << 0xbU)));
    vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot4__G_i 
        = ((2U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                  >> 5U)) | (1U & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg7)));
    vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot6__G_i 
        = ((2U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                  >> 9U)) | (1U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg7) 
                                   >> 1U)));
    vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot8__G_i 
        = ((2U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                  >> 0xdU)) | (1U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg7) 
                                     >> 2U)));
    vlTOPp->top__DOT__dut__DOT__P_stg8 = ((0xf7U & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg8)) 
                                          | (8U & (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot4__P_i) 
                                                    << 2U) 
                                                   & ((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot4__P_i) 
                                                      << 3U))));
    vlTOPp->top__DOT__dut__DOT__P_stg8 = ((0xdfU & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg8)) 
                                          | (0x20U 
                                             & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot6__P_i) 
                                                 << 4U) 
                                                & ((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot6__P_i) 
                                                   << 5U))));
    vlTOPp->top__DOT__dut__DOT__P_stg8 = ((0x7fU & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg8)) 
                                          | (0x80U 
                                             & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot8__P_i) 
                                                 << 6U) 
                                                & ((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot8__P_i) 
                                                   << 7U))));
    vlTOPp->top__DOT__dut__DOT__G_stg8 = ((0xf7U & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg8)) 
                                          | (8U & (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot4__G_i) 
                                                    << 2U) 
                                                   | (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot4__P_i) 
                                                       << 2U) 
                                                      & ((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot4__G_i) 
                                                         << 3U)))));
    vlTOPp->top__DOT__dut__DOT__G_stg8 = ((0xdfU & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg8)) 
                                          | (0x20U 
                                             & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot6__G_i) 
                                                 << 4U) 
                                                | (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot6__P_i) 
                                                    << 4U) 
                                                   & ((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot6__G_i) 
                                                      << 5U)))));
    vlTOPp->top__DOT__dut__DOT__G_stg8 = ((0x7fU & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg8)) 
                                          | (0x80U 
                                             & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot8__G_i) 
                                                 << 6U) 
                                                | (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot8__P_i) 
                                                    << 6U) 
                                                   & ((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot8__G_i) 
                                                      << 7U)))));
    vlTOPp->top__DOT__dut__DOT__C = ((0xfffeU & (IData)(vlTOPp->top__DOT__dut__DOT__C)) 
                                     | (1U & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg8)));
    vlTOPp->top__DOT__dut__DOT__C = ((0xfffbU & (IData)(vlTOPp->top__DOT__dut__DOT__C)) 
                                     | (4U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg8) 
                                              << 1U)));
    vlTOPp->top__DOT__dut__DOT__C = ((0xffefU & (IData)(vlTOPp->top__DOT__dut__DOT__C)) 
                                     | (0x10U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg8) 
                                                 << 2U)));
    vlTOPp->top__DOT__dut__DOT__C = ((0xffbfU & (IData)(vlTOPp->top__DOT__dut__DOT__C)) 
                                     | (0x40U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg8) 
                                                 << 3U)));
    vlTOPp->top__DOT__dut__DOT__C = ((0xfeffU & (IData)(vlTOPp->top__DOT__dut__DOT__C)) 
                                     | (0x100U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg8) 
                                                  << 4U)));
    vlTOPp->top__DOT__dut__DOT__C = ((0xfbffU & (IData)(vlTOPp->top__DOT__dut__DOT__C)) 
                                     | (0x400U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg8) 
                                                  << 5U)));
    vlTOPp->top__DOT__dut__DOT__C = ((0xefffU & (IData)(vlTOPp->top__DOT__dut__DOT__C)) 
                                     | (0x1000U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg8) 
                                                   << 6U)));
    vlTOPp->top__DOT__dut__DOT__C = ((0xbfffU & (IData)(vlTOPp->top__DOT__dut__DOT__C)) 
                                     | (0x4000U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg8) 
                                                   << 7U)));
    vlTOPp->carry_o = (1U & ((IData)(vlTOPp->top__DOT__dut__DOT__C) 
                             >> 0xfU));
    vlTOPp->sum_o = ((0xfffdU & (IData)(vlTOPp->sum_o)) 
                     | (2U & ((0xfffffffeU & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg1)) 
                              ^ ((IData)(vlTOPp->top__DOT__dut__DOT__C) 
                                 << 1U))));
    vlTOPp->sum_o = ((0xfffbU & (IData)(vlTOPp->sum_o)) 
                     | (4U & ((0xfffffffcU & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg1)) 
                              ^ (0xfffffffcU & ((IData)(vlTOPp->top__DOT__dut__DOT__C) 
                                                << 1U)))));
    vlTOPp->sum_o = ((0xfff7U & (IData)(vlTOPp->sum_o)) 
                     | (8U & ((0xfffffff8U & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg1)) 
                              ^ (0xfffffff8U & ((IData)(vlTOPp->top__DOT__dut__DOT__C) 
                                                << 1U)))));
    vlTOPp->sum_o = ((0xffefU & (IData)(vlTOPp->sum_o)) 
                     | (0x10U & ((0xfffffff0U & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg1)) 
                                 ^ (0xfffffff0U & ((IData)(vlTOPp->top__DOT__dut__DOT__C) 
                                                   << 1U)))));
    vlTOPp->sum_o = ((0xffdfU & (IData)(vlTOPp->sum_o)) 
                     | (0x20U & ((0xffffffe0U & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg1)) 
                                 ^ (0xffffffe0U & ((IData)(vlTOPp->top__DOT__dut__DOT__C) 
                                                   << 1U)))));
    vlTOPp->sum_o = ((0xffbfU & (IData)(vlTOPp->sum_o)) 
                     | (0x40U & ((0xffffffc0U & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg1)) 
                                 ^ (0xffffffc0U & ((IData)(vlTOPp->top__DOT__dut__DOT__C) 
                                                   << 1U)))));
    vlTOPp->sum_o = ((0xff7fU & (IData)(vlTOPp->sum_o)) 
                     | (0x80U & ((0xffffff80U & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg1)) 
                                 ^ (0xffffff80U & ((IData)(vlTOPp->top__DOT__dut__DOT__C) 
                                                   << 1U)))));
    vlTOPp->sum_o = ((0xfeffU & (IData)(vlTOPp->sum_o)) 
                     | (0x100U & ((0xffffff00U & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg1)) 
                                  ^ (0xffffff00U & 
                                     ((IData)(vlTOPp->top__DOT__dut__DOT__C) 
                                      << 1U)))));
    vlTOPp->sum_o = ((0xfdffU & (IData)(vlTOPp->sum_o)) 
                     | (0x200U & ((0xfffffe00U & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg1)) 
                                  ^ (0xfffffe00U & 
                                     ((IData)(vlTOPp->top__DOT__dut__DOT__C) 
                                      << 1U)))));
    vlTOPp->sum_o = ((0xfbffU & (IData)(vlTOPp->sum_o)) 
                     | (0x400U & ((0xfffffc00U & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg1)) 
                                  ^ (0xfffffc00U & 
                                     ((IData)(vlTOPp->top__DOT__dut__DOT__C) 
                                      << 1U)))));
    vlTOPp->sum_o = ((0xf7ffU & (IData)(vlTOPp->sum_o)) 
                     | (0x800U & ((0xfffff800U & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg1)) 
                                  ^ (0xfffff800U & 
                                     ((IData)(vlTOPp->top__DOT__dut__DOT__C) 
                                      << 1U)))));
    vlTOPp->sum_o = ((0xefffU & (IData)(vlTOPp->sum_o)) 
                     | (0x1000U & ((0xfffff000U & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg1)) 
                                   ^ (0xfffff000U & 
                                      ((IData)(vlTOPp->top__DOT__dut__DOT__C) 
                                       << 1U)))));
    vlTOPp->sum_o = ((0xdfffU & (IData)(vlTOPp->sum_o)) 
                     | (0x2000U & ((0xffffe000U & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg1)) 
                                   ^ (0xffffe000U & 
                                      ((IData)(vlTOPp->top__DOT__dut__DOT__C) 
                                       << 1U)))));
    vlTOPp->sum_o = ((0xbfffU & (IData)(vlTOPp->sum_o)) 
                     | (0x4000U & ((0xffffc000U & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg1)) 
                                   ^ (0xffffc000U & 
                                      ((IData)(vlTOPp->top__DOT__dut__DOT__C) 
                                       << 1U)))));
    vlTOPp->sum_o = ((0x7fffU & (IData)(vlTOPp->sum_o)) 
                     | (0x8000U & ((0xffff8000U & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg1)) 
                                   ^ (0xffff8000U & 
                                      ((IData)(vlTOPp->top__DOT__dut__DOT__C) 
                                       << 1U)))));
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
}

VL_INLINE_OPT QData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vtop::_change_request_1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request_1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((carry_i & 0xfeU))) {
        Verilated::overWidthError("carry_i");}
}
#endif  // VL_DEBUG
