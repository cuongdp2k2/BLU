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
        tracep->declBit(c+99,"reset_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+100,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+101,"data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+102,"data2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+103,"zeta_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+104,"data2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+105,"data1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+108,"top DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+109,"top QINV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+110,"top Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+99,"top reset_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+100,"top clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+101,"top data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+102,"top data2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+103,"top zeta_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+104,"top data2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+105,"top data1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+108,"top dut DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+99,"top dut reset_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+100,"top dut clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+101,"top dut data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+102,"top dut data2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+103,"top dut zeta_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+104,"top dut data2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+105,"top dut data1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+106,"top dut data1_intt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+107,"top dut data2_intt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+100,"top dut ntt_comp clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+99,"top dut ntt_comp rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+111,"top dut ntt_comp CT_nGS_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+101,"top dut ntt_comp u_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+102,"top dut ntt_comp t_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+103,"top dut ntt_comp w_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+106,"top dut ntt_comp u_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+107,"top dut ntt_comp t_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1,"top dut ntt_comp u_i_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+2,"top dut ntt_comp t_i_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+3,"top dut ntt_comp w_i_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+4,"top dut ntt_comp u_o_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+5,"top dut ntt_comp t_o_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+6,"top dut ntt_comp u_reduce32",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+7,"top dut ntt_comp t_reduce32",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+8,"top dut ntt_comp w_reduce32",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+9,"top dut ntt_comp u_temp1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+10,"top dut ntt_comp t_temp1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+11,"top dut ntt_comp u_temp2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+12,"top dut ntt_comp t_temp2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+9,"top dut ntt_comp add_reduce",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+10,"top dut ntt_comp sub_reduce",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+13,"top dut ntt_comp mult_reduce",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+13,"top dut ntt_comp t_selected",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+7,"top dut ntt_comp mult_inp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+14,"top dut ntt_comp add2modular",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+15,"top dut ntt_comp sub2modular",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declQuad(c+16,"top dut ntt_comp mult2modular",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+109,"top dut ntt_comp Red_u2Q QINV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+110,"top dut ntt_comp Red_u2Q Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1,"top dut ntt_comp Red_u2Q A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+6,"top dut ntt_comp Red_u2Q A_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+18,"top dut ntt_comp Red_u2Q A_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+109,"top dut ntt_comp Red_u2Q reduce32_comp QINV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+110,"top dut ntt_comp Red_u2Q reduce32_comp Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1,"top dut ntt_comp Red_u2Q reduce32_comp A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+18,"top dut ntt_comp Red_u2Q reduce32_comp A_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+19,"top dut ntt_comp Red_u2Q reduce32_comp t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+20,"top dut ntt_comp Red_u2Q reduce32_comp A_o_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+109,"top dut ntt_comp Red_u2Q caddq_comp QINV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+110,"top dut ntt_comp Red_u2Q caddq_comp Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+18,"top dut ntt_comp Red_u2Q caddq_comp A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+6,"top dut ntt_comp Red_u2Q caddq_comp A_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+109,"top dut ntt_comp Red_t2Q QINV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+110,"top dut ntt_comp Red_t2Q Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+2,"top dut ntt_comp Red_t2Q A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+7,"top dut ntt_comp Red_t2Q A_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+21,"top dut ntt_comp Red_t2Q A_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+109,"top dut ntt_comp Red_t2Q reduce32_comp QINV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+110,"top dut ntt_comp Red_t2Q reduce32_comp Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+2,"top dut ntt_comp Red_t2Q reduce32_comp A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+21,"top dut ntt_comp Red_t2Q reduce32_comp A_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+22,"top dut ntt_comp Red_t2Q reduce32_comp t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+23,"top dut ntt_comp Red_t2Q reduce32_comp A_o_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+109,"top dut ntt_comp Red_t2Q caddq_comp QINV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+110,"top dut ntt_comp Red_t2Q caddq_comp Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+21,"top dut ntt_comp Red_t2Q caddq_comp A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+7,"top dut ntt_comp Red_t2Q caddq_comp A_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+109,"top dut ntt_comp Red_w2Q QINV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+110,"top dut ntt_comp Red_w2Q Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+3,"top dut ntt_comp Red_w2Q A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+8,"top dut ntt_comp Red_w2Q A_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+24,"top dut ntt_comp Red_w2Q A_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+109,"top dut ntt_comp Red_w2Q reduce32_comp QINV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+110,"top dut ntt_comp Red_w2Q reduce32_comp Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+3,"top dut ntt_comp Red_w2Q reduce32_comp A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+24,"top dut ntt_comp Red_w2Q reduce32_comp A_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+25,"top dut ntt_comp Red_w2Q reduce32_comp t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+26,"top dut ntt_comp Red_w2Q reduce32_comp A_o_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+109,"top dut ntt_comp Red_w2Q caddq_comp QINV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+110,"top dut ntt_comp Red_w2Q caddq_comp Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+24,"top dut ntt_comp Red_w2Q caddq_comp A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+8,"top dut ntt_comp Red_w2Q caddq_comp A_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+109,"top dut ntt_comp Add_Modular QINV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+110,"top dut ntt_comp Add_Modular Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+14,"top dut ntt_comp Add_Modular A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+9,"top dut ntt_comp Add_Modular A_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+27,"top dut ntt_comp Add_Modular A_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+109,"top dut ntt_comp Add_Modular reduce32_comp QINV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+110,"top dut ntt_comp Add_Modular reduce32_comp Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+14,"top dut ntt_comp Add_Modular reduce32_comp A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+27,"top dut ntt_comp Add_Modular reduce32_comp A_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+28,"top dut ntt_comp Add_Modular reduce32_comp t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+29,"top dut ntt_comp Add_Modular reduce32_comp A_o_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+109,"top dut ntt_comp Add_Modular caddq_comp QINV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+110,"top dut ntt_comp Add_Modular caddq_comp Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+27,"top dut ntt_comp Add_Modular caddq_comp A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+9,"top dut ntt_comp Add_Modular caddq_comp A_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+109,"top dut ntt_comp Sub_Modular QINV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+110,"top dut ntt_comp Sub_Modular Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+15,"top dut ntt_comp Sub_Modular A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+10,"top dut ntt_comp Sub_Modular A_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+30,"top dut ntt_comp Sub_Modular A_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+109,"top dut ntt_comp Sub_Modular reduce32_comp QINV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+110,"top dut ntt_comp Sub_Modular reduce32_comp Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+15,"top dut ntt_comp Sub_Modular reduce32_comp A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+30,"top dut ntt_comp Sub_Modular reduce32_comp A_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+31,"top dut ntt_comp Sub_Modular reduce32_comp t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+32,"top dut ntt_comp Sub_Modular reduce32_comp A_o_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+109,"top dut ntt_comp Sub_Modular caddq_comp QINV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+110,"top dut ntt_comp Sub_Modular caddq_comp Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+30,"top dut ntt_comp Sub_Modular caddq_comp A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+10,"top dut ntt_comp Sub_Modular caddq_comp A_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+109,"top dut ntt_comp MontModular QINV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+110,"top dut ntt_comp MontModular Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declQuad(c+16,"top dut ntt_comp MontModular A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+13,"top dut ntt_comp MontModular A_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+33,"top dut ntt_comp MontModular a_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+35,"top dut ntt_comp MontModular t_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+109,"top dut ntt_comp Red2u QINV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+110,"top dut ntt_comp Red2u Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declQuad(c+37,"top dut ntt_comp Red2u A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+11,"top dut ntt_comp Red2u A_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+39,"top dut ntt_comp Red2u a_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+41,"top dut ntt_comp Red2u t_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+109,"top dut ntt_comp Red2t QINV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+110,"top dut ntt_comp Red2t Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declQuad(c+43,"top dut ntt_comp Red2t A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+12,"top dut ntt_comp Red2t A_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+45,"top dut ntt_comp Red2t a_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+47,"top dut ntt_comp Red2t t_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+100,"top dut intt_comp clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+99,"top dut intt_comp rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+112,"top dut intt_comp CT_nGS_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+106,"top dut intt_comp u_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+107,"top dut intt_comp t_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+103,"top dut intt_comp w_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+105,"top dut intt_comp u_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+104,"top dut intt_comp t_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+49,"top dut intt_comp u_i_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+50,"top dut intt_comp t_i_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+51,"top dut intt_comp w_i_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+52,"top dut intt_comp u_o_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+53,"top dut intt_comp t_o_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+54,"top dut intt_comp u_reduce32",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+55,"top dut intt_comp t_reduce32",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+56,"top dut intt_comp w_reduce32",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+57,"top dut intt_comp u_temp1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+58,"top dut intt_comp t_temp1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+59,"top dut intt_comp u_temp2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+60,"top dut intt_comp t_temp2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+61,"top dut intt_comp add_reduce",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+62,"top dut intt_comp sub_reduce",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+63,"top dut intt_comp mult_reduce",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+55,"top dut intt_comp t_selected",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+62,"top dut intt_comp mult_inp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+64,"top dut intt_comp add2modular",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+65,"top dut intt_comp sub2modular",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declQuad(c+66,"top dut intt_comp mult2modular",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+109,"top dut intt_comp Red_u2Q QINV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+110,"top dut intt_comp Red_u2Q Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+49,"top dut intt_comp Red_u2Q A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+54,"top dut intt_comp Red_u2Q A_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+68,"top dut intt_comp Red_u2Q A_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+109,"top dut intt_comp Red_u2Q reduce32_comp QINV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+110,"top dut intt_comp Red_u2Q reduce32_comp Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+49,"top dut intt_comp Red_u2Q reduce32_comp A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+68,"top dut intt_comp Red_u2Q reduce32_comp A_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+69,"top dut intt_comp Red_u2Q reduce32_comp t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+70,"top dut intt_comp Red_u2Q reduce32_comp A_o_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+109,"top dut intt_comp Red_u2Q caddq_comp QINV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+110,"top dut intt_comp Red_u2Q caddq_comp Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+68,"top dut intt_comp Red_u2Q caddq_comp A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+54,"top dut intt_comp Red_u2Q caddq_comp A_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+109,"top dut intt_comp Red_t2Q QINV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+110,"top dut intt_comp Red_t2Q Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+50,"top dut intt_comp Red_t2Q A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+55,"top dut intt_comp Red_t2Q A_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+71,"top dut intt_comp Red_t2Q A_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+109,"top dut intt_comp Red_t2Q reduce32_comp QINV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+110,"top dut intt_comp Red_t2Q reduce32_comp Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+50,"top dut intt_comp Red_t2Q reduce32_comp A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+71,"top dut intt_comp Red_t2Q reduce32_comp A_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+72,"top dut intt_comp Red_t2Q reduce32_comp t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+73,"top dut intt_comp Red_t2Q reduce32_comp A_o_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+109,"top dut intt_comp Red_t2Q caddq_comp QINV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+110,"top dut intt_comp Red_t2Q caddq_comp Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+71,"top dut intt_comp Red_t2Q caddq_comp A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+55,"top dut intt_comp Red_t2Q caddq_comp A_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+109,"top dut intt_comp Red_w2Q QINV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+110,"top dut intt_comp Red_w2Q Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+51,"top dut intt_comp Red_w2Q A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+56,"top dut intt_comp Red_w2Q A_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+74,"top dut intt_comp Red_w2Q A_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+109,"top dut intt_comp Red_w2Q reduce32_comp QINV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+110,"top dut intt_comp Red_w2Q reduce32_comp Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+51,"top dut intt_comp Red_w2Q reduce32_comp A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+74,"top dut intt_comp Red_w2Q reduce32_comp A_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+75,"top dut intt_comp Red_w2Q reduce32_comp t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+76,"top dut intt_comp Red_w2Q reduce32_comp A_o_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+109,"top dut intt_comp Red_w2Q caddq_comp QINV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+110,"top dut intt_comp Red_w2Q caddq_comp Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+74,"top dut intt_comp Red_w2Q caddq_comp A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+56,"top dut intt_comp Red_w2Q caddq_comp A_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+109,"top dut intt_comp Add_Modular QINV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+110,"top dut intt_comp Add_Modular Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+64,"top dut intt_comp Add_Modular A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+61,"top dut intt_comp Add_Modular A_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+77,"top dut intt_comp Add_Modular A_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+109,"top dut intt_comp Add_Modular reduce32_comp QINV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+110,"top dut intt_comp Add_Modular reduce32_comp Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+64,"top dut intt_comp Add_Modular reduce32_comp A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+77,"top dut intt_comp Add_Modular reduce32_comp A_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+78,"top dut intt_comp Add_Modular reduce32_comp t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+79,"top dut intt_comp Add_Modular reduce32_comp A_o_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+109,"top dut intt_comp Add_Modular caddq_comp QINV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+110,"top dut intt_comp Add_Modular caddq_comp Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+77,"top dut intt_comp Add_Modular caddq_comp A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+61,"top dut intt_comp Add_Modular caddq_comp A_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+109,"top dut intt_comp Sub_Modular QINV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+110,"top dut intt_comp Sub_Modular Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+65,"top dut intt_comp Sub_Modular A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+62,"top dut intt_comp Sub_Modular A_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+80,"top dut intt_comp Sub_Modular A_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+109,"top dut intt_comp Sub_Modular reduce32_comp QINV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+110,"top dut intt_comp Sub_Modular reduce32_comp Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+65,"top dut intt_comp Sub_Modular reduce32_comp A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+80,"top dut intt_comp Sub_Modular reduce32_comp A_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+81,"top dut intt_comp Sub_Modular reduce32_comp t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+82,"top dut intt_comp Sub_Modular reduce32_comp A_o_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+109,"top dut intt_comp Sub_Modular caddq_comp QINV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+110,"top dut intt_comp Sub_Modular caddq_comp Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+80,"top dut intt_comp Sub_Modular caddq_comp A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+62,"top dut intt_comp Sub_Modular caddq_comp A_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+109,"top dut intt_comp MontModular QINV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+110,"top dut intt_comp MontModular Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declQuad(c+66,"top dut intt_comp MontModular A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+63,"top dut intt_comp MontModular A_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+83,"top dut intt_comp MontModular a_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+85,"top dut intt_comp MontModular t_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+109,"top dut intt_comp Red2u QINV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+110,"top dut intt_comp Red2u Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declQuad(c+87,"top dut intt_comp Red2u A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+59,"top dut intt_comp Red2u A_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+89,"top dut intt_comp Red2u a_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+91,"top dut intt_comp Red2u t_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+109,"top dut intt_comp Red2t QINV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+110,"top dut intt_comp Red2t Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declQuad(c+93,"top dut intt_comp Red2t A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+60,"top dut intt_comp Red2t A_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+95,"top dut intt_comp Red2t a_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+97,"top dut intt_comp Red2t t_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
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
        tracep->fullIData(oldp+1,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u_i_temp),32);
        tracep->fullIData(oldp+2,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t_i_temp),32);
        tracep->fullIData(oldp+3,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w_i_temp),32);
        tracep->fullIData(oldp+4,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u_o_temp),32);
        tracep->fullIData(oldp+5,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t_o_temp),32);
        tracep->fullIData(oldp+6,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u_reduce32),32);
        tracep->fullIData(oldp+7,((vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_t2Q__DOT__A_wire 
                                   + (0x7fe001U & (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_t2Q__DOT__A_wire 
                                                   >> 0x1fU)))),32);
        tracep->fullIData(oldp+8,((vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_w2Q__DOT__A_wire 
                                   + (0x7fe001U & (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_w2Q__DOT__A_wire 
                                                   >> 0x1fU)))),32);
        tracep->fullIData(oldp+9,((vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Add_Modular__DOT__A_wire 
                                   + (0x7fe001U & (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Add_Modular__DOT__A_wire 
                                                   >> 0x1fU)))),32);
        tracep->fullIData(oldp+10,((vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Sub_Modular__DOT__A_wire 
                                    + (0x7fe001U & 
                                       (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Sub_Modular__DOT__A_wire 
                                        >> 0x1fU)))),32);
        tracep->fullIData(oldp+11,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u_temp2),32);
        tracep->fullIData(oldp+12,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t_temp2),32);
        tracep->fullIData(oldp+13,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__mult_reduce),32);
        tracep->fullIData(oldp+14,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__add2modular),32);
        tracep->fullIData(oldp+15,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__sub2modular),32);
        tracep->fullQData(oldp+16,(VL_MULS_QQQ(64,64,64, 
                                               VL_EXTENDS_QI(64,32, 
                                                             (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_t2Q__DOT__A_wire 
                                                              + 
                                                              (0x7fe001U 
                                                               & (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_t2Q__DOT__A_wire 
                                                                  >> 0x1fU)))), 
                                               VL_EXTENDS_QI(64,32, 
                                                             (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_w2Q__DOT__A_wire 
                                                              + 
                                                              (0x7fe001U 
                                                               & (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_w2Q__DOT__A_wire 
                                                                  >> 0x1fU)))))),64);
        tracep->fullIData(oldp+18,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_u2Q__DOT__A_wire),32);
        tracep->fullIData(oldp+19,((((IData)(0x400000U) 
                                     + vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u_i_temp) 
                                    >> 0x17U)),32);
        tracep->fullIData(oldp+20,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_u2Q__DOT__reduce32_comp__DOT__A_o_temp),32);
        tracep->fullIData(oldp+21,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_t2Q__DOT__A_wire),32);
        tracep->fullIData(oldp+22,((((IData)(0x400000U) 
                                     + vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t_i_temp) 
                                    >> 0x17U)),32);
        tracep->fullIData(oldp+23,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_t2Q__DOT__reduce32_comp__DOT__A_o_temp),32);
        tracep->fullIData(oldp+24,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_w2Q__DOT__A_wire),32);
        tracep->fullIData(oldp+25,((((IData)(0x400000U) 
                                     + vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w_i_temp) 
                                    >> 0x17U)),32);
        tracep->fullIData(oldp+26,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_w2Q__DOT__reduce32_comp__DOT__A_o_temp),32);
        tracep->fullIData(oldp+27,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Add_Modular__DOT__A_wire),32);
        tracep->fullIData(oldp+28,((((IData)(0x400000U) 
                                     + vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__add2modular) 
                                    >> 0x17U)),32);
        tracep->fullIData(oldp+29,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Add_Modular__DOT__reduce32_comp__DOT__A_o_temp),32);
        tracep->fullIData(oldp+30,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Sub_Modular__DOT__A_wire),32);
        tracep->fullIData(oldp+31,((((IData)(0x400000U) 
                                     + vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__sub2modular) 
                                    >> 0x17U)),32);
        tracep->fullIData(oldp+32,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Sub_Modular__DOT__reduce32_comp__DOT__A_o_temp),32);
        tracep->fullQData(oldp+33,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__MontModular__DOT__a_temp),64);
        tracep->fullQData(oldp+35,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__MontModular__DOT__t_temp),64);
        tracep->fullQData(oldp+37,(VL_MULS_QQQ(64,64,64, 0xa3faULL, 
                                               VL_EXTENDS_QI(64,32, 
                                                             (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Add_Modular__DOT__A_wire 
                                                              + 
                                                              (0x7fe001U 
                                                               & (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Add_Modular__DOT__A_wire 
                                                                  >> 0x1fU)))))),64);
        tracep->fullQData(oldp+39,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red2u__DOT__a_temp),64);
        tracep->fullQData(oldp+41,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red2u__DOT__t_temp),64);
        tracep->fullQData(oldp+43,(VL_MULS_QQQ(64,64,64, 0xa3faULL, 
                                               VL_EXTENDS_QI(64,32, 
                                                             (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Sub_Modular__DOT__A_wire 
                                                              + 
                                                              (0x7fe001U 
                                                               & (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Sub_Modular__DOT__A_wire 
                                                                  >> 0x1fU)))))),64);
        tracep->fullQData(oldp+45,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red2t__DOT__a_temp),64);
        tracep->fullQData(oldp+47,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red2t__DOT__t_temp),64);
        tracep->fullIData(oldp+49,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u_i_temp),32);
        tracep->fullIData(oldp+50,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t_i_temp),32);
        tracep->fullIData(oldp+51,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w_i_temp),32);
        tracep->fullIData(oldp+52,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u_o_temp),32);
        tracep->fullIData(oldp+53,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t_o_temp),32);
        tracep->fullIData(oldp+54,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u_reduce32),32);
        tracep->fullIData(oldp+55,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t_reduce32),32);
        tracep->fullIData(oldp+56,((vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_w2Q__DOT__A_wire 
                                    + (0x7fe001U & 
                                       (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_w2Q__DOT__A_wire 
                                        >> 0x1fU)))),32);
        tracep->fullIData(oldp+57,(((vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Add_Modular__DOT__A_wire 
                                     + (0x7fe001U & 
                                        (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Add_Modular__DOT__A_wire 
                                         >> 0x1fU))) 
                                    >> 1U)),32);
        tracep->fullIData(oldp+58,((vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__sub_reduce 
                                    >> 1U)),32);
        tracep->fullIData(oldp+59,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u_temp2),32);
        tracep->fullIData(oldp+60,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t_temp2),32);
        tracep->fullIData(oldp+61,((vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Add_Modular__DOT__A_wire 
                                    + (0x7fe001U & 
                                       (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Add_Modular__DOT__A_wire 
                                        >> 0x1fU)))),32);
        tracep->fullIData(oldp+62,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__sub_reduce),32);
        tracep->fullIData(oldp+63,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__mult_reduce),32);
        tracep->fullIData(oldp+64,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__add2modular),32);
        tracep->fullIData(oldp+65,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__sub2modular),32);
        tracep->fullQData(oldp+66,(VL_MULS_QQQ(64,64,64, 
                                               VL_EXTENDS_QI(64,32, vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__sub_reduce), 
                                               VL_EXTENDS_QI(64,32, 
                                                             (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_w2Q__DOT__A_wire 
                                                              + 
                                                              (0x7fe001U 
                                                               & (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_w2Q__DOT__A_wire 
                                                                  >> 0x1fU)))))),64);
        tracep->fullIData(oldp+68,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_u2Q__DOT__A_wire),32);
        tracep->fullIData(oldp+69,((((IData)(0x400000U) 
                                     + vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u_i_temp) 
                                    >> 0x17U)),32);
        tracep->fullIData(oldp+70,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_u2Q__DOT__reduce32_comp__DOT__A_o_temp),32);
        tracep->fullIData(oldp+71,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_t2Q__DOT__A_wire),32);
        tracep->fullIData(oldp+72,((((IData)(0x400000U) 
                                     + vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t_i_temp) 
                                    >> 0x17U)),32);
        tracep->fullIData(oldp+73,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_t2Q__DOT__reduce32_comp__DOT__A_o_temp),32);
        tracep->fullIData(oldp+74,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_w2Q__DOT__A_wire),32);
        tracep->fullIData(oldp+75,((((IData)(0x400000U) 
                                     + vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w_i_temp) 
                                    >> 0x17U)),32);
        tracep->fullIData(oldp+76,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_w2Q__DOT__reduce32_comp__DOT__A_o_temp),32);
        tracep->fullIData(oldp+77,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Add_Modular__DOT__A_wire),32);
        tracep->fullIData(oldp+78,((((IData)(0x400000U) 
                                     + vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__add2modular) 
                                    >> 0x17U)),32);
        tracep->fullIData(oldp+79,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Add_Modular__DOT__reduce32_comp__DOT__A_o_temp),32);
        tracep->fullIData(oldp+80,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Sub_Modular__DOT__A_wire),32);
        tracep->fullIData(oldp+81,((((IData)(0x400000U) 
                                     + vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__sub2modular) 
                                    >> 0x17U)),32);
        tracep->fullIData(oldp+82,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Sub_Modular__DOT__reduce32_comp__DOT__A_o_temp),32);
        tracep->fullQData(oldp+83,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__MontModular__DOT__a_temp),64);
        tracep->fullQData(oldp+85,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__MontModular__DOT__t_temp),64);
        tracep->fullQData(oldp+87,(VL_MULS_QQQ(64,64,64, 0xa3faULL, 
                                               VL_EXTENDS_QI(64,32, 
                                                             ((vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Add_Modular__DOT__A_wire 
                                                               + 
                                                               (0x7fe001U 
                                                                & (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Add_Modular__DOT__A_wire 
                                                                   >> 0x1fU))) 
                                                              >> 1U)))),64);
        tracep->fullQData(oldp+89,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red2u__DOT__a_temp),64);
        tracep->fullQData(oldp+91,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red2u__DOT__t_temp),64);
        tracep->fullQData(oldp+93,(VL_MULS_QQQ(64,64,64, 0xa3faULL, 
                                               VL_EXTENDS_QI(64,32, 
                                                             (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__sub_reduce 
                                                              >> 1U)))),64);
        tracep->fullQData(oldp+95,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red2t__DOT__a_temp),64);
        tracep->fullQData(oldp+97,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red2t__DOT__t_temp),64);
        tracep->fullBit(oldp+99,(vlTOPp->reset_ni));
        tracep->fullBit(oldp+100,(vlTOPp->clk_i));
        tracep->fullIData(oldp+101,(vlTOPp->data1_i),32);
        tracep->fullIData(oldp+102,(vlTOPp->data2_i),32);
        tracep->fullIData(oldp+103,(vlTOPp->zeta_i),32);
        tracep->fullIData(oldp+104,(vlTOPp->data2_o),32);
        tracep->fullIData(oldp+105,(vlTOPp->data1_o),32);
        tracep->fullIData(oldp+106,(((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u_o_temp
                                      : 0U)),32);
        tracep->fullIData(oldp+107,(((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t_o_temp
                                      : 0U)),32);
        tracep->fullIData(oldp+108,(0x20U),32);
        tracep->fullIData(oldp+109,(0x3802001U),32);
        tracep->fullIData(oldp+110,(0x7fe001U),32);
        tracep->fullBit(oldp+111,(0U));
        tracep->fullBit(oldp+112,(1U));
    }
}
