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
            tracep->chgBit(oldp+0,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_0__DOT__is_GS_BU_reg));
            tracep->chgQData(oldp+1,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_0__DOT__data2_reg),64);
            tracep->chgQData(oldp+3,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_0__DOT__data1_reg),64);
            tracep->chgQData(oldp+5,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_0__DOT__w_reg),64);
            tracep->chgBit(oldp+7,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__is_GS_BU_reg));
            tracep->chgQData(oldp+8,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__data_mul_reg),64);
            tracep->chgQData(oldp+10,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__data2_reg),64);
            tracep->chgQData(oldp+12,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__data1_reg),64);
            tracep->chgQData(oldp+14,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__w_reg),64);
            tracep->chgBit(oldp+16,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_2__DOT__is_GS_BU_reg));
            tracep->chgQData(oldp+17,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_2__DOT__u_reg),64);
            tracep->chgQData(oldp+19,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_2__DOT__t_reg),64);
            tracep->chgQData(oldp+21,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_2__DOT__w_reg),64);
            tracep->chgBit(oldp+23,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_3__DOT__is_GS_BU_reg));
            tracep->chgQData(oldp+24,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_3__DOT__u_reg),64);
            tracep->chgQData(oldp+26,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_3__DOT__t_reg),64);
            tracep->chgQData(oldp+28,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_3__DOT__w_reg),64);
            tracep->chgBit(oldp+30,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__is_GS_BU_reg));
            tracep->chgQData(oldp+31,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__u_reg),64);
            tracep->chgQData(oldp+33,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__t_reg),64);
            tracep->chgQData(oldp+35,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__u_div2_reg),64);
            tracep->chgQData(oldp+37,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__t_div2_reg),64);
            tracep->chgQData(oldp+39,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__w_reg),64);
            tracep->chgBit(oldp+41,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_0__DOT__is_GS_BU_reg));
            tracep->chgQData(oldp+42,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_0__DOT__data2_reg),64);
            tracep->chgQData(oldp+44,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_0__DOT__data1_reg),64);
            tracep->chgQData(oldp+46,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_0__DOT__w_reg),64);
            tracep->chgBit(oldp+48,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__is_GS_BU_reg));
            tracep->chgQData(oldp+49,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__data_mul_reg),64);
            tracep->chgQData(oldp+51,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__data2_reg),64);
            tracep->chgQData(oldp+53,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__data1_reg),64);
            tracep->chgQData(oldp+55,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__w_reg),64);
            tracep->chgBit(oldp+57,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_2__DOT__is_GS_BU_reg));
            tracep->chgQData(oldp+58,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_2__DOT__u_reg),64);
            tracep->chgQData(oldp+60,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_2__DOT__t_reg),64);
            tracep->chgQData(oldp+62,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_2__DOT__w_reg),64);
            tracep->chgBit(oldp+64,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_3__DOT__is_GS_BU_reg));
            tracep->chgQData(oldp+65,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_3__DOT__u_reg),64);
            tracep->chgQData(oldp+67,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_3__DOT__t_reg),64);
            tracep->chgQData(oldp+69,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_3__DOT__w_reg),64);
            tracep->chgBit(oldp+71,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__is_GS_BU_reg));
            tracep->chgQData(oldp+72,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__u_reg),64);
            tracep->chgQData(oldp+74,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__t_reg),64);
            tracep->chgQData(oldp+76,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__u_div2_reg),64);
            tracep->chgQData(oldp+78,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__t_div2_reg),64);
            tracep->chgQData(oldp+80,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__w_reg),64);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+82,((IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w
                                              [4U])),32);
            tracep->chgBit(oldp+83,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU[0]));
            tracep->chgBit(oldp+84,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU[1]));
            tracep->chgBit(oldp+85,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU[2]));
            tracep->chgBit(oldp+86,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU[3]));
            tracep->chgBit(oldp+87,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU[4]));
            tracep->chgBit(oldp+88,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU[5]));
            tracep->chgIData(oldp+89,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__zeta32),32);
            tracep->chgQData(oldp+90,(((0x80000000U 
                                        & vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__zeta32)
                                        ? (0xffffffff00000000ULL 
                                           | (QData)((IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__zeta32)))
                                        : (QData)((IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__zeta32)))),64);
            tracep->chgQData(oldp+92,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w[0]),64);
            tracep->chgQData(oldp+94,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w[1]),64);
            tracep->chgQData(oldp+96,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w[2]),64);
            tracep->chgQData(oldp+98,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w[3]),64);
            tracep->chgQData(oldp+100,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w[4]),64);
            tracep->chgQData(oldp+102,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u[0]),64);
            tracep->chgQData(oldp+104,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u[1]),64);
            tracep->chgQData(oldp+106,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u[2]),64);
            tracep->chgQData(oldp+108,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u[3]),64);
            tracep->chgQData(oldp+110,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u_div2[0]),64);
            tracep->chgQData(oldp+112,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u_div2[1]),64);
            tracep->chgQData(oldp+114,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t[0]),64);
            tracep->chgQData(oldp+116,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t[1]),64);
            tracep->chgQData(oldp+118,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t[2]),64);
            tracep->chgQData(oldp+120,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t[3]),64);
            tracep->chgQData(oldp+122,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t_div2[0]),64);
            tracep->chgQData(oldp+124,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t_div2[1]),64);
            tracep->chgQData(oldp+126,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__mul_res[0]),64);
            tracep->chgQData(oldp+128,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__mul_res[1]),64);
            tracep->chgQData(oldp+130,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__data1[0]),64);
            tracep->chgQData(oldp+132,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__data1[1]),64);
            tracep->chgQData(oldp+134,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__data1[2]),64);
            tracep->chgQData(oldp+136,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__data2[0]),64);
            tracep->chgQData(oldp+138,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__data2[1]),64);
            tracep->chgQData(oldp+140,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__data2[2]),64);
            tracep->chgIData(oldp+142,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__mod_Q__DOT__temp),32);
            tracep->chgBit(oldp+143,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU
                                     [0U]));
            tracep->chgQData(oldp+144,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__data1
                                       [0U]),64);
            tracep->chgQData(oldp+146,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__data2
                                       [0U]),64);
            tracep->chgQData(oldp+148,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__mul_res
                                       [0U]),64);
            tracep->chgQData(oldp+150,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w
                                       [0U]),64);
            tracep->chgBit(oldp+152,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU
                                     [1U]));
            tracep->chgQData(oldp+153,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u
                                       [0U]),64);
            tracep->chgQData(oldp+155,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t
                                       [0U]),64);
            tracep->chgQData(oldp+157,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w
                                       [1U]),64);
            tracep->chgBit(oldp+159,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU
                                     [2U]));
            tracep->chgQData(oldp+160,((vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u
                                        [1U] + vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t
                                        [1U])),64);
            tracep->chgQData(oldp+162,((vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u
                                        [1U] - vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t
                                        [1U])),64);
            tracep->chgQData(oldp+164,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w
                                       [2U]),64);
            tracep->chgBit(oldp+166,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU
                                     [3U]));
            tracep->chgQData(oldp+167,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u
                                       [2U]),64);
            tracep->chgQData(oldp+169,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t
                                       [2U]),64);
            tracep->chgQData(oldp+171,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u_div2
                                       [0U]),64);
            tracep->chgQData(oldp+173,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t_div2
                                       [0U]),64);
            tracep->chgQData(oldp+175,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w
                                       [3U]),64);
            tracep->chgBit(oldp+177,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU[0]));
            tracep->chgBit(oldp+178,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU[1]));
            tracep->chgBit(oldp+179,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU[2]));
            tracep->chgBit(oldp+180,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU[3]));
            tracep->chgBit(oldp+181,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU[4]));
            tracep->chgBit(oldp+182,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU[5]));
            tracep->chgIData(oldp+183,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__zeta32),32);
            tracep->chgQData(oldp+184,(((0x80000000U 
                                         & vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__zeta32)
                                         ? (0xffffffff00000000ULL 
                                            | (QData)((IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__zeta32)))
                                         : (QData)((IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__zeta32)))),64);
            tracep->chgQData(oldp+186,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w[0]),64);
            tracep->chgQData(oldp+188,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w[1]),64);
            tracep->chgQData(oldp+190,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w[2]),64);
            tracep->chgQData(oldp+192,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w[3]),64);
            tracep->chgQData(oldp+194,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w[4]),64);
            tracep->chgQData(oldp+196,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u[0]),64);
            tracep->chgQData(oldp+198,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u[1]),64);
            tracep->chgQData(oldp+200,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u[2]),64);
            tracep->chgQData(oldp+202,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u[3]),64);
            tracep->chgQData(oldp+204,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u_div2[0]),64);
            tracep->chgQData(oldp+206,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u_div2[1]),64);
            tracep->chgQData(oldp+208,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t[0]),64);
            tracep->chgQData(oldp+210,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t[1]),64);
            tracep->chgQData(oldp+212,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t[2]),64);
            tracep->chgQData(oldp+214,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t[3]),64);
            tracep->chgQData(oldp+216,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t_div2[0]),64);
            tracep->chgQData(oldp+218,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t_div2[1]),64);
            tracep->chgQData(oldp+220,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__mul_res[0]),64);
            tracep->chgQData(oldp+222,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__mul_res[1]),64);
            tracep->chgQData(oldp+224,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__data1[0]),64);
            tracep->chgQData(oldp+226,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__data1[1]),64);
            tracep->chgQData(oldp+228,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__data1[2]),64);
            tracep->chgQData(oldp+230,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__data2[0]),64);
            tracep->chgQData(oldp+232,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__data2[1]),64);
            tracep->chgQData(oldp+234,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__data2[2]),64);
            tracep->chgIData(oldp+236,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__mod_Q__DOT__temp),32);
            tracep->chgBit(oldp+237,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU
                                     [0U]));
            tracep->chgQData(oldp+238,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__data1
                                       [0U]),64);
            tracep->chgQData(oldp+240,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__data2
                                       [0U]),64);
            tracep->chgQData(oldp+242,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__mul_res
                                       [0U]),64);
            tracep->chgQData(oldp+244,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w
                                       [0U]),64);
            tracep->chgBit(oldp+246,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU
                                     [1U]));
            tracep->chgQData(oldp+247,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u
                                       [0U]),64);
            tracep->chgQData(oldp+249,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t
                                       [0U]),64);
            tracep->chgQData(oldp+251,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w
                                       [1U]),64);
            tracep->chgBit(oldp+253,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU
                                     [2U]));
            tracep->chgQData(oldp+254,((vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u
                                        [1U] + vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t
                                        [1U])),64);
            tracep->chgQData(oldp+256,((vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u
                                        [1U] - vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t
                                        [1U])),64);
            tracep->chgQData(oldp+258,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w
                                       [2U]),64);
            tracep->chgBit(oldp+260,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU
                                     [3U]));
            tracep->chgQData(oldp+261,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u
                                       [2U]),64);
            tracep->chgQData(oldp+263,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t
                                       [2U]),64);
            tracep->chgQData(oldp+265,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u_div2
                                       [0U]),64);
            tracep->chgQData(oldp+267,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t_div2
                                       [0U]),64);
            tracep->chgQData(oldp+269,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w
                                       [3U]),64);
        }
        tracep->chgBit(oldp+271,(vlTOPp->clk_i));
        tracep->chgBit(oldp+272,(vlTOPp->reset_ni));
        tracep->chgQData(oldp+273,(vlTOPp->data1_i),64);
        tracep->chgQData(oldp+275,(vlTOPp->data2_i),64);
        tracep->chgIData(oldp+277,(vlTOPp->zeta_i),32);
        tracep->chgIData(oldp+278,(vlTOPp->zeta_o),32);
        tracep->chgQData(oldp+279,(vlTOPp->data2_o),64);
        tracep->chgQData(oldp+281,(vlTOPp->data1_o),64);
        tracep->chgQData(oldp+283,(((IData)(vlTOPp->reset_ni)
                                     ? (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU
                                        [4U] ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u
                                        [3U] : vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u_div2
                                        [1U]) : 0ULL)),64);
        tracep->chgQData(oldp+285,(((IData)(vlTOPp->reset_ni)
                                     ? (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU
                                        [4U] ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t
                                        [3U] : VL_DIV_QQQ(64, 
                                                          vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t_div2
                                                          [1U], 
                                                          vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w
                                                          [4U]))
                                     : 0ULL)),64);
        tracep->chgBit(oldp+287,(((IData)(vlTOPp->reset_ni)
                                   ? (1U & (IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_0__DOT__is_GS_BU_reg))
                                   : 0U)));
        tracep->chgQData(oldp+288,(((IData)(vlTOPp->reset_ni)
                                     ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_0__DOT__data2_reg
                                     : 0ULL)),64);
        tracep->chgQData(oldp+290,(((IData)(vlTOPp->reset_ni)
                                     ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_0__DOT__data1_reg
                                     : 0ULL)),64);
        tracep->chgQData(oldp+292,(((IData)(vlTOPp->reset_ni)
                                     ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_0__DOT__w_reg
                                     : 0ULL)),64);
        tracep->chgBit(oldp+294,(((IData)(vlTOPp->reset_ni)
                                   ? (1U & (IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__is_GS_BU_reg))
                                   : 0U)));
        tracep->chgQData(oldp+295,(((IData)(vlTOPp->reset_ni)
                                     ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__data2_reg
                                     : 0ULL)),64);
        tracep->chgQData(oldp+297,(((IData)(vlTOPp->reset_ni)
                                     ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__data1_reg
                                     : 0ULL)),64);
        tracep->chgQData(oldp+299,(((IData)(vlTOPp->reset_ni)
                                     ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__data_mul_reg
                                     : 0ULL)),64);
        tracep->chgQData(oldp+301,(((IData)(vlTOPp->reset_ni)
                                     ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__w_reg
                                     : 0ULL)),64);
        tracep->chgBit(oldp+303,(((IData)(vlTOPp->reset_ni)
                                   ? (1U & (IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_2__DOT__is_GS_BU_reg))
                                   : 0U)));
        tracep->chgQData(oldp+304,(((IData)(vlTOPp->reset_ni)
                                     ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_2__DOT__u_reg
                                     : 0ULL)),64);
        tracep->chgQData(oldp+306,(((IData)(vlTOPp->reset_ni)
                                     ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_2__DOT__t_reg
                                     : 0ULL)),64);
        tracep->chgQData(oldp+308,(((IData)(vlTOPp->reset_ni)
                                     ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_2__DOT__w_reg
                                     : 0ULL)),64);
        tracep->chgBit(oldp+310,(((IData)(vlTOPp->reset_ni)
                                   ? (1U & (IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_3__DOT__is_GS_BU_reg))
                                   : 0U)));
        tracep->chgQData(oldp+311,(((IData)(vlTOPp->reset_ni)
                                     ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_3__DOT__u_reg
                                     : 0ULL)),64);
        tracep->chgQData(oldp+313,(((IData)(vlTOPp->reset_ni)
                                     ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_3__DOT__t_reg
                                     : 0ULL)),64);
        tracep->chgQData(oldp+315,(((IData)(vlTOPp->reset_ni)
                                     ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_3__DOT__w_reg
                                     : 0ULL)),64);
        tracep->chgBit(oldp+317,(((IData)(vlTOPp->reset_ni)
                                   ? (1U & (IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__is_GS_BU_reg))
                                   : 0U)));
        tracep->chgQData(oldp+318,(((IData)(vlTOPp->reset_ni)
                                     ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__u_reg
                                     : 0ULL)),64);
        tracep->chgQData(oldp+320,(((IData)(vlTOPp->reset_ni)
                                     ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__t_reg
                                     : 0ULL)),64);
        tracep->chgQData(oldp+322,(((IData)(vlTOPp->reset_ni)
                                     ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__u_div2_reg
                                     : 0ULL)),64);
        tracep->chgQData(oldp+324,(((IData)(vlTOPp->reset_ni)
                                     ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__t_div2_reg
                                     : 0ULL)),64);
        tracep->chgQData(oldp+326,(((IData)(vlTOPp->reset_ni)
                                     ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__w_reg
                                     : 0ULL)),64);
        tracep->chgBit(oldp+328,(((IData)(vlTOPp->reset_ni)
                                   ? (1U & (IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_0__DOT__is_GS_BU_reg))
                                   : 0U)));
        tracep->chgQData(oldp+329,(((IData)(vlTOPp->reset_ni)
                                     ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_0__DOT__data2_reg
                                     : 0ULL)),64);
        tracep->chgQData(oldp+331,(((IData)(vlTOPp->reset_ni)
                                     ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_0__DOT__data1_reg
                                     : 0ULL)),64);
        tracep->chgQData(oldp+333,(((IData)(vlTOPp->reset_ni)
                                     ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_0__DOT__w_reg
                                     : 0ULL)),64);
        tracep->chgBit(oldp+335,(((IData)(vlTOPp->reset_ni)
                                   ? (1U & (IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__is_GS_BU_reg))
                                   : 0U)));
        tracep->chgQData(oldp+336,(((IData)(vlTOPp->reset_ni)
                                     ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__data2_reg
                                     : 0ULL)),64);
        tracep->chgQData(oldp+338,(((IData)(vlTOPp->reset_ni)
                                     ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__data1_reg
                                     : 0ULL)),64);
        tracep->chgQData(oldp+340,(((IData)(vlTOPp->reset_ni)
                                     ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__data_mul_reg
                                     : 0ULL)),64);
        tracep->chgQData(oldp+342,(((IData)(vlTOPp->reset_ni)
                                     ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__w_reg
                                     : 0ULL)),64);
        tracep->chgBit(oldp+344,(((IData)(vlTOPp->reset_ni)
                                   ? (1U & (IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_2__DOT__is_GS_BU_reg))
                                   : 0U)));
        tracep->chgQData(oldp+345,(((IData)(vlTOPp->reset_ni)
                                     ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_2__DOT__u_reg
                                     : 0ULL)),64);
        tracep->chgQData(oldp+347,(((IData)(vlTOPp->reset_ni)
                                     ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_2__DOT__t_reg
                                     : 0ULL)),64);
        tracep->chgQData(oldp+349,(((IData)(vlTOPp->reset_ni)
                                     ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_2__DOT__w_reg
                                     : 0ULL)),64);
        tracep->chgBit(oldp+351,(((IData)(vlTOPp->reset_ni)
                                   ? (1U & (IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_3__DOT__is_GS_BU_reg))
                                   : 0U)));
        tracep->chgQData(oldp+352,(((IData)(vlTOPp->reset_ni)
                                     ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_3__DOT__u_reg
                                     : 0ULL)),64);
        tracep->chgQData(oldp+354,(((IData)(vlTOPp->reset_ni)
                                     ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_3__DOT__t_reg
                                     : 0ULL)),64);
        tracep->chgQData(oldp+356,(((IData)(vlTOPp->reset_ni)
                                     ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_3__DOT__w_reg
                                     : 0ULL)),64);
        tracep->chgBit(oldp+358,(((IData)(vlTOPp->reset_ni)
                                   ? (1U & (IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__is_GS_BU_reg))
                                   : 0U)));
        tracep->chgQData(oldp+359,(((IData)(vlTOPp->reset_ni)
                                     ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__u_reg
                                     : 0ULL)),64);
        tracep->chgQData(oldp+361,(((IData)(vlTOPp->reset_ni)
                                     ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__t_reg
                                     : 0ULL)),64);
        tracep->chgQData(oldp+363,(((IData)(vlTOPp->reset_ni)
                                     ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__u_div2_reg
                                     : 0ULL)),64);
        tracep->chgQData(oldp+365,(((IData)(vlTOPp->reset_ni)
                                     ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__t_div2_reg
                                     : 0ULL)),64);
        tracep->chgQData(oldp+367,(((IData)(vlTOPp->reset_ni)
                                     ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__w_reg
                                     : 0ULL)),64);
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
        vlTOPp->__Vm_traceActivity[2U] = 0U;
    }
}
