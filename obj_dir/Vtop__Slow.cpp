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
    if (vlTOPp->reset_ni) {
        vlTOPp->data1_o = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u_o_temp;
        vlTOPp->data2_o = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t_o_temp;
    } else {
        vlTOPp->data1_o = 0U;
        vlTOPp->data2_o = 0U;
    }
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_w2Q__DOT__reduce32_comp__DOT__A_o_temp 
        = (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w_i_temp 
           - ((IData)(0x7fe001U) * (((IData)(0x400000U) 
                                     + vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w_i_temp) 
                                    >> 0x17U)));
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_u2Q__DOT__reduce32_comp__DOT__A_o_temp 
        = (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u_i_temp 
           - ((IData)(0x7fe001U) * (((IData)(0x400000U) 
                                     + vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u_i_temp) 
                                    >> 0x17U)));
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_t2Q__DOT__reduce32_comp__DOT__A_o_temp 
        = (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t_i_temp 
           - ((IData)(0x7fe001U) * (((IData)(0x400000U) 
                                     + vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t_i_temp) 
                                    >> 0x17U)));
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_w2Q__DOT__reduce32_comp__DOT__A_o_temp 
        = (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w_i_temp 
           - ((IData)(0x7fe001U) * (((IData)(0x400000U) 
                                     + vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w_i_temp) 
                                    >> 0x17U)));
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_u2Q__DOT__reduce32_comp__DOT__A_o_temp 
        = (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u_i_temp 
           - ((IData)(0x7fe001U) * (((IData)(0x400000U) 
                                     + vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u_i_temp) 
                                    >> 0x17U)));
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_t2Q__DOT__reduce32_comp__DOT__A_o_temp 
        = (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t_i_temp 
           - ((IData)(0x7fe001U) * (((IData)(0x400000U) 
                                     + vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t_i_temp) 
                                    >> 0x17U)));
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_w2Q__DOT__A_wire 
        = (VL_LTES_III(1,32,32, 0U, vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_w2Q__DOT__reduce32_comp__DOT__A_o_temp)
            ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_w2Q__DOT__reduce32_comp__DOT__A_o_temp
            : ((IData)(0x7fe001U) + vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_w2Q__DOT__reduce32_comp__DOT__A_o_temp));
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_u2Q__DOT__A_wire 
        = (VL_LTES_III(1,32,32, 0U, vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_u2Q__DOT__reduce32_comp__DOT__A_o_temp)
            ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_u2Q__DOT__reduce32_comp__DOT__A_o_temp
            : ((IData)(0x7fe001U) + vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_u2Q__DOT__reduce32_comp__DOT__A_o_temp));
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_t2Q__DOT__A_wire 
        = (VL_LTES_III(1,32,32, 0U, vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_t2Q__DOT__reduce32_comp__DOT__A_o_temp)
            ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_t2Q__DOT__reduce32_comp__DOT__A_o_temp
            : ((IData)(0x7fe001U) + vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_t2Q__DOT__reduce32_comp__DOT__A_o_temp));
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_w2Q__DOT__A_wire 
        = (VL_LTES_III(1,32,32, 0U, vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_w2Q__DOT__reduce32_comp__DOT__A_o_temp)
            ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_w2Q__DOT__reduce32_comp__DOT__A_o_temp
            : ((IData)(0x7fe001U) + vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_w2Q__DOT__reduce32_comp__DOT__A_o_temp));
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_u2Q__DOT__A_wire 
        = (VL_LTES_III(1,32,32, 0U, vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_u2Q__DOT__reduce32_comp__DOT__A_o_temp)
            ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_u2Q__DOT__reduce32_comp__DOT__A_o_temp
            : ((IData)(0x7fe001U) + vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_u2Q__DOT__reduce32_comp__DOT__A_o_temp));
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_t2Q__DOT__A_wire 
        = (VL_LTES_III(1,32,32, 0U, vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_t2Q__DOT__reduce32_comp__DOT__A_o_temp)
            ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_t2Q__DOT__reduce32_comp__DOT__A_o_temp
            : ((IData)(0x7fe001U) + vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_t2Q__DOT__reduce32_comp__DOT__A_o_temp));
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u_reduce32 
        = (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_u2Q__DOT__A_wire 
           + (0x7fe001U & (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_u2Q__DOT__A_wire 
                           >> 0x1fU)));
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__MontModular__DOT__a_temp 
        = VL_MULS_QQQ(64,64,64, VL_EXTENDS_QI(64,32, 
                                              (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_t2Q__DOT__A_wire 
                                               + (0x7fe001U 
                                                  & (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_t2Q__DOT__A_wire 
                                                     >> 0x1fU)))), 
                      VL_EXTENDS_QI(64,32, (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_w2Q__DOT__A_wire 
                                            + (0x7fe001U 
                                               & (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_w2Q__DOT__A_wire 
                                                  >> 0x1fU)))));
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__MontModular__DOT__t_temp 
        = VL_MULS_QQQ(64,64,64, 0x3802001ULL, vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__MontModular__DOT__a_temp);
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__MontModular__DOT__t_temp 
        = ((vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__MontModular__DOT__a_temp 
            - (0x7fe001ULL * (QData)((IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__MontModular__DOT__t_temp)))) 
           >> 0x20U);
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__mult_reduce 
        = (IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__MontModular__DOT__t_temp);
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u_reduce32 
        = (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_u2Q__DOT__A_wire 
           + (0x7fe001U & (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_u2Q__DOT__A_wire 
                           >> 0x1fU)));
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t_reduce32 
        = (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_t2Q__DOT__A_wire 
           + (0x7fe001U & (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_t2Q__DOT__A_wire 
                           >> 0x1fU)));
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__add2modular 
        = (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u_reduce32 
           + vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__mult_reduce);
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__sub2modular 
        = (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u_reduce32 
           - vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__mult_reduce);
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__add2modular 
        = (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u_reduce32 
           + vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t_reduce32);
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__sub2modular 
        = (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u_reduce32 
           - vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t_reduce32);
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Add_Modular__DOT__reduce32_comp__DOT__A_o_temp 
        = (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__add2modular 
           - ((IData)(0x7fe001U) * (((IData)(0x400000U) 
                                     + vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__add2modular) 
                                    >> 0x17U)));
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Sub_Modular__DOT__reduce32_comp__DOT__A_o_temp 
        = (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__sub2modular 
           - ((IData)(0x7fe001U) * (((IData)(0x400000U) 
                                     + vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__sub2modular) 
                                    >> 0x17U)));
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Add_Modular__DOT__reduce32_comp__DOT__A_o_temp 
        = (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__add2modular 
           - ((IData)(0x7fe001U) * (((IData)(0x400000U) 
                                     + vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__add2modular) 
                                    >> 0x17U)));
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Sub_Modular__DOT__reduce32_comp__DOT__A_o_temp 
        = (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__sub2modular 
           - ((IData)(0x7fe001U) * (((IData)(0x400000U) 
                                     + vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__sub2modular) 
                                    >> 0x17U)));
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Add_Modular__DOT__A_wire 
        = (VL_LTES_III(1,32,32, 0U, vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Add_Modular__DOT__reduce32_comp__DOT__A_o_temp)
            ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Add_Modular__DOT__reduce32_comp__DOT__A_o_temp
            : ((IData)(0x7fe001U) + vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Add_Modular__DOT__reduce32_comp__DOT__A_o_temp));
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Sub_Modular__DOT__A_wire 
        = (VL_LTES_III(1,32,32, 0U, vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Sub_Modular__DOT__reduce32_comp__DOT__A_o_temp)
            ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Sub_Modular__DOT__reduce32_comp__DOT__A_o_temp
            : ((IData)(0x7fe001U) + vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Sub_Modular__DOT__reduce32_comp__DOT__A_o_temp));
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Add_Modular__DOT__A_wire 
        = (VL_LTES_III(1,32,32, 0U, vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Add_Modular__DOT__reduce32_comp__DOT__A_o_temp)
            ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Add_Modular__DOT__reduce32_comp__DOT__A_o_temp
            : ((IData)(0x7fe001U) + vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Add_Modular__DOT__reduce32_comp__DOT__A_o_temp));
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Sub_Modular__DOT__A_wire 
        = (VL_LTES_III(1,32,32, 0U, vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Sub_Modular__DOT__reduce32_comp__DOT__A_o_temp)
            ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Sub_Modular__DOT__reduce32_comp__DOT__A_o_temp
            : ((IData)(0x7fe001U) + vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Sub_Modular__DOT__reduce32_comp__DOT__A_o_temp));
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red2u__DOT__a_temp 
        = VL_MULS_QQQ(64,64,64, 0xa3faULL, VL_EXTENDS_QI(64,32, 
                                                         (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Add_Modular__DOT__A_wire 
                                                          + 
                                                          (0x7fe001U 
                                                           & (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Add_Modular__DOT__A_wire 
                                                              >> 0x1fU)))));
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red2u__DOT__t_temp 
        = VL_MULS_QQQ(64,64,64, 0x3802001ULL, vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red2u__DOT__a_temp);
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red2u__DOT__t_temp 
        = ((vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red2u__DOT__a_temp 
            - (0x7fe001ULL * (QData)((IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red2u__DOT__t_temp)))) 
           >> 0x20U);
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u_temp2 
        = (IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red2u__DOT__t_temp);
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red2t__DOT__a_temp 
        = VL_MULS_QQQ(64,64,64, 0xa3faULL, VL_EXTENDS_QI(64,32, 
                                                         (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Sub_Modular__DOT__A_wire 
                                                          + 
                                                          (0x7fe001U 
                                                           & (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Sub_Modular__DOT__A_wire 
                                                              >> 0x1fU)))));
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red2t__DOT__t_temp 
        = VL_MULS_QQQ(64,64,64, 0x3802001ULL, vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red2t__DOT__a_temp);
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red2t__DOT__t_temp 
        = ((vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red2t__DOT__a_temp 
            - (0x7fe001ULL * (QData)((IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red2t__DOT__t_temp)))) 
           >> 0x20U);
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t_temp2 
        = (IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red2t__DOT__t_temp);
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red2u__DOT__a_temp 
        = VL_MULS_QQQ(64,64,64, 0xa3faULL, VL_EXTENDS_QI(64,32, 
                                                         ((vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Add_Modular__DOT__A_wire 
                                                           + 
                                                           (0x7fe001U 
                                                            & (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Add_Modular__DOT__A_wire 
                                                               >> 0x1fU))) 
                                                          >> 1U)));
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red2u__DOT__t_temp 
        = VL_MULS_QQQ(64,64,64, 0x3802001ULL, vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red2u__DOT__a_temp);
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red2u__DOT__t_temp 
        = ((vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red2u__DOT__a_temp 
            - (0x7fe001ULL * (QData)((IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red2u__DOT__t_temp)))) 
           >> 0x20U);
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u_temp2 
        = (IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red2u__DOT__t_temp);
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__sub_reduce 
        = (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Sub_Modular__DOT__A_wire 
           + (0x7fe001U & (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Sub_Modular__DOT__A_wire 
                           >> 0x1fU)));
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red2t__DOT__a_temp 
        = VL_MULS_QQQ(64,64,64, 0xa3faULL, VL_EXTENDS_QI(64,32, 
                                                         (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__sub_reduce 
                                                          >> 1U)));
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red2t__DOT__t_temp 
        = VL_MULS_QQQ(64,64,64, 0x3802001ULL, vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red2t__DOT__a_temp);
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red2t__DOT__t_temp 
        = ((vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red2t__DOT__a_temp 
            - (0x7fe001ULL * (QData)((IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red2t__DOT__t_temp)))) 
           >> 0x20U);
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t_temp2 
        = (IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red2t__DOT__t_temp);
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__MontModular__DOT__a_temp 
        = VL_MULS_QQQ(64,64,64, VL_EXTENDS_QI(64,32, vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__sub_reduce), 
                      VL_EXTENDS_QI(64,32, (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_w2Q__DOT__A_wire 
                                            + (0x7fe001U 
                                               & (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_w2Q__DOT__A_wire 
                                                  >> 0x1fU)))));
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__MontModular__DOT__t_temp 
        = VL_MULS_QQQ(64,64,64, 0x3802001ULL, vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__MontModular__DOT__a_temp);
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__MontModular__DOT__t_temp 
        = ((vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__MontModular__DOT__a_temp 
            - (0x7fe001ULL * (QData)((IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__MontModular__DOT__t_temp)))) 
           >> 0x20U);
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__mult_reduce 
        = (IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__MontModular__DOT__t_temp);
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
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_ctor_var_reset\n"); );
    // Body
    reset_ni = VL_RAND_RESET_I(1);
    clk_i = VL_RAND_RESET_I(1);
    data1_i = VL_RAND_RESET_I(32);
    data2_i = VL_RAND_RESET_I(32);
    zeta_i = VL_RAND_RESET_I(32);
    data2_o = VL_RAND_RESET_I(32);
    data1_o = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__ntt_comp__DOT__u_i_temp = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__ntt_comp__DOT__t_i_temp = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__ntt_comp__DOT__w_i_temp = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__ntt_comp__DOT__u_o_temp = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__ntt_comp__DOT__t_o_temp = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__ntt_comp__DOT__u_reduce32 = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__ntt_comp__DOT__u_temp2 = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__ntt_comp__DOT__t_temp2 = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__ntt_comp__DOT__mult_reduce = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__ntt_comp__DOT__add2modular = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__ntt_comp__DOT__sub2modular = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__ntt_comp__DOT__Red_u2Q__DOT__A_wire = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__ntt_comp__DOT__Red_u2Q__DOT__reduce32_comp__DOT__A_o_temp = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__ntt_comp__DOT__Red_t2Q__DOT__A_wire = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__ntt_comp__DOT__Red_t2Q__DOT__reduce32_comp__DOT__A_o_temp = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__ntt_comp__DOT__Red_w2Q__DOT__A_wire = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__ntt_comp__DOT__Red_w2Q__DOT__reduce32_comp__DOT__A_o_temp = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__ntt_comp__DOT__Add_Modular__DOT__A_wire = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__ntt_comp__DOT__Add_Modular__DOT__reduce32_comp__DOT__A_o_temp = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__ntt_comp__DOT__Sub_Modular__DOT__A_wire = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__ntt_comp__DOT__Sub_Modular__DOT__reduce32_comp__DOT__A_o_temp = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__ntt_comp__DOT__MontModular__DOT__a_temp = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__ntt_comp__DOT__MontModular__DOT__t_temp = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__ntt_comp__DOT__Red2u__DOT__a_temp = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__ntt_comp__DOT__Red2u__DOT__t_temp = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__ntt_comp__DOT__Red2t__DOT__a_temp = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__ntt_comp__DOT__Red2t__DOT__t_temp = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__intt_comp__DOT__u_i_temp = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__intt_comp__DOT__t_i_temp = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__intt_comp__DOT__w_i_temp = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__intt_comp__DOT__u_o_temp = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__intt_comp__DOT__t_o_temp = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__intt_comp__DOT__u_reduce32 = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__intt_comp__DOT__t_reduce32 = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__intt_comp__DOT__u_temp2 = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__intt_comp__DOT__t_temp2 = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__intt_comp__DOT__sub_reduce = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__intt_comp__DOT__mult_reduce = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__intt_comp__DOT__add2modular = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__intt_comp__DOT__sub2modular = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__intt_comp__DOT__Red_u2Q__DOT__A_wire = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__intt_comp__DOT__Red_u2Q__DOT__reduce32_comp__DOT__A_o_temp = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__intt_comp__DOT__Red_t2Q__DOT__A_wire = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__intt_comp__DOT__Red_t2Q__DOT__reduce32_comp__DOT__A_o_temp = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__intt_comp__DOT__Red_w2Q__DOT__A_wire = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__intt_comp__DOT__Red_w2Q__DOT__reduce32_comp__DOT__A_o_temp = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__intt_comp__DOT__Add_Modular__DOT__A_wire = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__intt_comp__DOT__Add_Modular__DOT__reduce32_comp__DOT__A_o_temp = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__intt_comp__DOT__Sub_Modular__DOT__A_wire = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__intt_comp__DOT__Sub_Modular__DOT__reduce32_comp__DOT__A_o_temp = VL_RAND_RESET_I(32);
    top__DOT__dut__DOT__intt_comp__DOT__MontModular__DOT__a_temp = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__intt_comp__DOT__MontModular__DOT__t_temp = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__intt_comp__DOT__Red2u__DOT__a_temp = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__intt_comp__DOT__Red2u__DOT__t_temp = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__intt_comp__DOT__Red2t__DOT__a_temp = VL_RAND_RESET_Q(64);
    top__DOT__dut__DOT__intt_comp__DOT__Red2t__DOT__t_temp = VL_RAND_RESET_Q(64);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
