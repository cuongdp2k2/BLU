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

VL_INLINE_OPT void Vtop::_sequent__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__t_div2_reg 
        = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t_div2
        [0U];
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__u_div2_reg 
        = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u_div2
        [0U];
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__u_div2_reg 
        = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u_div2
        [0U];
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__t_div2_reg 
        = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t_div2
        [0U];
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_0__DOT__data1_reg 
        = vlTOPp->data1_i;
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__u_reg 
        = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u
        [2U];
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_2__DOT__u_reg 
        = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u
        [0U];
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__t_reg 
        = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t
        [2U];
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_2__DOT__t_reg 
        = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t
        [0U];
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_3__DOT__t_reg 
        = (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u
           [1U] - vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t
           [1U]);
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_3__DOT__u_reg 
        = (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u
           [1U] + vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t
           [1U]);
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__data1_reg 
        = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__data1
        [0U];
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__data_mul_reg 
        = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__mul_res
        [0U];
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_0__DOT__is_GS_BU_reg = 1U;
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_0__DOT__w_reg 
        = ((0x80000000U & vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__zeta32)
            ? (0xffffffff00000000ULL | (QData)((IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__zeta32)))
            : (QData)((IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__zeta32)));
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__u_reg 
        = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u
        [2U];
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_2__DOT__u_reg 
        = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u
        [0U];
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_0__DOT__data2_reg 
        = vlTOPp->data2_i;
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__t_reg 
        = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t
        [2U];
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_2__DOT__t_reg 
        = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t
        [0U];
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__data1_reg 
        = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__data1
        [0U];
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_3__DOT__u_reg 
        = (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u
           [1U] + vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t
           [1U]);
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__data_mul_reg 
        = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__mul_res
        [0U];
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_3__DOT__t_reg 
        = (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u
           [1U] - vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t
           [1U]);
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__data2_reg 
        = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__data2
        [0U];
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__is_GS_BU_reg 
        = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU
        [3U];
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_3__DOT__is_GS_BU_reg 
        = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU
        [2U];
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_2__DOT__is_GS_BU_reg 
        = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU
        [1U];
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__is_GS_BU_reg 
        = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU
        [0U];
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_0__DOT__is_GS_BU_reg = 0U;
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_0__DOT__w_reg 
        = ((0x80000000U & vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__zeta32)
            ? (0xffffffff00000000ULL | (QData)((IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__zeta32)))
            : (QData)((IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__zeta32)));
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_0__DOT__data1_reg 
        = ((IData)(vlTOPp->reset_ni) ? (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU
                                        [4U] ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u
                                        [3U] : vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u_div2
                                        [1U]) : 0ULL);
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__w_reg 
        = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w
        [3U];
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_3__DOT__w_reg 
        = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w
        [2U];
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_2__DOT__w_reg 
        = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w
        [1U];
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__w_reg 
        = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w
        [0U];
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__data2_reg 
        = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__data2
        [0U];
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__is_GS_BU_reg 
        = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU
        [3U];
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_3__DOT__is_GS_BU_reg 
        = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU
        [2U];
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_2__DOT__is_GS_BU_reg 
        = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU
        [1U];
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__is_GS_BU_reg 
        = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU
        [0U];
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_0__DOT__data2_reg 
        = ((IData)(vlTOPp->reset_ni) ? (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU
                                        [4U] ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t
                                        [3U] : VL_DIV_QQQ(64, 
                                                          vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t_div2
                                                          [1U], 
                                                          vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w
                                                          [4U]))
            : 0ULL);
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__w_reg 
        = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w
        [3U];
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_3__DOT__w_reg 
        = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w
        [2U];
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_2__DOT__w_reg 
        = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w
        [1U];
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__w_reg 
        = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w
        [0U];
}

VL_INLINE_OPT void Vtop::_combo__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__3\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__mod_Q__DOT__temp 
        = (vlTOPp->zeta_i - ((IData)(0x7fe001U) * VL_DIV_III(32, vlTOPp->zeta_i, (IData)(0x7fe001U))));
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__zeta32 
        = (VL_LTES_III(1,32,32, 0U, vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__mod_Q__DOT__temp)
            ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__mod_Q__DOT__temp
            : ((IData)(0x7fe001U) + vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__mod_Q__DOT__temp));
    if (vlTOPp->reset_ni) {
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t_div2[1U] 
            = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__t_div2_reg;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u_div2[1U] 
            = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__u_div2_reg;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u_div2[1U] 
            = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__u_div2_reg;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t_div2[1U] 
            = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__t_div2_reg;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__data1[0U] 
            = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_0__DOT__data1_reg;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u[3U] 
            = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__u_reg;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u[1U] 
            = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_2__DOT__u_reg;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t[3U] 
            = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__t_reg;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t[1U] 
            = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_2__DOT__t_reg;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t[2U] 
            = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_3__DOT__t_reg;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u[2U] 
            = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_3__DOT__u_reg;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__data1[1U] 
            = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__data1_reg;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__mul_res[1U] 
            = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__data_mul_reg;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU[0U] 
            = (1U & (IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_0__DOT__is_GS_BU_reg));
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w[0U] 
            = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_0__DOT__w_reg;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u[3U] 
            = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__u_reg;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u[1U] 
            = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_2__DOT__u_reg;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__data2[0U] 
            = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_0__DOT__data2_reg;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t[3U] 
            = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__t_reg;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t[1U] 
            = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_2__DOT__t_reg;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__data1[1U] 
            = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__data1_reg;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u[2U] 
            = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_3__DOT__u_reg;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__mul_res[1U] 
            = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__data_mul_reg;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t[2U] 
            = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_3__DOT__t_reg;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__data2[1U] 
            = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__data2_reg;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU[4U] 
            = (1U & (IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__is_GS_BU_reg));
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU[3U] 
            = (1U & (IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_3__DOT__is_GS_BU_reg));
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU[2U] 
            = (1U & (IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_2__DOT__is_GS_BU_reg));
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU[1U] 
            = (1U & (IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__is_GS_BU_reg));
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU[0U] 
            = (1U & (IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_0__DOT__is_GS_BU_reg));
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w[0U] 
            = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_0__DOT__w_reg;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__data1[0U] 
            = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_0__DOT__data1_reg;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w[4U] 
            = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__w_reg;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w[3U] 
            = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_3__DOT__w_reg;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w[2U] 
            = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_2__DOT__w_reg;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w[1U] 
            = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__w_reg;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__data2[1U] 
            = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__data2_reg;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU[4U] 
            = (1U & (IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__is_GS_BU_reg));
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU[3U] 
            = (1U & (IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_3__DOT__is_GS_BU_reg));
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU[2U] 
            = (1U & (IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_2__DOT__is_GS_BU_reg));
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU[1U] 
            = (1U & (IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__is_GS_BU_reg));
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__data2[0U] 
            = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_0__DOT__data2_reg;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w[4U] 
            = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__w_reg;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w[3U] 
            = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_3__DOT__w_reg;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w[2U] 
            = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_2__DOT__w_reg;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w[1U] 
            = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__w_reg;
    } else {
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t_div2[1U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u_div2[1U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u_div2[1U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t_div2[1U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__data1[0U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u[3U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u[1U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t[3U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t[1U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t[2U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u[2U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__data1[1U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__mul_res[1U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU[0U] = 0U;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w[0U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u[3U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u[1U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__data2[0U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t[3U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t[1U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__data1[1U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u[2U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__mul_res[1U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t[2U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__data2[1U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU[4U] = 0U;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU[3U] = 0U;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU[2U] = 0U;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU[1U] = 0U;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU[0U] = 0U;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w[0U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__data1[0U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w[4U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w[3U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w[2U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w[1U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__data2[1U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU[4U] = 0U;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU[3U] = 0U;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU[2U] = 0U;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU[1U] = 0U;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__data2[0U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w[4U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w[3U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w[2U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w[1U] = 0ULL;
    }
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u[0U] 
        = (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU
           [1U] ? (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__data1
                                                           [1U] 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__data1
                                                [1U])))
            : vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__data1
           [1U]);
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__mod_Q__DOT__temp 
        = ((IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w
                   [4U]) - ((IData)(0x7fe001U) * VL_DIV_III(32, (IData)(
                                                                        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w
                                                                        [4U]), (IData)(0x7fe001U))));
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__zeta32 
        = (VL_LTES_III(1,32,32, 0U, vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__mod_Q__DOT__temp)
            ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__mod_Q__DOT__temp
            : ((IData)(0x7fe001U) + vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__mod_Q__DOT__temp));
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__mul_res[0U] 
        = ((QData)((IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__data2
                           [0U])) * vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w
           [0U]);
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u[0U] 
        = (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU
           [1U] ? (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__data1
                                                           [1U] 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__data1
                                                [1U])))
            : vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__data1
           [1U]);
    vlTOPp->zeta_o = (IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w
                             [4U]);
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__mul_res[0U] 
        = ((QData)((IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__data2
                           [0U])) * vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w
           [0U]);
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u_div2[0U] 
        = (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u
           [2U] >> 1U);
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t[0U] 
        = (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU
           [1U] ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__mul_res
           [1U] : vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__data2
           [1U]);
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u_div2[0U] 
        = (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u
           [2U] >> 1U);
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t[0U] 
        = (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU
           [1U] ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__mul_res
           [1U] : vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__data2
           [1U]);
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t_div2[0U] 
        = (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t
           [2U] >> 1U);
    vlTOPp->data1_o = ((IData)(vlTOPp->reset_ni) ? 
                       (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU
                        [4U] ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u
                        [3U] : vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u_div2
                        [1U]) : 0ULL);
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t_div2[0U] 
        = (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t
           [2U] >> 1U);
    vlTOPp->data2_o = ((IData)(vlTOPp->reset_ni) ? 
                       (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU
                        [4U] ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t
                        [3U] : VL_DIV_QQQ(64, vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t_div2
                                          [1U], vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w
                                          [4U])) : 0ULL);
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    // Final
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
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
    if (VL_UNLIKELY((reset_ni & 0xfeU))) {
        Verilated::overWidthError("reset_ni");}
}
#endif  // VL_DEBUG
