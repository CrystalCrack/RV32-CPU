// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vnpc__Syms.h"


VL_ATTR_COLD void Vnpc___024root__trace_init_sub__TOP__0(Vnpc___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root__trace_init_sub__TOP__0\n"); );
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+235,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("npc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+235,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+10,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+11,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+12,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+14,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+15,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+16,0,"ALU_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+17,0,"rdregsrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+18,0,"cmp_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+19,0,"ALUsrc1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"ALUsrc2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"rf_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"rf_rdata1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"rf_rdata2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"rf_raddr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+10,0,"rf_raddr2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+27,0,"ALU_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"ALU_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"ALU_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+238,0,"ALU_Cin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"ALU_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"ALU_overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"ALU_Cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"equal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"signed_less",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"unsigned_less",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"stop_sim",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+200,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+201,0,"snpc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+36,0,"dir_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"branch_judge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+237,0,"ivalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"draddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"dwaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"dwdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"dwmask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+40,0,"drdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+41,0,"dvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"dwen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"drdata_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"cmp_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("data_mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+27,0,"raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"wmask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+42,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("idu_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+38,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+10,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+11,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+13,0,"funct3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+14,0,"funct7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+15,0,"opcode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+12,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"ALU_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+17,0,"rdregsrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+19,0,"ALUsrc1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"ALUsrc2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"jump",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"cmp_type",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+39,0,"dwmask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+42,0,"dwen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"dvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"stop_sim",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+239,0,"NUM_OF_INST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"inst_name",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+46,0,"inst_is_addi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"inst_is_ebreak",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"inst_is_auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"inst_is_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"inst_is_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"inst_is_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"inst_is_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"inst_is_lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"inst_is_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"inst_is_beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"inst_is_sltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"inst_is_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"inst_is_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"inst_is_sltiu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"inst_is_bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"inst_is_lbu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"inst_is_sb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"inst_is_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"inst_is_srai",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"inst_is_andi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"inst_is_sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"inst_is_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"inst_is_sh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"inst_is_xori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"inst_is_bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"inst_is_bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"inst_is_slli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"inst_is_blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"inst_is_bltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"inst_is_slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"inst_is_lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"inst_is_lhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"inst_is_srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"inst_is_srli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"inst_is_sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"inst_is_lb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"inst_is_slti",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"inst_is_ori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"immI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"immU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"immS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"immB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"immJ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("getALU_mode", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+239,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+240,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+241,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+45,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+242,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+243,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 350,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+239,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+240,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+241,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+254,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+45,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+242,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+243,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 350,0);
    tracep->declBus(c+255,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+90,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+256,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("getALUsrc1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+239,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+240,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+254,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+45,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+257,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declArray(c+258,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 272,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+239,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+240,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+254,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+254,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+45,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+257,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declArray(c+258,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 272,0);
    tracep->declBus(c+267,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+92,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+256,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("getALUsrc2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+239,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+240,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+254,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+45,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+268,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declArray(c+269,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 272,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+239,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+240,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+254,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+254,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+45,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+268,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declArray(c+269,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 272,0);
    tracep->declBus(c+267,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+94,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+256,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("getimm", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+239,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+240,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+278,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+279,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+95,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1481,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+239,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+240,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+278,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+254,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+279,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+95,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1481,0);
    tracep->declBus(c+280,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+143,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+256,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("getrdregsrc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+239,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+240,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+241,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+45,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+242,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+281,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 350,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+239,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+240,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+241,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+254,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+45,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+242,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+281,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 350,0);
    tracep->declBus(c+255,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+145,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+256,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("inst_mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+200,0,"raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+292,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+292,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+293,0,"wmask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+257,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_ALU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+16,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+28,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+238,0,"Cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"Cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+146,0,"add_overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"sub_overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"add_Cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"sub_Cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+150,0,"add_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"sub_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+152,0,"out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("adder_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+28,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+238,0,"Cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+150,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+148,0,"Cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("sub_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+28,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+154,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+268,0,"Cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+151,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+149,0,"Cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_MuxKeyWithDefault", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+294,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+241,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+295,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+152,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+16,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+296,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declArray(c+155,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 287,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+294,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+241,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+295,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+254,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+152,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+16,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+296,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declArray(c+155,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 287,0);
    tracep->declBus(c+298,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+164+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 35,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+180+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 32,0);
    }
    tracep->popPrefix();
    tracep->declQuad(c+196,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+198,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+299,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_PC", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+235,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"jump",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"ALU_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+200,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+201,0,"snpc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+199,0,"dnpc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_RegisterFile", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+300,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+278,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+235,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+23,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"raddr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+10,0,"raddr2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+25,0,"rdata1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"rdata2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+268,0,"ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("rf", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+202+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+234,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vnpc___024root__trace_init_top(Vnpc___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root__trace_init_top\n"); );
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vnpc___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vnpc___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vnpc___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vnpc___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vnpc___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vnpc___024root__trace_register(Vnpc___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root__trace_register\n"); );
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vnpc___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vnpc___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vnpc___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vnpc___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vnpc___024root__trace_const_0_sub_0(Vnpc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vnpc___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root__trace_const_0\n"); );
    // Init
    Vnpc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnpc___024root*>(voidSelf);
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vnpc___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<11>/*351:0*/ Vnpc__ConstPool__CONST_h46b0c1f5_0;
extern const VlWide<9>/*287:0*/ Vnpc__ConstPool__CONST_h795614a2_0;
extern const VlWide<9>/*287:0*/ Vnpc__ConstPool__CONST_he327770b_0;
extern const VlWide<11>/*351:0*/ Vnpc__ConstPool__CONST_h331353ab_0;

VL_ATTR_COLD void Vnpc___024root__trace_const_0_sub_0(Vnpc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root__trace_const_0_sub_0\n"); );
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+238,(vlSelfRef.npc__DOT__ALU_Cin));
    bufp->fullIData(oldp+239,(0x27U),32);
    bufp->fullIData(oldp+240,(6U),32);
    bufp->fullIData(oldp+241,(3U),32);
    bufp->fullCData(oldp+242,(0U),3);
    bufp->fullWData(oldp+243,(Vnpc__ConstPool__CONST_h46b0c1f5_0),351);
    bufp->fullIData(oldp+254,(1U),32);
    bufp->fullIData(oldp+255,(9U),32);
    bufp->fullIData(oldp+256,(0x27U),32);
    bufp->fullBit(oldp+257,(0U));
    bufp->fullWData(oldp+258,(Vnpc__ConstPool__CONST_h795614a2_0),273);
    bufp->fullIData(oldp+267,(7U),32);
    bufp->fullBit(oldp+268,(1U));
    bufp->fullWData(oldp+269,(Vnpc__ConstPool__CONST_he327770b_0),273);
    bufp->fullIData(oldp+278,(0x20U),32);
    bufp->fullIData(oldp+279,(1U),32);
    bufp->fullIData(oldp+280,(0x26U),32);
    bufp->fullWData(oldp+281,(Vnpc__ConstPool__CONST_h331353ab_0),351);
    bufp->fullIData(oldp+292,(0U),32);
    bufp->fullCData(oldp+293,(0U),8);
    bufp->fullIData(oldp+294,(8U),32);
    bufp->fullIData(oldp+295,(0x21U),32);
    bufp->fullQData(oldp+296,(0ULL),33);
    bufp->fullIData(oldp+298,(0x24U),32);
    bufp->fullIData(oldp+299,(8U),32);
    bufp->fullIData(oldp+300,(5U),32);
}

VL_ATTR_COLD void Vnpc___024root__trace_full_0_sub_0(Vnpc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vnpc___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root__trace_full_0\n"); );
    // Init
    Vnpc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnpc___024root*>(voidSelf);
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vnpc___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vnpc___024root__trace_full_0_sub_0(Vnpc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root__trace_full_0_sub_0\n"); );
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<9>/*287:0*/ __Vtemp_7;
    VlWide<9>/*287:0*/ __Vtemp_8;
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+2,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+3,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+4,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+5,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+6,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+7,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[6]),3);
    bufp->fullCData(oldp+8,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[7]),3);
    bufp->fullCData(oldp+9,(vlSelfRef.npc__DOT__rs1),5);
    bufp->fullCData(oldp+10,((0x1fU & (vlSelfRef.npc__DOT__inst 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+11,(((IData)(vlSelfRef.npc__DOT__stop_sim)
                               ? 0xaU : (0x1fU & (vlSelfRef.npc__DOT__inst 
                                                  >> 7U)))),5);
    bufp->fullIData(oldp+12,(vlSelfRef.npc__DOT__imm),32);
    bufp->fullCData(oldp+13,((7U & (vlSelfRef.npc__DOT__inst 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+14,((vlSelfRef.npc__DOT__inst 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+15,((0x7fU & vlSelfRef.npc__DOT__inst)),7);
    bufp->fullCData(oldp+16,(vlSelfRef.npc__DOT__ALU_op),3);
    bufp->fullCData(oldp+17,(vlSelfRef.npc__DOT__rdregsrc),3);
    bufp->fullCData(oldp+18,(vlSelfRef.npc__DOT__cmp_type),2);
    bufp->fullBit(oldp+19,(vlSelfRef.npc__DOT__ALUsrc1));
    bufp->fullBit(oldp+20,(vlSelfRef.npc__DOT__ALUsrc2));
    bufp->fullBit(oldp+21,(((0x6fU == (0x7fU & vlSelfRef.npc__DOT__inst)) 
                            | (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_jalr))));
    bufp->fullBit(oldp+22,(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_beq) 
                            | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bne) 
                               | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bge) 
                                  | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bgeu) 
                                     | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_blt) 
                                        | (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bltu))))))));
    bufp->fullBit(oldp+23,((4U != (IData)(vlSelfRef.npc__DOT__rdregsrc))));
    bufp->fullIData(oldp+24,(((0U == (IData)(vlSelfRef.npc__DOT__rdregsrc))
                               ? (IData)(vlSelfRef.npc__DOT__u_ALU__DOT__out)
                               : ((1U == (IData)(vlSelfRef.npc__DOT__rdregsrc))
                                   ? ((0U == (7U & 
                                              (vlSelfRef.npc__DOT__inst 
                                               >> 0xcU)))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.npc__DOT__drdata 
                                                          >> 7U)))) 
                                           << 8U) | 
                                          (0xffU & vlSelfRef.npc__DOT__drdata))
                                       : ((4U == (7U 
                                                  & (vlSelfRef.npc__DOT__inst 
                                                     >> 0xcU)))
                                           ? (0xffU 
                                              & vlSelfRef.npc__DOT__drdata)
                                           : ((1U == 
                                               (7U 
                                                & (vlSelfRef.npc__DOT__inst 
                                                   >> 0xcU)))
                                               ? ((
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.npc__DOT__drdata 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelfRef.npc__DOT__drdata))
                                               : ((5U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.npc__DOT__inst 
                                                       >> 0xcU)))
                                                   ? 
                                                  (0xffffU 
                                                   & vlSelfRef.npc__DOT__drdata)
                                                   : vlSelfRef.npc__DOT__drdata))))
                                   : ((2U == (IData)(vlSelfRef.npc__DOT__rdregsrc))
                                       ? ((IData)(4U) 
                                          + vlSelfRef.npc__DOT__pc)
                                       : ((3U == (IData)(vlSelfRef.npc__DOT__rdregsrc))
                                           ? ((0U == (IData)(vlSelfRef.npc__DOT__cmp_type))
                                               ? (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != (IData)(vlSelfRef.npc__DOT__u_ALU__DOT__out)))))
                                               : ((1U 
                                                   == (IData)(vlSelfRef.npc__DOT__cmp_type))
                                                   ? 
                                                  (0U 
                                                   != (IData)(vlSelfRef.npc__DOT__u_ALU__DOT__out))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.npc__DOT__cmp_type))
                                                    ? 
                                                   (1U 
                                                    & ((IData)(
                                                               (0x80000000ULL 
                                                                == 
                                                                (0x180000000ULL 
                                                                 & vlSelfRef.npc__DOT__u_ALU__DOT__out))) 
                                                       | (IData)(
                                                                 (0x100000000ULL 
                                                                  == 
                                                                  (0x180000000ULL 
                                                                   & vlSelfRef.npc__DOT__u_ALU__DOT__out)))))
                                                    : 
                                                   (1U 
                                                    & (~ 
                                                       ((0U 
                                                         == (IData)(vlSelfRef.npc__DOT__ALU_op))
                                                         ? (IData)(
                                                                   (1ULL 
                                                                    & (((QData)((IData)(vlSelfRef.npc__DOT__ALU_A)) 
                                                                        + 
                                                                        ((QData)((IData)(vlSelfRef.npc__DOT__ALU_B)) 
                                                                         + (QData)((IData)(vlSelfRef.npc__DOT__ALU_Cin)))) 
                                                                       >> 0x20U)))
                                                         : 
                                                        ((1U 
                                                          == (IData)(vlSelfRef.npc__DOT__ALU_op)) 
                                                         & (IData)(
                                                                   (1ULL 
                                                                    & ((1ULL 
                                                                        + 
                                                                        ((QData)((IData)(vlSelfRef.npc__DOT__ALU_A)) 
                                                                         + (QData)((IData)(
                                                                                (~ vlSelfRef.npc__DOT__ALU_B))))) 
                                                                       >> 0x20U))))))))))
                                           : 0U))))),32);
    bufp->fullIData(oldp+25,(vlSelfRef.npc__DOT__rf_rdata1),32);
    bufp->fullIData(oldp+26,(vlSelfRef.npc__DOT__rf_rdata2),32);
    bufp->fullIData(oldp+27,((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__out)),32);
    bufp->fullIData(oldp+28,(vlSelfRef.npc__DOT__ALU_A),32);
    bufp->fullIData(oldp+29,(vlSelfRef.npc__DOT__ALU_B),32);
    bufp->fullBit(oldp+30,((1U & (~ (IData)((0U != (IData)(vlSelfRef.npc__DOT__u_ALU__DOT__out)))))));
    bufp->fullBit(oldp+31,((1U & (IData)((vlSelfRef.npc__DOT__u_ALU__DOT__out 
                                          >> 0x20U)))));
    bufp->fullBit(oldp+32,((1U & ((0U == (IData)(vlSelfRef.npc__DOT__ALU_op))
                                   ? (IData)((1ULL 
                                              & (((QData)((IData)(vlSelfRef.npc__DOT__ALU_A)) 
                                                  + 
                                                  ((QData)((IData)(vlSelfRef.npc__DOT__ALU_B)) 
                                                   + (QData)((IData)(vlSelfRef.npc__DOT__ALU_Cin)))) 
                                                 >> 0x20U)))
                                   : ((1U == (IData)(vlSelfRef.npc__DOT__ALU_op)) 
                                      & (IData)((1ULL 
                                                 & ((1ULL 
                                                     + 
                                                     ((QData)((IData)(vlSelfRef.npc__DOT__ALU_A)) 
                                                      + (QData)((IData)(
                                                                        (~ vlSelfRef.npc__DOT__ALU_B))))) 
                                                    >> 0x20U))))))));
    bufp->fullBit(oldp+33,((1U & ((IData)((0x80000000ULL 
                                           == (0x180000000ULL 
                                               & vlSelfRef.npc__DOT__u_ALU__DOT__out))) 
                                  | (IData)((0x100000000ULL 
                                             == (0x180000000ULL 
                                                 & vlSelfRef.npc__DOT__u_ALU__DOT__out)))))));
    bufp->fullBit(oldp+34,((1U & (~ ((0U == (IData)(vlSelfRef.npc__DOT__ALU_op))
                                      ? (IData)((1ULL 
                                                 & (((QData)((IData)(vlSelfRef.npc__DOT__ALU_A)) 
                                                     + 
                                                     ((QData)((IData)(vlSelfRef.npc__DOT__ALU_B)) 
                                                      + (QData)((IData)(vlSelfRef.npc__DOT__ALU_Cin)))) 
                                                    >> 0x20U)))
                                      : ((1U == (IData)(vlSelfRef.npc__DOT__ALU_op)) 
                                         & (IData)(
                                                   (1ULL 
                                                    & ((1ULL 
                                                        + 
                                                        ((QData)((IData)(vlSelfRef.npc__DOT__ALU_A)) 
                                                         + (QData)((IData)(
                                                                           (~ vlSelfRef.npc__DOT__ALU_B))))) 
                                                       >> 0x20U)))))))));
    bufp->fullBit(oldp+35,(vlSelfRef.npc__DOT__stop_sim));
    bufp->fullBit(oldp+36,((((0x6fU == (0x7fU & vlSelfRef.npc__DOT__inst)) 
                             | (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_jalr)) 
                            | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_beq) 
                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bne) 
                                   | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bge) 
                                      | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bgeu) 
                                         | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_blt) 
                                            | (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bltu)))))) 
                               & ((0U == (7U & (vlSelfRef.npc__DOT__inst 
                                                >> 0xcU)))
                                   ? (vlSelfRef.npc__DOT__rf_rdata1 
                                      == vlSelfRef.npc__DOT__rf_rdata2)
                                   : ((1U == (7U & 
                                              (vlSelfRef.npc__DOT__inst 
                                               >> 0xcU)))
                                       ? (vlSelfRef.npc__DOT__rf_rdata1 
                                          != vlSelfRef.npc__DOT__rf_rdata2)
                                       : ((5U == (7U 
                                                  & (vlSelfRef.npc__DOT__inst 
                                                     >> 0xcU)))
                                           ? VL_GTES_III(32, vlSelfRef.npc__DOT__rf_rdata1, vlSelfRef.npc__DOT__rf_rdata2)
                                           : ((7U == 
                                               (7U 
                                                & (vlSelfRef.npc__DOT__inst 
                                                   >> 0xcU)))
                                               ? (vlSelfRef.npc__DOT__rf_rdata1 
                                                  >= vlSelfRef.npc__DOT__rf_rdata2)
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.npc__DOT__inst 
                                                       >> 0xcU)))
                                                   ? 
                                                  VL_LTS_III(32, vlSelfRef.npc__DOT__rf_rdata1, vlSelfRef.npc__DOT__rf_rdata2)
                                                   : (IData)(
                                                             ((0x6000U 
                                                               == 
                                                               (0x7000U 
                                                                & vlSelfRef.npc__DOT__inst)) 
                                                              & (vlSelfRef.npc__DOT__rf_rdata1 
                                                                 < vlSelfRef.npc__DOT__rf_rdata2))))))))))));
    bufp->fullBit(oldp+37,((((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_beq) 
                             | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bne) 
                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bge) 
                                   | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bgeu) 
                                      | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_blt) 
                                         | (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bltu)))))) 
                            & ((0U == (7U & (vlSelfRef.npc__DOT__inst 
                                             >> 0xcU)))
                                ? (vlSelfRef.npc__DOT__rf_rdata1 
                                   == vlSelfRef.npc__DOT__rf_rdata2)
                                : ((1U == (7U & (vlSelfRef.npc__DOT__inst 
                                                 >> 0xcU)))
                                    ? (vlSelfRef.npc__DOT__rf_rdata1 
                                       != vlSelfRef.npc__DOT__rf_rdata2)
                                    : ((5U == (7U & 
                                               (vlSelfRef.npc__DOT__inst 
                                                >> 0xcU)))
                                        ? VL_GTES_III(32, vlSelfRef.npc__DOT__rf_rdata1, vlSelfRef.npc__DOT__rf_rdata2)
                                        : ((7U == (7U 
                                                   & (vlSelfRef.npc__DOT__inst 
                                                      >> 0xcU)))
                                            ? (vlSelfRef.npc__DOT__rf_rdata1 
                                               >= vlSelfRef.npc__DOT__rf_rdata2)
                                            : ((4U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.npc__DOT__inst 
                                                    >> 0xcU)))
                                                ? VL_LTS_III(32, vlSelfRef.npc__DOT__rf_rdata1, vlSelfRef.npc__DOT__rf_rdata2)
                                                : (IData)(
                                                          ((0x6000U 
                                                            == 
                                                            (0x7000U 
                                                             & vlSelfRef.npc__DOT__inst)) 
                                                           & (vlSelfRef.npc__DOT__rf_rdata1 
                                                              < vlSelfRef.npc__DOT__rf_rdata2)))))))))));
    bufp->fullIData(oldp+38,(vlSelfRef.npc__DOT__inst),32);
    bufp->fullCData(oldp+39,(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sw)
                               ? 0xfU : ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sb)
                                          ? 1U : ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sh)
                                                   ? 3U
                                                   : 0U)))),8);
    bufp->fullIData(oldp+40,(vlSelfRef.npc__DOT__drdata),32);
    bufp->fullBit(oldp+41,(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sw) 
                            | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lw) 
                               | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lbu) 
                                  | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sb) 
                                     | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sh) 
                                        | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lh) 
                                           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lhu) 
                                              | (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lb))))))))));
    bufp->fullBit(oldp+42,(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sw) 
                            | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sb) 
                               | (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sh)))));
    bufp->fullIData(oldp+43,(((0U == (7U & (vlSelfRef.npc__DOT__inst 
                                            >> 0xcU)))
                               ? (((- (IData)((1U & 
                                               (vlSelfRef.npc__DOT__drdata 
                                                >> 7U)))) 
                                   << 8U) | (0xffU 
                                             & vlSelfRef.npc__DOT__drdata))
                               : ((4U == (7U & (vlSelfRef.npc__DOT__inst 
                                                >> 0xcU)))
                                   ? (0xffU & vlSelfRef.npc__DOT__drdata)
                                   : ((1U == (7U & 
                                              (vlSelfRef.npc__DOT__inst 
                                               >> 0xcU)))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.npc__DOT__drdata 
                                                          >> 0xfU)))) 
                                           << 0x10U) 
                                          | (0xffffU 
                                             & vlSelfRef.npc__DOT__drdata))
                                       : ((5U == (7U 
                                                  & (vlSelfRef.npc__DOT__inst 
                                                     >> 0xcU)))
                                           ? (0xffffU 
                                              & vlSelfRef.npc__DOT__drdata)
                                           : vlSelfRef.npc__DOT__drdata))))),32);
    bufp->fullIData(oldp+44,(((0U == (IData)(vlSelfRef.npc__DOT__cmp_type))
                               ? (1U & (~ (IData)((0U 
                                                   != (IData)(vlSelfRef.npc__DOT__u_ALU__DOT__out)))))
                               : ((1U == (IData)(vlSelfRef.npc__DOT__cmp_type))
                                   ? (0U != (IData)(vlSelfRef.npc__DOT__u_ALU__DOT__out))
                                   : ((2U == (IData)(vlSelfRef.npc__DOT__cmp_type))
                                       ? (1U & ((IData)(
                                                        (0x80000000ULL 
                                                         == 
                                                         (0x180000000ULL 
                                                          & vlSelfRef.npc__DOT__u_ALU__DOT__out))) 
                                                | (IData)(
                                                          (0x100000000ULL 
                                                           == 
                                                           (0x180000000ULL 
                                                            & vlSelfRef.npc__DOT__u_ALU__DOT__out)))))
                                       : (1U & (~ (
                                                   (0U 
                                                    == (IData)(vlSelfRef.npc__DOT__ALU_op))
                                                    ? (IData)(
                                                              (1ULL 
                                                               & (((QData)((IData)(vlSelfRef.npc__DOT__ALU_A)) 
                                                                   + 
                                                                   ((QData)((IData)(vlSelfRef.npc__DOT__ALU_B)) 
                                                                    + (QData)((IData)(vlSelfRef.npc__DOT__ALU_Cin)))) 
                                                                  >> 0x20U)))
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.npc__DOT__ALU_op)) 
                                                    & (IData)(
                                                              (1ULL 
                                                               & ((1ULL 
                                                                   + 
                                                                   ((QData)((IData)(vlSelfRef.npc__DOT__ALU_A)) 
                                                                    + (QData)((IData)(
                                                                                (~ vlSelfRef.npc__DOT__ALU_B))))) 
                                                                  >> 0x20U))))))))))),32);
    bufp->fullCData(oldp+45,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name),6);
    bufp->fullBit(oldp+46,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_addi));
    bufp->fullBit(oldp+47,((0x100073U == vlSelfRef.npc__DOT__inst)));
    bufp->fullBit(oldp+48,((0x17U == (0x7fU & vlSelfRef.npc__DOT__inst))));
    bufp->fullBit(oldp+49,((0x37U == (0x7fU & vlSelfRef.npc__DOT__inst))));
    bufp->fullBit(oldp+50,((0x6fU == (0x7fU & vlSelfRef.npc__DOT__inst))));
    bufp->fullBit(oldp+51,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_jalr));
    bufp->fullBit(oldp+52,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sw));
    bufp->fullBit(oldp+53,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lw));
    bufp->fullBit(oldp+54,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_add));
    bufp->fullBit(oldp+55,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_beq));
    bufp->fullBit(oldp+56,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sltu));
    bufp->fullBit(oldp+57,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_xor));
    bufp->fullBit(oldp+58,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_or));
    bufp->fullBit(oldp+59,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sltiu));
    bufp->fullBit(oldp+60,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bne));
    bufp->fullBit(oldp+61,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lbu));
    bufp->fullBit(oldp+62,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sb));
    bufp->fullBit(oldp+63,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sub));
    bufp->fullBit(oldp+64,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_srai));
    bufp->fullBit(oldp+65,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_andi));
    bufp->fullBit(oldp+66,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sll));
    bufp->fullBit(oldp+67,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_and));
    bufp->fullBit(oldp+68,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sh));
    bufp->fullBit(oldp+69,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_xori));
    bufp->fullBit(oldp+70,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bge));
    bufp->fullBit(oldp+71,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bgeu));
    bufp->fullBit(oldp+72,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_slli));
    bufp->fullBit(oldp+73,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_blt));
    bufp->fullBit(oldp+74,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bltu));
    bufp->fullBit(oldp+75,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_slt));
    bufp->fullBit(oldp+76,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lh));
    bufp->fullBit(oldp+77,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lhu));
    bufp->fullBit(oldp+78,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_srl));
    bufp->fullBit(oldp+79,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_srli));
    bufp->fullBit(oldp+80,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sra));
    bufp->fullBit(oldp+81,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lb));
    bufp->fullBit(oldp+82,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_slti));
    bufp->fullBit(oldp+83,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_ori));
    bufp->fullIData(oldp+84,(vlSelfRef.npc__DOT__idu_inst__DOT__immI),32);
    bufp->fullIData(oldp+85,((0xfffff000U & vlSelfRef.npc__DOT__inst)),32);
    bufp->fullIData(oldp+86,(vlSelfRef.npc__DOT__idu_inst__DOT__immS),32);
    bufp->fullIData(oldp+87,(vlSelfRef.npc__DOT__idu_inst__DOT__immB),32);
    bufp->fullIData(oldp+88,(vlSelfRef.npc__DOT__idu_inst__DOT__immJ),32);
    bufp->fullCData(oldp+89,(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+90,(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+91,(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+92,(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+93,(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+94,(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit));
    bufp->fullWData(oldp+95,(vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut),1482);
    bufp->fullIData(oldp+142,(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+143,(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+144,(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+145,(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+146,(vlSelfRef.npc__DOT__u_ALU__DOT__add_overflow));
    bufp->fullBit(oldp+147,(vlSelfRef.npc__DOT__u_ALU__DOT__sub_overflow));
    bufp->fullBit(oldp+148,((1U & (IData)((1ULL & (
                                                   ((QData)((IData)(vlSelfRef.npc__DOT__ALU_A)) 
                                                    + 
                                                    ((QData)((IData)(vlSelfRef.npc__DOT__ALU_B)) 
                                                     + (QData)((IData)(vlSelfRef.npc__DOT__ALU_Cin)))) 
                                                   >> 0x20U))))));
    bufp->fullBit(oldp+149,((1U & (IData)((1ULL & (
                                                   (1ULL 
                                                    + 
                                                    ((QData)((IData)(vlSelfRef.npc__DOT__ALU_A)) 
                                                     + (QData)((IData)(
                                                                       (~ vlSelfRef.npc__DOT__ALU_B))))) 
                                                   >> 0x20U))))));
    bufp->fullIData(oldp+150,(vlSelfRef.npc__DOT__u_ALU__DOT__add_result),32);
    bufp->fullIData(oldp+151,(vlSelfRef.npc__DOT__u_ALU__DOT__sub_result),32);
    bufp->fullQData(oldp+152,(vlSelfRef.npc__DOT__u_ALU__DOT__out),33);
    bufp->fullIData(oldp+154,((~ vlSelfRef.npc__DOT__ALU_B)),32);
    __Vtemp_7[5U] = (((IData)((6ULL | ((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_0)) 
                                       << 4U))) << 0x10U) 
                     | (((0xffU & ((IData)((8ULL | 
                                            ((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_1)) 
                                             << 4U))) 
                                   >> 0x14U)) | ((IData)(
                                                         ((0xaULL 
                                                           | ((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_2)) 
                                                              << 4U)) 
                                                          >> 0x20U)) 
                                                 >> 0x18U)) 
                        | ((0xf00U & ((IData)((8ULL 
                                               | ((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_1)) 
                                                  << 4U))) 
                                      >> 0x14U)) | 
                           ((IData)(((8ULL | ((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_1)) 
                                              << 4U)) 
                                     >> 0x20U)) << 0xcU))));
    __Vtemp_7[7U] = (((0xffffU & ((IData)((4ULL | ((QData)((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__sub_result)) 
                                                   << 4U))) 
                                  >> 0xcU)) | ((IData)(
                                                       ((6ULL 
                                                         | ((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_0)) 
                                                            << 4U)) 
                                                        >> 0x20U)) 
                                               >> 0x10U)) 
                     | (((IData)((((QData)((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__add_overflow)) 
                                   << 0x24U) | (((QData)((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__add_result)) 
                                                 << 4U) 
                                                | (QData)((IData)(
                                                                  (2U 
                                                                   | (IData)(vlSelfRef.npc__DOT__u_ALU__DOT__sub_overflow))))))) 
                         << 0x18U) | ((0xf0000U & ((IData)(
                                                           (4ULL 
                                                            | ((QData)((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__sub_result)) 
                                                               << 4U))) 
                                                   >> 0xcU)) 
                                      | ((IData)(((4ULL 
                                                   | ((QData)((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__sub_result)) 
                                                      << 4U)) 
                                                  >> 0x20U)) 
                                         << 0x14U))));
    __Vtemp_7[8U] = ((0xffffU & (((IData)((((QData)((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__add_overflow)) 
                                            << 0x24U) 
                                           | (((QData)((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__add_result)) 
                                               << 4U) 
                                              | (QData)((IData)(
                                                                (2U 
                                                                 | (IData)(vlSelfRef.npc__DOT__u_ALU__DOT__sub_overflow))))))) 
                                  >> 8U) | ((IData)(
                                                    ((4ULL 
                                                      | ((QData)((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__sub_result)) 
                                                         << 4U)) 
                                                     >> 0x20U)) 
                                            >> 0xcU))) 
                     | ((0xff0000U & ((IData)((((QData)((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__add_overflow)) 
                                                << 0x24U) 
                                               | (((QData)((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__add_result)) 
                                                   << 4U) 
                                                  | (QData)((IData)(
                                                                    (2U 
                                                                     | (IData)(vlSelfRef.npc__DOT__u_ALU__DOT__sub_overflow))))))) 
                                      >> 8U)) | ((IData)(
                                                         ((((QData)((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__add_overflow)) 
                                                            << 0x24U) 
                                                           | (((QData)((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__add_result)) 
                                                               << 4U) 
                                                              | (QData)((IData)(
                                                                                (2U 
                                                                                | (IData)(vlSelfRef.npc__DOT__u_ALU__DOT__sub_overflow)))))) 
                                                          >> 0x20U)) 
                                                 << 0x18U)));
    __Vtemp_8[0U] = (IData)((0xe00000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_5))));
    __Vtemp_8[1U] = ((vlSelfRef.__VdfgRegularize_hd87f99a1_1_4 
                      << 4U) | (IData)(((0xe00000000ULL 
                                         | (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_5))) 
                                        >> 0x20U)));
    __Vtemp_8[2U] = (((IData)((0xcULL | ((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_3)) 
                                         << 4U))) << 4U) 
                     | (vlSelfRef.__VdfgRegularize_hd87f99a1_1_4 
                        >> 0x1cU));
    __Vtemp_8[3U] = (((IData)((0xaULL | ((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_2)) 
                                         << 4U))) << 8U) 
                     | (((IData)((0xcULL | ((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_3)) 
                                            << 4U))) 
                         >> 0x1cU) | ((IData)(((0xcULL 
                                                | ((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_3)) 
                                                   << 4U)) 
                                               >> 0x20U)) 
                                      << 4U)));
    __Vtemp_8[4U] = (((IData)((0xaULL | ((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_2)) 
                                         << 4U))) >> 0x18U) 
                     | (((IData)((8ULL | ((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_1)) 
                                          << 4U))) 
                         << 0xcU) | ((IData)(((0xaULL 
                                               | ((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_2)) 
                                                  << 4U)) 
                                              >> 0x20U)) 
                                     << 8U)));
    __Vtemp_8[5U] = __Vtemp_7[5U];
    __Vtemp_8[6U] = (((IData)((6ULL | ((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_0)) 
                                       << 4U))) >> 0x10U) 
                     | (((IData)((4ULL | ((QData)((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__sub_result)) 
                                          << 4U))) 
                         << 0x14U) | ((IData)(((6ULL 
                                                | ((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_0)) 
                                                   << 4U)) 
                                               >> 0x20U)) 
                                      << 0x10U)));
    __Vtemp_8[7U] = __Vtemp_7[7U];
    __Vtemp_8[8U] = __Vtemp_7[8U];
    bufp->fullWData(oldp+155,(__Vtemp_8),288);
    bufp->fullQData(oldp+164,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),36);
    bufp->fullQData(oldp+166,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),36);
    bufp->fullQData(oldp+168,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2]),36);
    bufp->fullQData(oldp+170,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3]),36);
    bufp->fullQData(oldp+172,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[4]),36);
    bufp->fullQData(oldp+174,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[5]),36);
    bufp->fullQData(oldp+176,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[6]),36);
    bufp->fullQData(oldp+178,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[7]),36);
    bufp->fullQData(oldp+180,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0]),33);
    bufp->fullQData(oldp+182,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1]),33);
    bufp->fullQData(oldp+184,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2]),33);
    bufp->fullQData(oldp+186,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3]),33);
    bufp->fullQData(oldp+188,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[4]),33);
    bufp->fullQData(oldp+190,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[5]),33);
    bufp->fullQData(oldp+192,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[6]),33);
    bufp->fullQData(oldp+194,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[7]),33);
    bufp->fullQData(oldp+196,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out),33);
    bufp->fullBit(oldp+198,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+199,(((((0x6fU == (0x7fU & vlSelfRef.npc__DOT__inst)) 
                                 | (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_jalr)) 
                                | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_beq) 
                                    | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bne) 
                                       | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bge) 
                                          | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bgeu) 
                                             | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_blt) 
                                                | (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bltu)))))) 
                                   & ((0U == (7U & 
                                              (vlSelfRef.npc__DOT__inst 
                                               >> 0xcU)))
                                       ? (vlSelfRef.npc__DOT__rf_rdata1 
                                          == vlSelfRef.npc__DOT__rf_rdata2)
                                       : ((1U == (7U 
                                                  & (vlSelfRef.npc__DOT__inst 
                                                     >> 0xcU)))
                                           ? (vlSelfRef.npc__DOT__rf_rdata1 
                                              != vlSelfRef.npc__DOT__rf_rdata2)
                                           : ((5U == 
                                               (7U 
                                                & (vlSelfRef.npc__DOT__inst 
                                                   >> 0xcU)))
                                               ? VL_GTES_III(32, vlSelfRef.npc__DOT__rf_rdata1, vlSelfRef.npc__DOT__rf_rdata2)
                                               : ((7U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.npc__DOT__inst 
                                                       >> 0xcU)))
                                                   ? 
                                                  (vlSelfRef.npc__DOT__rf_rdata1 
                                                   >= vlSelfRef.npc__DOT__rf_rdata2)
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.npc__DOT__inst 
                                                        >> 0xcU)))
                                                    ? 
                                                   VL_LTS_III(32, vlSelfRef.npc__DOT__rf_rdata1, vlSelfRef.npc__DOT__rf_rdata2)
                                                    : (IData)(
                                                              ((0x6000U 
                                                                == 
                                                                (0x7000U 
                                                                 & vlSelfRef.npc__DOT__inst)) 
                                                               & (vlSelfRef.npc__DOT__rf_rdata1 
                                                                  < vlSelfRef.npc__DOT__rf_rdata2))))))))))
                                ? ((IData)((vlSelfRef.npc__DOT__u_ALU__DOT__out 
                                            >> 1U)) 
                                   << 1U) : ((IData)(4U) 
                                             + vlSelfRef.npc__DOT__pc))),32);
    bufp->fullIData(oldp+200,(vlSelfRef.npc__DOT__pc),32);
    bufp->fullIData(oldp+201,(((IData)(4U) + vlSelfRef.npc__DOT__pc)),32);
    bufp->fullIData(oldp+202,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[0]),32);
    bufp->fullIData(oldp+203,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[1]),32);
    bufp->fullIData(oldp+204,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[2]),32);
    bufp->fullIData(oldp+205,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[3]),32);
    bufp->fullIData(oldp+206,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[4]),32);
    bufp->fullIData(oldp+207,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[5]),32);
    bufp->fullIData(oldp+208,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[6]),32);
    bufp->fullIData(oldp+209,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[7]),32);
    bufp->fullIData(oldp+210,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[8]),32);
    bufp->fullIData(oldp+211,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[9]),32);
    bufp->fullIData(oldp+212,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[10]),32);
    bufp->fullIData(oldp+213,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[11]),32);
    bufp->fullIData(oldp+214,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[12]),32);
    bufp->fullIData(oldp+215,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[13]),32);
    bufp->fullIData(oldp+216,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[14]),32);
    bufp->fullIData(oldp+217,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[15]),32);
    bufp->fullIData(oldp+218,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[16]),32);
    bufp->fullIData(oldp+219,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[17]),32);
    bufp->fullIData(oldp+220,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[18]),32);
    bufp->fullIData(oldp+221,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[19]),32);
    bufp->fullIData(oldp+222,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[20]),32);
    bufp->fullIData(oldp+223,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[21]),32);
    bufp->fullIData(oldp+224,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[22]),32);
    bufp->fullIData(oldp+225,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[23]),32);
    bufp->fullIData(oldp+226,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[24]),32);
    bufp->fullIData(oldp+227,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[25]),32);
    bufp->fullIData(oldp+228,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[26]),32);
    bufp->fullIData(oldp+229,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[27]),32);
    bufp->fullIData(oldp+230,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[28]),32);
    bufp->fullIData(oldp+231,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[29]),32);
    bufp->fullIData(oldp+232,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[30]),32);
    bufp->fullIData(oldp+233,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[31]),32);
    bufp->fullIData(oldp+234,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+235,(vlSelfRef.clk));
    bufp->fullBit(oldp+236,(vlSelfRef.rst));
    bufp->fullBit(oldp+237,((1U & (~ (IData)(vlSelfRef.rst)))));
}
