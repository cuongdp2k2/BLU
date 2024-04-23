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
        tracep->declBit(c+116,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+117,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
        tracep->declBus(c+118,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
        tracep->declBit(c+119,"carry_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+120,"sum_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
        tracep->declBit(c+121,"carry_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+122,"top DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+116,"top clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+117,"top a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
        tracep->declBus(c+118,"top b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
        tracep->declBit(c+119,"top carry_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+120,"top sum_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
        tracep->declBit(c+121,"top carry_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+117,"top dut a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
        tracep->declBus(c+118,"top dut b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
        tracep->declBit(c+119,"top dut carry_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+120,"top dut sum_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
        tracep->declBit(c+121,"top dut carry_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1,"top dut P_stg1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
        tracep->declBus(c+2,"top dut G_stg1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
        tracep->declBus(c+3,"top dut P_stg2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+4,"top dut G_stg2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+5,"top dut P_stg3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+6,"top dut G_stg3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+7,"top dut P_stg4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+8,"top dut G_stg4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+9,"top dut P_stg5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+10,"top dut G_stg5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+11,"top dut P_stg6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+12,"top dut G_stg6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+13,"top dut P_stg7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+14,"top dut G_stg7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+15,"top dut P_stg8",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+16,"top dut G_stg8",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+17,"top dut C",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
        tracep->declBus(c+7,"top dut stage5_dot P_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+8,"top dut stage5_dot G_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+9,"top dut stage5_dot P_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+10,"top dut stage5_dot G_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+18,"top dut stage6_dot P_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+19,"top dut stage6_dot G_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+11,"top dut stage6_dot P_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+12,"top dut stage6_dot G_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+20,"top dut stage7_dot1 P_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+21,"top dut stage7_dot1 G_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+22,"top dut stage7_dot1 P_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+23,"top dut stage7_dot1 G_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+24,"top dut stage7_dot2 P_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+25,"top dut stage7_dot2 G_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+26,"top dut stage7_dot2 P_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+27,"top dut stage7_dot2 G_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+28,"top dut stage7_dot3 P_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+29,"top dut stage7_dot3 G_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+30,"top dut stage7_dot3 P_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+31,"top dut stage7_dot3 G_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+32,"top dut stage8_dot2 P_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+33,"top dut stage8_dot2 G_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+34,"top dut stage8_dot2 P_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+35,"top dut stage8_dot2 G_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+36,"top dut stage8_dot3 P_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+37,"top dut stage8_dot3 G_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+38,"top dut stage8_dot3 P_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+39,"top dut stage8_dot3 G_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+40,"top dut stage8_dot4 P_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+41,"top dut stage8_dot4 G_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+42,"top dut stage8_dot4 P_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+43,"top dut stage8_dot4 G_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+44,"top dut stage8_dot5 P_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+45,"top dut stage8_dot5 G_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+46,"top dut stage8_dot5 P_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+47,"top dut stage8_dot5 G_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+48,"top dut stage8_dot6 P_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+49,"top dut stage8_dot6 G_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+50,"top dut stage8_dot6 P_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+51,"top dut stage8_dot6 G_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+52,"top dut stage8_dot7 P_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+53,"top dut stage8_dot7 G_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+54,"top dut stage8_dot7 P_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+55,"top dut stage8_dot7 G_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+56,"top dut stage8_dot8 P_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+57,"top dut stage8_dot8 G_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+58,"top dut stage8_dot8 P_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+59,"top dut stage8_dot8 G_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+60,"top dut satge2_black_dot_Connection[0] stage2_dot P_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+61,"top dut satge2_black_dot_Connection[0] stage2_dot G_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+62,"top dut satge2_black_dot_Connection[0] stage2_dot P_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+63,"top dut satge2_black_dot_Connection[0] stage2_dot G_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+64,"top dut satge2_black_dot_Connection[2] stage2_dot P_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+65,"top dut satge2_black_dot_Connection[2] stage2_dot G_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+66,"top dut satge2_black_dot_Connection[2] stage2_dot P_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+67,"top dut satge2_black_dot_Connection[2] stage2_dot G_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+68,"top dut satge2_black_dot_Connection[4] stage2_dot P_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+69,"top dut satge2_black_dot_Connection[4] stage2_dot G_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+70,"top dut satge2_black_dot_Connection[4] stage2_dot P_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+71,"top dut satge2_black_dot_Connection[4] stage2_dot G_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+72,"top dut satge2_black_dot_Connection[6] stage2_dot P_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+73,"top dut satge2_black_dot_Connection[6] stage2_dot G_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+74,"top dut satge2_black_dot_Connection[6] stage2_dot P_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+75,"top dut satge2_black_dot_Connection[6] stage2_dot G_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+76,"top dut satge2_black_dot_Connection[8] stage2_dot P_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+77,"top dut satge2_black_dot_Connection[8] stage2_dot G_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+78,"top dut satge2_black_dot_Connection[8] stage2_dot P_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+79,"top dut satge2_black_dot_Connection[8] stage2_dot G_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+80,"top dut satge2_black_dot_Connection[10] stage2_dot P_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+81,"top dut satge2_black_dot_Connection[10] stage2_dot G_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+82,"top dut satge2_black_dot_Connection[10] stage2_dot P_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+83,"top dut satge2_black_dot_Connection[10] stage2_dot G_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+84,"top dut satge2_black_dot_Connection[12] stage2_dot P_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+85,"top dut satge2_black_dot_Connection[12] stage2_dot G_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+86,"top dut satge2_black_dot_Connection[12] stage2_dot P_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+87,"top dut satge2_black_dot_Connection[12] stage2_dot G_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+88,"top dut satge2_black_dot_Connection[14] stage2_dot P_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+89,"top dut satge2_black_dot_Connection[14] stage2_dot G_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+90,"top dut satge2_black_dot_Connection[14] stage2_dot P_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+91,"top dut satge2_black_dot_Connection[14] stage2_dot G_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+92,"top dut satge3_black_dot_Connection[0] stage3_dot P_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+93,"top dut satge3_black_dot_Connection[0] stage3_dot G_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+94,"top dut satge3_black_dot_Connection[0] stage3_dot P_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+95,"top dut satge3_black_dot_Connection[0] stage3_dot G_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+96,"top dut satge3_black_dot_Connection[2] stage3_dot P_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+97,"top dut satge3_black_dot_Connection[2] stage3_dot G_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+98,"top dut satge3_black_dot_Connection[2] stage3_dot P_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+99,"top dut satge3_black_dot_Connection[2] stage3_dot G_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+100,"top dut satge3_black_dot_Connection[4] stage3_dot P_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+101,"top dut satge3_black_dot_Connection[4] stage3_dot G_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+102,"top dut satge3_black_dot_Connection[4] stage3_dot P_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+103,"top dut satge3_black_dot_Connection[4] stage3_dot G_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+104,"top dut satge3_black_dot_Connection[6] stage3_dot P_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+105,"top dut satge3_black_dot_Connection[6] stage3_dot G_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+106,"top dut satge3_black_dot_Connection[6] stage3_dot P_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+107,"top dut satge3_black_dot_Connection[6] stage3_dot G_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+108,"top dut satge4_black_dot_Connection[0] stage4_dot P_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+109,"top dut satge4_black_dot_Connection[0] stage4_dot G_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+110,"top dut satge4_black_dot_Connection[0] stage4_dot P_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+111,"top dut satge4_black_dot_Connection[0] stage4_dot G_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+112,"top dut satge4_black_dot_Connection[2] stage4_dot P_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+113,"top dut satge4_black_dot_Connection[2] stage4_dot G_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+114,"top dut satge4_black_dot_Connection[2] stage4_dot P_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+115,"top dut satge4_black_dot_Connection[2] stage4_dot G_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
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
        tracep->fullSData(oldp+1,(vlTOPp->top__DOT__dut__DOT__P_stg1),16);
        tracep->fullSData(oldp+2,(vlTOPp->top__DOT__dut__DOT__G_stg1),16);
        tracep->fullCData(oldp+3,(vlTOPp->top__DOT__dut__DOT__P_stg2),8);
        tracep->fullCData(oldp+4,(vlTOPp->top__DOT__dut__DOT__G_stg2),8);
        tracep->fullCData(oldp+5,(vlTOPp->top__DOT__dut__DOT__P_stg3),4);
        tracep->fullCData(oldp+6,(vlTOPp->top__DOT__dut__DOT__G_stg3),4);
        tracep->fullCData(oldp+7,(vlTOPp->top__DOT__dut__DOT__P_stg4),2);
        tracep->fullCData(oldp+8,(vlTOPp->top__DOT__dut__DOT__G_stg4),2);
        tracep->fullBit(oldp+9,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg4) 
                                        >> 1U) & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg4)))));
        tracep->fullBit(oldp+10,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__G_stg4) 
                                         >> 1U) | (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg4) 
                                                    >> 1U) 
                                                   & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg4))))));
        tracep->fullBit(oldp+11,(vlTOPp->top__DOT__dut__DOT__P_stg6));
        tracep->fullBit(oldp+12,(vlTOPp->top__DOT__dut__DOT__G_stg6));
        tracep->fullCData(oldp+13,(vlTOPp->top__DOT__dut__DOT__P_stg7),3);
        tracep->fullCData(oldp+14,(vlTOPp->top__DOT__dut__DOT__G_stg7),3);
        tracep->fullCData(oldp+15,(vlTOPp->top__DOT__dut__DOT__P_stg8),8);
        tracep->fullCData(oldp+16,(vlTOPp->top__DOT__dut__DOT__G_stg8),8);
        tracep->fullSData(oldp+17,(vlTOPp->top__DOT__dut__DOT__C),16);
        tracep->fullCData(oldp+18,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage6_dot__P_i),2);
        tracep->fullCData(oldp+19,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage6_dot__G_i),2);
        tracep->fullCData(oldp+20,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot1__P_i),2);
        tracep->fullCData(oldp+21,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot1__G_i),2);
        tracep->fullBit(oldp+22,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot1__P_i) 
                                         >> 1U) & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot1__P_i)))));
        tracep->fullBit(oldp+23,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot1__G_i) 
                                         >> 1U) | (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot1__P_i) 
                                                    >> 1U) 
                                                   & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot1__G_i))))));
        tracep->fullCData(oldp+24,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot2__P_i),2);
        tracep->fullCData(oldp+25,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot2__G_i),2);
        tracep->fullBit(oldp+26,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot2__P_i) 
                                         >> 1U) & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot2__P_i)))));
        tracep->fullBit(oldp+27,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot2__G_i) 
                                         >> 1U) | (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot2__P_i) 
                                                    >> 1U) 
                                                   & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot2__G_i))))));
        tracep->fullCData(oldp+28,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot3__P_i),2);
        tracep->fullCData(oldp+29,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot3__G_i),2);
        tracep->fullBit(oldp+30,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot3__P_i) 
                                         >> 1U) & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot3__P_i)))));
        tracep->fullBit(oldp+31,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot3__G_i) 
                                         >> 1U) | (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot3__P_i) 
                                                    >> 1U) 
                                                   & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage7_dot3__G_i))))));
        tracep->fullCData(oldp+32,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot2__P_i),2);
        tracep->fullCData(oldp+33,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot2__G_i),2);
        tracep->fullBit(oldp+34,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot2__P_i) 
                                         >> 1U) & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot2__P_i)))));
        tracep->fullBit(oldp+35,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot2__G_i) 
                                         >> 1U) | (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot2__P_i) 
                                                    >> 1U) 
                                                   & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot2__G_i))))));
        tracep->fullCData(oldp+36,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot3__P_i),2);
        tracep->fullCData(oldp+37,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot3__G_i),2);
        tracep->fullBit(oldp+38,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot3__P_i) 
                                         >> 1U) & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot3__P_i)))));
        tracep->fullBit(oldp+39,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot3__G_i) 
                                         >> 1U) | (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot3__P_i) 
                                                    >> 1U) 
                                                   & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot3__G_i))))));
        tracep->fullCData(oldp+40,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot4__P_i),2);
        tracep->fullCData(oldp+41,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot4__G_i),2);
        tracep->fullBit(oldp+42,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot4__P_i) 
                                         >> 1U) & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot4__P_i)))));
        tracep->fullBit(oldp+43,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot4__G_i) 
                                         >> 1U) | (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot4__P_i) 
                                                    >> 1U) 
                                                   & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot4__G_i))))));
        tracep->fullCData(oldp+44,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot5__P_i),2);
        tracep->fullCData(oldp+45,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot5__G_i),2);
        tracep->fullBit(oldp+46,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot5__P_i) 
                                         >> 1U) & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot5__P_i)))));
        tracep->fullBit(oldp+47,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot5__G_i) 
                                         >> 1U) | (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot5__P_i) 
                                                    >> 1U) 
                                                   & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot5__G_i))))));
        tracep->fullCData(oldp+48,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot6__P_i),2);
        tracep->fullCData(oldp+49,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot6__G_i),2);
        tracep->fullBit(oldp+50,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot6__P_i) 
                                         >> 1U) & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot6__P_i)))));
        tracep->fullBit(oldp+51,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot6__G_i) 
                                         >> 1U) | (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot6__P_i) 
                                                    >> 1U) 
                                                   & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot6__G_i))))));
        tracep->fullCData(oldp+52,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot7__P_i),2);
        tracep->fullCData(oldp+53,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot7__G_i),2);
        tracep->fullBit(oldp+54,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot7__P_i) 
                                         >> 1U) & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot7__P_i)))));
        tracep->fullBit(oldp+55,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot7__G_i) 
                                         >> 1U) | (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot7__P_i) 
                                                    >> 1U) 
                                                   & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot7__G_i))))));
        tracep->fullCData(oldp+56,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot8__P_i),2);
        tracep->fullCData(oldp+57,(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot8__G_i),2);
        tracep->fullBit(oldp+58,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot8__P_i) 
                                         >> 1U) & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot8__P_i)))));
        tracep->fullBit(oldp+59,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot8__G_i) 
                                         >> 1U) | (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot8__P_i) 
                                                    >> 1U) 
                                                   & (IData)(vlTOPp->top__DOT__dut__DOT____Vcellinp__stage8_dot8__G_i))))));
        tracep->fullCData(oldp+60,((3U & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg1))),2);
        tracep->fullCData(oldp+61,((3U & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg1))),2);
        tracep->fullBit(oldp+62,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                         >> 1U) & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg1)))));
        tracep->fullBit(oldp+63,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                         >> 1U) | (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                                    >> 1U) 
                                                   & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg1))))));
        tracep->fullCData(oldp+64,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                          >> 2U))),2);
        tracep->fullCData(oldp+65,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                          >> 2U))),2);
        tracep->fullBit(oldp+66,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                         >> 3U) & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                                   >> 2U)))));
        tracep->fullBit(oldp+67,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                         >> 3U) | (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                                    >> 3U) 
                                                   & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                                      >> 2U))))));
        tracep->fullCData(oldp+68,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                          >> 4U))),2);
        tracep->fullCData(oldp+69,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                          >> 4U))),2);
        tracep->fullBit(oldp+70,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                         >> 5U) & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                                   >> 4U)))));
        tracep->fullBit(oldp+71,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                         >> 5U) | (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                                    >> 5U) 
                                                   & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                                      >> 4U))))));
        tracep->fullCData(oldp+72,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                          >> 6U))),2);
        tracep->fullCData(oldp+73,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                          >> 6U))),2);
        tracep->fullBit(oldp+74,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                         >> 7U) & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                                   >> 6U)))));
        tracep->fullBit(oldp+75,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                         >> 7U) | (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                                    >> 7U) 
                                                   & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                                      >> 6U))))));
        tracep->fullCData(oldp+76,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                          >> 8U))),2);
        tracep->fullCData(oldp+77,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                          >> 8U))),2);
        tracep->fullBit(oldp+78,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                         >> 9U) & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                                   >> 8U)))));
        tracep->fullBit(oldp+79,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                         >> 9U) | (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                                    >> 9U) 
                                                   & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                                      >> 8U))))));
        tracep->fullCData(oldp+80,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                          >> 0xaU))),2);
        tracep->fullCData(oldp+81,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                          >> 0xaU))),2);
        tracep->fullBit(oldp+82,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                         >> 0xbU) & 
                                        ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                         >> 0xaU)))));
        tracep->fullBit(oldp+83,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                         >> 0xbU) | 
                                        (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                          >> 0xbU) 
                                         & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                            >> 0xaU))))));
        tracep->fullCData(oldp+84,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                          >> 0xcU))),2);
        tracep->fullCData(oldp+85,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                          >> 0xcU))),2);
        tracep->fullBit(oldp+86,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                         >> 0xdU) & 
                                        ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                         >> 0xcU)))));
        tracep->fullBit(oldp+87,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                         >> 0xdU) | 
                                        (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                          >> 0xdU) 
                                         & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                            >> 0xcU))))));
        tracep->fullCData(oldp+88,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                          >> 0xeU))),2);
        tracep->fullCData(oldp+89,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                          >> 0xeU))),2);
        tracep->fullBit(oldp+90,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                         >> 0xfU) & 
                                        ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                         >> 0xeU)))));
        tracep->fullBit(oldp+91,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                         >> 0xfU) | 
                                        (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg1) 
                                          >> 0xfU) 
                                         & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg1) 
                                            >> 0xeU))))));
        tracep->fullCData(oldp+92,((3U & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg2))),2);
        tracep->fullCData(oldp+93,((3U & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg2))),2);
        tracep->fullBit(oldp+94,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg2) 
                                         >> 1U) & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg2)))));
        tracep->fullBit(oldp+95,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__G_stg2) 
                                         >> 1U) | (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg2) 
                                                    >> 1U) 
                                                   & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg2))))));
        tracep->fullCData(oldp+96,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg2) 
                                          >> 2U))),2);
        tracep->fullCData(oldp+97,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg2) 
                                          >> 2U))),2);
        tracep->fullBit(oldp+98,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg2) 
                                         >> 3U) & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg2) 
                                                   >> 2U)))));
        tracep->fullBit(oldp+99,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__G_stg2) 
                                         >> 3U) | (
                                                   ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg2) 
                                                    >> 3U) 
                                                   & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg2) 
                                                      >> 2U))))));
        tracep->fullCData(oldp+100,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg2) 
                                           >> 4U))),2);
        tracep->fullCData(oldp+101,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg2) 
                                           >> 4U))),2);
        tracep->fullBit(oldp+102,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg2) 
                                          >> 5U) & 
                                         ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg2) 
                                          >> 4U)))));
        tracep->fullBit(oldp+103,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__G_stg2) 
                                          >> 5U) | 
                                         (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg2) 
                                           >> 5U) & 
                                          ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg2) 
                                           >> 4U))))));
        tracep->fullCData(oldp+104,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg2) 
                                           >> 6U))),2);
        tracep->fullCData(oldp+105,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg2) 
                                           >> 6U))),2);
        tracep->fullBit(oldp+106,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg2) 
                                          >> 7U) & 
                                         ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg2) 
                                          >> 6U)))));
        tracep->fullBit(oldp+107,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__G_stg2) 
                                          >> 7U) | 
                                         (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg2) 
                                           >> 7U) & 
                                          ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg2) 
                                           >> 6U))))));
        tracep->fullCData(oldp+108,((3U & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg3))),2);
        tracep->fullCData(oldp+109,((3U & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg3))),2);
        tracep->fullBit(oldp+110,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg3) 
                                          >> 1U) & (IData)(vlTOPp->top__DOT__dut__DOT__P_stg3)))));
        tracep->fullBit(oldp+111,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__G_stg3) 
                                          >> 1U) | 
                                         (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg3) 
                                           >> 1U) & (IData)(vlTOPp->top__DOT__dut__DOT__G_stg3))))));
        tracep->fullCData(oldp+112,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg3) 
                                           >> 2U))),2);
        tracep->fullCData(oldp+113,((3U & ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg3) 
                                           >> 2U))),2);
        tracep->fullBit(oldp+114,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg3) 
                                          >> 3U) & 
                                         ((IData)(vlTOPp->top__DOT__dut__DOT__P_stg3) 
                                          >> 2U)))));
        tracep->fullBit(oldp+115,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__G_stg3) 
                                          >> 3U) | 
                                         (((IData)(vlTOPp->top__DOT__dut__DOT__P_stg3) 
                                           >> 3U) & 
                                          ((IData)(vlTOPp->top__DOT__dut__DOT__G_stg3) 
                                           >> 2U))))));
        tracep->fullBit(oldp+116,(vlTOPp->clk_i));
        tracep->fullSData(oldp+117,(vlTOPp->a_i),16);
        tracep->fullSData(oldp+118,(vlTOPp->b_i),16);
        tracep->fullBit(oldp+119,(vlTOPp->carry_i));
        tracep->fullSData(oldp+120,(vlTOPp->sum_o),16);
        tracep->fullBit(oldp+121,(vlTOPp->carry_o));
        tracep->fullIData(oldp+122,(0x20U),32);
    }
}
