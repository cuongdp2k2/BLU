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

void Vtop::_settle__TOP__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__2\n"); );
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
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t[1U] 
            = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_2__DOT__t_reg;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u[1U] 
            = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_2__DOT__u_reg;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t[2U] 
            = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_3__DOT__t_reg;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u[2U] 
            = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_3__DOT__u_reg;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t[3U] 
            = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__t_reg;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u[3U] 
            = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__u_reg;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t_div2[1U] 
            = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__t_div2_reg;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__data1[0U] 
            = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_0__DOT__data1_reg;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__data1[1U] 
            = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__data1_reg;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__mul_res[1U] 
            = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__data_mul_reg;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u[1U] 
            = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_2__DOT__u_reg;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u[2U] 
            = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_3__DOT__u_reg;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u[3U] 
            = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__u_reg;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t[1U] 
            = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_2__DOT__t_reg;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t[2U] 
            = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_3__DOT__t_reg;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t[3U] 
            = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__t_reg;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU[0U] 
            = (1U & (IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_0__DOT__is_GS_BU_reg));
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU[1U] 
            = (1U & (IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__is_GS_BU_reg));
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU[2U] 
            = (1U & (IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_2__DOT__is_GS_BU_reg));
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU[3U] 
            = (1U & (IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_3__DOT__is_GS_BU_reg));
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU[4U] 
            = (1U & (IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__is_GS_BU_reg));
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w[0U] 
            = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_0__DOT__w_reg;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w[1U] 
            = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__w_reg;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w[2U] 
            = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_2__DOT__w_reg;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w[3U] 
            = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_3__DOT__w_reg;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w[4U] 
            = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__w_reg;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__data1[0U] 
            = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_0__DOT__data1_reg;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__data1[1U] 
            = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__data1_reg;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__mul_res[1U] 
            = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__data_mul_reg;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__data2[0U] 
            = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_0__DOT__data2_reg;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__data2[1U] 
            = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__data2_reg;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU[0U] 
            = (1U & (IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_0__DOT__is_GS_BU_reg));
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU[1U] 
            = (1U & (IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__is_GS_BU_reg));
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU[2U] 
            = (1U & (IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_2__DOT__is_GS_BU_reg));
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU[3U] 
            = (1U & (IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_3__DOT__is_GS_BU_reg));
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU[4U] 
            = (1U & (IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__is_GS_BU_reg));
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w[0U] 
            = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_0__DOT__w_reg;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w[1U] 
            = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__w_reg;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w[2U] 
            = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_2__DOT__w_reg;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w[3U] 
            = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_3__DOT__w_reg;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w[4U] 
            = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__w_reg;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__data2[0U] 
            = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_0__DOT__data2_reg;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__data2[1U] 
            = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__data2_reg;
    } else {
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t_div2[1U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u_div2[1U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u_div2[1U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t[1U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u[1U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t[2U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u[2U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t[3U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u[3U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t_div2[1U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__data1[0U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__data1[1U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__mul_res[1U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u[1U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u[2U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u[3U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t[1U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t[2U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t[3U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU[0U] = 0U;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU[1U] = 0U;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU[2U] = 0U;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU[3U] = 0U;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU[4U] = 0U;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w[0U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w[1U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w[2U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w[3U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w[4U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__data1[0U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__data1[1U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__mul_res[1U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__data2[0U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__data2[1U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU[0U] = 0U;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU[1U] = 0U;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU[2U] = 0U;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU[3U] = 0U;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU[4U] = 0U;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w[0U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w[1U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w[2U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w[3U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w[4U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__data2[0U] = 0ULL;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__data2[1U] = 0ULL;
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

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_initial\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
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
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
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
    zeta_o = VL_RAND_RESET_I(32);
    data2_o = VL_RAND_RESET_Q(64);
    data1_o = VL_RAND_RESET_Q(64);
    { int __Vi0=0; for (; __Vi0<6; ++__Vi0) {
            top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU[__Vi0] = VL_RAND_RESET_I(1);
    }}
    top__DOT__dut__DOT__ntt_comp__DOT__zeta32 = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            top__DOT__dut__DOT__ntt_comp__DOT__w[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            top__DOT__dut__DOT__ntt_comp__DOT__u[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            top__DOT__dut__DOT__ntt_comp__DOT__u_div2[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            top__DOT__dut__DOT__ntt_comp__DOT__t[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            top__DOT__dut__DOT__ntt_comp__DOT__t_div2[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            top__DOT__dut__DOT__ntt_comp__DOT__mul_res[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            top__DOT__dut__DOT__ntt_comp__DOT__data1[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            top__DOT__dut__DOT__ntt_comp__DOT__data2[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    top__DOT__dut__DOT__ntt_comp__DOT__mod_Q__DOT__temp = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__ntt_comp__DOT__STG_0__DOT__is_GS_BU_reg = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__ntt_comp__DOT__STG_0__DOT__data2_reg = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__ntt_comp__DOT__STG_0__DOT__data1_reg = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__ntt_comp__DOT__STG_0__DOT__w_reg = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__is_GS_BU_reg = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__data_mul_reg = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__data2_reg = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__data1_reg = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__w_reg = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__ntt_comp__DOT__STG_2__DOT__is_GS_BU_reg = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__ntt_comp__DOT__STG_2__DOT__u_reg = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__ntt_comp__DOT__STG_2__DOT__t_reg = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__ntt_comp__DOT__STG_2__DOT__w_reg = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__ntt_comp__DOT__STG_3__DOT__is_GS_BU_reg = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__ntt_comp__DOT__STG_3__DOT__u_reg = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__ntt_comp__DOT__STG_3__DOT__t_reg = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__ntt_comp__DOT__STG_3__DOT__w_reg = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__is_GS_BU_reg = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__u_reg = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__t_reg = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__u_div2_reg = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__t_div2_reg = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__w_reg = VL_RAND_RESET_Q(64);
    { int __Vi0=0; for (; __Vi0<6; ++__Vi0) {
            top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU[__Vi0] = VL_RAND_RESET_I(1);
    }}
    top__DOT__dut__DOT__intt_comp__DOT__zeta32 = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            top__DOT__dut__DOT__intt_comp__DOT__w[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            top__DOT__dut__DOT__intt_comp__DOT__u[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            top__DOT__dut__DOT__intt_comp__DOT__u_div2[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            top__DOT__dut__DOT__intt_comp__DOT__t[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            top__DOT__dut__DOT__intt_comp__DOT__t_div2[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            top__DOT__dut__DOT__intt_comp__DOT__mul_res[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            top__DOT__dut__DOT__intt_comp__DOT__data1[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            top__DOT__dut__DOT__intt_comp__DOT__data2[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    top__DOT__dut__DOT__intt_comp__DOT__mod_Q__DOT__temp = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__intt_comp__DOT__STG_0__DOT__is_GS_BU_reg = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__intt_comp__DOT__STG_0__DOT__data2_reg = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__intt_comp__DOT__STG_0__DOT__data1_reg = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__intt_comp__DOT__STG_0__DOT__w_reg = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__is_GS_BU_reg = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__data_mul_reg = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__data2_reg = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__data1_reg = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__w_reg = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__intt_comp__DOT__STG_2__DOT__is_GS_BU_reg = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__intt_comp__DOT__STG_2__DOT__u_reg = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__intt_comp__DOT__STG_2__DOT__t_reg = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__intt_comp__DOT__STG_2__DOT__w_reg = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__intt_comp__DOT__STG_3__DOT__is_GS_BU_reg = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__intt_comp__DOT__STG_3__DOT__u_reg = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__intt_comp__DOT__STG_3__DOT__t_reg = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__intt_comp__DOT__STG_3__DOT__w_reg = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__is_GS_BU_reg = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__u_reg = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__t_reg = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__u_div2_reg = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__t_div2_reg = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__w_reg = VL_RAND_RESET_Q(64);
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
