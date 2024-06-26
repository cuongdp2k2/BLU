// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

//==========

VL_CTOR_IMP(Vtop) {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(this, name());
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtop::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vtop::~Vtop() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_initial\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::final\n"); );
    // Variables
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::_eval_settle(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_settle\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_ctor_var_reset\n"); );
    // Body
    clk_i = VL_RAND_RESET_I(1);
    reset_ni = VL_RAND_RESET_I(1);
    data1_i = VL_RAND_RESET_Q(64);
    data2_i = VL_RAND_RESET_Q(64);
    zeta_i = VL_RAND_RESET_I(32);
    data2_o = VL_RAND_RESET_Q(64);
    data1_o = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__data1_intt = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__data2_intt = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__ntt_comp__DOT__zeta_temp = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__ntt_comp__DOT__u = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__ntt_comp__DOT__t = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__ntt_comp__DOT__mod_Q__DOT__temp = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__intt_comp__DOT__zeta_temp = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__intt_comp__DOT__mod_Q__DOT__temp = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
