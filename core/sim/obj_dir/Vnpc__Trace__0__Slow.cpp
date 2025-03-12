// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vnpc__Syms.h"


VL_ATTR_COLD void Vnpc___024root__trace_init_sub__TOP__0(Vnpc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+235,"clk", false,-1);
    tracep->declBit(c+236,"rst", false,-1);
    tracep->pushNamePrefix("npc ");
    tracep->declBit(c+235,"clk", false,-1);
    tracep->declBit(c+236,"rst", false,-1);
    tracep->declBus(c+9,"rs1", false,-1, 4,0);
    tracep->declBus(c+10,"rs2", false,-1, 4,0);
    tracep->declBus(c+11,"rd", false,-1, 4,0);
    tracep->declBus(c+12,"imm", false,-1, 31,0);
    tracep->declBus(c+13,"funct3", false,-1, 2,0);
    tracep->declBus(c+14,"funct7", false,-1, 6,0);
    tracep->declBus(c+15,"opcode", false,-1, 6,0);
    tracep->declBus(c+16,"ALU_op", false,-1, 2,0);
    tracep->declBus(c+17,"rdregsrc", false,-1, 2,0);
    tracep->declBus(c+18,"cmp_type", false,-1, 1,0);
    tracep->declBit(c+19,"ALUsrc1", false,-1);
    tracep->declBit(c+20,"ALUsrc2", false,-1);
    tracep->declBit(c+21,"jump", false,-1);
    tracep->declBit(c+22,"branch", false,-1);
    tracep->declBit(c+23,"wen", false,-1);
    tracep->declBus(c+24,"rf_wdata", false,-1, 31,0);
    tracep->declBus(c+25,"rf_rdata1", false,-1, 31,0);
    tracep->declBus(c+26,"rf_rdata2", false,-1, 31,0);
    tracep->declBus(c+9,"rf_raddr1", false,-1, 4,0);
    tracep->declBus(c+10,"rf_raddr2", false,-1, 4,0);
    tracep->declBus(c+27,"ALU_result", false,-1, 31,0);
    tracep->declBus(c+28,"ALU_A", false,-1, 31,0);
    tracep->declBus(c+29,"ALU_B", false,-1, 31,0);
    tracep->declBit(c+238,"ALU_Cin", false,-1);
    tracep->declBit(c+30,"ALU_zero", false,-1);
    tracep->declBit(c+31,"ALU_overflow", false,-1);
    tracep->declBit(c+32,"ALU_Cout", false,-1);
    tracep->declBit(c+30,"equal", false,-1);
    tracep->declBit(c+33,"signed_less", false,-1);
    tracep->declBit(c+34,"unsigned_less", false,-1);
    tracep->declBit(c+35,"stop_sim", false,-1);
    tracep->declBus(c+200,"pc", false,-1, 31,0);
    tracep->declBus(c+201,"snpc", false,-1, 31,0);
    tracep->declBit(c+36,"dir_jump", false,-1);
    tracep->declBit(c+37,"branch_judge", false,-1);
    tracep->declBus(c+38,"inst", false,-1, 31,0);
    tracep->declBit(c+237,"ivalid", false,-1);
    tracep->declBus(c+27,"draddr", false,-1, 31,0);
    tracep->declBus(c+27,"dwaddr", false,-1, 31,0);
    tracep->declBus(c+26,"dwdata", false,-1, 31,0);
    tracep->declBus(c+39,"dwmask", false,-1, 7,0);
    tracep->declBus(c+40,"drdata", false,-1, 31,0);
    tracep->declBit(c+41,"dvalid", false,-1);
    tracep->declBit(c+42,"dwen", false,-1);
    tracep->declBus(c+43,"drdata_ext", false,-1, 31,0);
    tracep->declBus(c+44,"cmp_result", false,-1, 31,0);
    tracep->pushNamePrefix("data_mem ");
    tracep->declBus(c+27,"raddr", false,-1, 31,0);
    tracep->declBus(c+27,"waddr", false,-1, 31,0);
    tracep->declBus(c+26,"wdata", false,-1, 31,0);
    tracep->declBus(c+39,"wmask", false,-1, 7,0);
    tracep->declBit(c+42,"wen", false,-1);
    tracep->declBit(c+41,"valid", false,-1);
    tracep->declBus(c+40,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu_inst ");
    tracep->declBus(c+38,"inst", false,-1, 31,0);
    tracep->declBus(c+9,"rs1", false,-1, 4,0);
    tracep->declBus(c+10,"rs2", false,-1, 4,0);
    tracep->declBus(c+11,"rd", false,-1, 4,0);
    tracep->declBus(c+13,"funct3", false,-1, 2,0);
    tracep->declBus(c+14,"funct7", false,-1, 6,0);
    tracep->declBus(c+15,"opcode", false,-1, 6,0);
    tracep->declBus(c+12,"imm", false,-1, 31,0);
    tracep->declBus(c+16,"ALU_op", false,-1, 2,0);
    tracep->declBus(c+17,"rdregsrc", false,-1, 2,0);
    tracep->declBit(c+19,"ALUsrc1", false,-1);
    tracep->declBit(c+20,"ALUsrc2", false,-1);
    tracep->declBit(c+21,"jump", false,-1);
    tracep->declBit(c+22,"branch", false,-1);
    tracep->declBus(c+18,"cmp_type", false,-1, 1,0);
    tracep->declBus(c+39,"dwmask", false,-1, 7,0);
    tracep->declBit(c+42,"dwen", false,-1);
    tracep->declBit(c+41,"dvalid", false,-1);
    tracep->declBit(c+35,"stop_sim", false,-1);
    tracep->declBus(c+239,"NUM_OF_INST", false,-1, 31,0);
    tracep->declBus(c+45,"inst_name", false,-1, 5,0);
    tracep->declBit(c+46,"inst_is_addi", false,-1);
    tracep->declBit(c+47,"inst_is_ebreak", false,-1);
    tracep->declBit(c+48,"inst_is_auipc", false,-1);
    tracep->declBit(c+49,"inst_is_lui", false,-1);
    tracep->declBit(c+50,"inst_is_jal", false,-1);
    tracep->declBit(c+51,"inst_is_jalr", false,-1);
    tracep->declBit(c+52,"inst_is_sw", false,-1);
    tracep->declBit(c+53,"inst_is_lw", false,-1);
    tracep->declBit(c+54,"inst_is_add", false,-1);
    tracep->declBit(c+55,"inst_is_beq", false,-1);
    tracep->declBit(c+56,"inst_is_sltu", false,-1);
    tracep->declBit(c+57,"inst_is_xor", false,-1);
    tracep->declBit(c+58,"inst_is_or", false,-1);
    tracep->declBit(c+59,"inst_is_sltiu", false,-1);
    tracep->declBit(c+60,"inst_is_bne", false,-1);
    tracep->declBit(c+61,"inst_is_lbu", false,-1);
    tracep->declBit(c+62,"inst_is_sb", false,-1);
    tracep->declBit(c+63,"inst_is_sub", false,-1);
    tracep->declBit(c+64,"inst_is_srai", false,-1);
    tracep->declBit(c+65,"inst_is_andi", false,-1);
    tracep->declBit(c+66,"inst_is_sll", false,-1);
    tracep->declBit(c+67,"inst_is_and", false,-1);
    tracep->declBit(c+68,"inst_is_sh", false,-1);
    tracep->declBit(c+69,"inst_is_xori", false,-1);
    tracep->declBit(c+70,"inst_is_bge", false,-1);
    tracep->declBit(c+71,"inst_is_bgeu", false,-1);
    tracep->declBit(c+72,"inst_is_slli", false,-1);
    tracep->declBit(c+73,"inst_is_blt", false,-1);
    tracep->declBit(c+74,"inst_is_bltu", false,-1);
    tracep->declBit(c+75,"inst_is_slt", false,-1);
    tracep->declBit(c+76,"inst_is_lh", false,-1);
    tracep->declBit(c+77,"inst_is_lhu", false,-1);
    tracep->declBit(c+78,"inst_is_srl", false,-1);
    tracep->declBit(c+79,"inst_is_srli", false,-1);
    tracep->declBit(c+80,"inst_is_sra", false,-1);
    tracep->declBit(c+81,"inst_is_lb", false,-1);
    tracep->declBit(c+82,"inst_is_slti", false,-1);
    tracep->declBit(c+83,"inst_is_ori", false,-1);
    tracep->declBus(c+84,"immI", false,-1, 31,0);
    tracep->declBus(c+85,"immU", false,-1, 31,0);
    tracep->declBus(c+86,"immS", false,-1, 31,0);
    tracep->declBus(c+87,"immB", false,-1, 31,0);
    tracep->declBus(c+88,"immJ", false,-1, 31,0);
    tracep->pushNamePrefix("getALU_mode ");
    tracep->declBus(c+239,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+240,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+241,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+16,"out", false,-1, 2,0);
    tracep->declBus(c+45,"key", false,-1, 5,0);
    tracep->declBus(c+242,"default_out", false,-1, 2,0);
    tracep->declArray(c+243,"lut", false,-1, 350,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+239,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+240,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+241,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+254,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+16,"out", false,-1, 2,0);
    tracep->declBus(c+45,"key", false,-1, 5,0);
    tracep->declBus(c+242,"default_out", false,-1, 2,0);
    tracep->declArray(c+243,"lut", false,-1, 350,0);
    tracep->declBus(c+255,"PAIR_LEN", false,-1, 31,0);
    tracep->declBus(c+89,"lut_out", false,-1, 2,0);
    tracep->declBit(c+90,"hit", false,-1);
    tracep->declBus(c+256,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("getALUsrc1 ");
    tracep->declBus(c+239,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+240,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+254,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+19,"out", false,-1, 0,0);
    tracep->declBus(c+45,"key", false,-1, 5,0);
    tracep->declBus(c+257,"default_out", false,-1, 0,0);
    tracep->declArray(c+258,"lut", false,-1, 272,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+239,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+240,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+254,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+254,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+19,"out", false,-1, 0,0);
    tracep->declBus(c+45,"key", false,-1, 5,0);
    tracep->declBus(c+257,"default_out", false,-1, 0,0);
    tracep->declArray(c+258,"lut", false,-1, 272,0);
    tracep->declBus(c+267,"PAIR_LEN", false,-1, 31,0);
    tracep->declBus(c+91,"lut_out", false,-1, 0,0);
    tracep->declBit(c+92,"hit", false,-1);
    tracep->declBus(c+256,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("getALUsrc2 ");
    tracep->declBus(c+239,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+240,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+254,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+20,"out", false,-1, 0,0);
    tracep->declBus(c+45,"key", false,-1, 5,0);
    tracep->declBus(c+268,"default_out", false,-1, 0,0);
    tracep->declArray(c+269,"lut", false,-1, 272,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+239,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+240,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+254,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+254,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+20,"out", false,-1, 0,0);
    tracep->declBus(c+45,"key", false,-1, 5,0);
    tracep->declBus(c+268,"default_out", false,-1, 0,0);
    tracep->declArray(c+269,"lut", false,-1, 272,0);
    tracep->declBus(c+267,"PAIR_LEN", false,-1, 31,0);
    tracep->declBus(c+93,"lut_out", false,-1, 0,0);
    tracep->declBit(c+94,"hit", false,-1);
    tracep->declBus(c+256,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("getimm ");
    tracep->declBus(c+239,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+240,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+278,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+12,"out", false,-1, 31,0);
    tracep->declBus(c+45,"key", false,-1, 5,0);
    tracep->declBus(c+279,"default_out", false,-1, 31,0);
    tracep->declArray(c+95,"lut", false,-1, 1481,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+239,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+240,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+278,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+254,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+12,"out", false,-1, 31,0);
    tracep->declBus(c+45,"key", false,-1, 5,0);
    tracep->declBus(c+279,"default_out", false,-1, 31,0);
    tracep->declArray(c+95,"lut", false,-1, 1481,0);
    tracep->declBus(c+280,"PAIR_LEN", false,-1, 31,0);
    tracep->declBus(c+142,"lut_out", false,-1, 31,0);
    tracep->declBit(c+143,"hit", false,-1);
    tracep->declBus(c+256,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("getrdregsrc ");
    tracep->declBus(c+239,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+240,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+241,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+17,"out", false,-1, 2,0);
    tracep->declBus(c+45,"key", false,-1, 5,0);
    tracep->declBus(c+242,"default_out", false,-1, 2,0);
    tracep->declArray(c+281,"lut", false,-1, 350,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+239,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+240,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+241,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+254,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+17,"out", false,-1, 2,0);
    tracep->declBus(c+45,"key", false,-1, 5,0);
    tracep->declBus(c+242,"default_out", false,-1, 2,0);
    tracep->declArray(c+281,"lut", false,-1, 350,0);
    tracep->declBus(c+255,"PAIR_LEN", false,-1, 31,0);
    tracep->declBus(c+144,"lut_out", false,-1, 2,0);
    tracep->declBit(c+145,"hit", false,-1);
    tracep->declBus(c+256,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("inst_mem ");
    tracep->declBus(c+200,"raddr", false,-1, 31,0);
    tracep->declBus(c+292,"waddr", false,-1, 31,0);
    tracep->declBus(c+292,"wdata", false,-1, 31,0);
    tracep->declBus(c+293,"wmask", false,-1, 7,0);
    tracep->declBit(c+257,"wen", false,-1);
    tracep->declBit(c+237,"valid", false,-1);
    tracep->declBus(c+38,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ALU ");
    tracep->declBus(c+16,"mode", false,-1, 2,0);
    tracep->declBus(c+28,"A", false,-1, 31,0);
    tracep->declBus(c+29,"B", false,-1, 31,0);
    tracep->declBit(c+238,"Cin", false,-1);
    tracep->declBit(c+30,"zero", false,-1);
    tracep->declBit(c+31,"overflow", false,-1);
    tracep->declBit(c+32,"Cout", false,-1);
    tracep->declBus(c+27,"result", false,-1, 31,0);
    tracep->declBit(c+146,"add_overflow", false,-1);
    tracep->declBit(c+147,"sub_overflow", false,-1);
    tracep->declBit(c+148,"add_Cout", false,-1);
    tracep->declBit(c+149,"sub_Cout", false,-1);
    tracep->declBus(c+150,"add_result", false,-1, 31,0);
    tracep->declBus(c+151,"sub_result", false,-1, 31,0);
    tracep->declQuad(c+152,"out", false,-1, 32,0);
    tracep->pushNamePrefix("adder_inst ");
    tracep->declBus(c+28,"A", false,-1, 31,0);
    tracep->declBus(c+29,"B", false,-1, 31,0);
    tracep->declBit(c+238,"Cin", false,-1);
    tracep->declBus(c+150,"sum", false,-1, 31,0);
    tracep->declBit(c+148,"Cout", false,-1);
    tracep->declBit(c+146,"overflow", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sub_inst ");
    tracep->declBus(c+28,"A", false,-1, 31,0);
    tracep->declBus(c+154,"B", false,-1, 31,0);
    tracep->declBit(c+268,"Cin", false,-1);
    tracep->declBus(c+151,"sum", false,-1, 31,0);
    tracep->declBit(c+149,"Cout", false,-1);
    tracep->declBit(c+147,"overflow", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_MuxKeyWithDefault ");
    tracep->declBus(c+294,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+241,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+295,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+152,"out", false,-1, 32,0);
    tracep->declBus(c+16,"key", false,-1, 2,0);
    tracep->declQuad(c+296,"default_out", false,-1, 32,0);
    tracep->declArray(c+155,"lut", false,-1, 287,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+294,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+241,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+295,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+254,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+152,"out", false,-1, 32,0);
    tracep->declBus(c+16,"key", false,-1, 2,0);
    tracep->declQuad(c+296,"default_out", false,-1, 32,0);
    tracep->declArray(c+155,"lut", false,-1, 287,0);
    tracep->declBus(c+298,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+164+i*2,"pair_list", true,(i+0), 35,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+180+i*2,"data_list", true,(i+0), 32,0);
    }
    tracep->declQuad(c+196,"lut_out", false,-1, 32,0);
    tracep->declBit(c+198,"hit", false,-1);
    tracep->declBus(c+299,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u_PC ");
    tracep->declBit(c+235,"clk", false,-1);
    tracep->declBit(c+236,"rst", false,-1);
    tracep->declBit(c+36,"jump", false,-1);
    tracep->declBus(c+27,"ALU_result", false,-1, 31,0);
    tracep->declBus(c+200,"pc", false,-1, 31,0);
    tracep->declBus(c+201,"snpc", false,-1, 31,0);
    tracep->declBus(c+199,"dnpc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_RegisterFile ");
    tracep->declBus(c+300,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+278,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+235,"clk", false,-1);
    tracep->declBit(c+236,"rst", false,-1);
    tracep->declBus(c+24,"wdata", false,-1, 31,0);
    tracep->declBus(c+11,"waddr", false,-1, 4,0);
    tracep->declBit(c+23,"wen", false,-1);
    tracep->declBus(c+9,"raddr1", false,-1, 4,0);
    tracep->declBus(c+10,"raddr2", false,-1, 4,0);
    tracep->declBus(c+25,"rdata1", false,-1, 31,0);
    tracep->declBus(c+26,"rdata2", false,-1, 31,0);
    tracep->declBit(c+268,"ren", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+202+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+234,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vnpc___024root__trace_init_top(Vnpc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root__trace_init_top\n"); );
    // Body
    Vnpc___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vnpc___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vnpc___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vnpc___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vnpc___024root__trace_register(Vnpc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vnpc___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vnpc___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vnpc___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vnpc___024root__trace_full_sub_0(Vnpc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vnpc___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root__trace_full_top_0\n"); );
    // Init
    Vnpc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnpc___024root*>(voidSelf);
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vnpc___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<11>/*351:0*/ Vnpc__ConstPool__CONST_h46b0c1f5_0;
extern const VlWide<9>/*287:0*/ Vnpc__ConstPool__CONST_h795614a2_0;
extern const VlWide<9>/*287:0*/ Vnpc__ConstPool__CONST_he327770b_0;
extern const VlWide<11>/*351:0*/ Vnpc__ConstPool__CONST_h331353ab_0;

VL_ATTR_COLD void Vnpc___024root__trace_full_sub_0(Vnpc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<9>/*287:0*/ __Vtemp_hd5abb2a0__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+2,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+3,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+4,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+5,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+6,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+7,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[6]),3);
    bufp->fullCData(oldp+8,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[7]),3);
    bufp->fullCData(oldp+9,(vlSelf->npc__DOT__rs1),5);
    bufp->fullCData(oldp+10,((0x1fU & (vlSelf->npc__DOT__inst 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+11,(((IData)(vlSelf->npc__DOT__stop_sim)
                               ? 0xaU : (0x1fU & (vlSelf->npc__DOT__inst 
                                                  >> 7U)))),5);
    bufp->fullIData(oldp+12,(vlSelf->npc__DOT__imm),32);
    bufp->fullCData(oldp+13,((7U & (vlSelf->npc__DOT__inst 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+14,((vlSelf->npc__DOT__inst 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+15,((0x7fU & vlSelf->npc__DOT__inst)),7);
    bufp->fullCData(oldp+16,(vlSelf->npc__DOT__ALU_op),3);
    bufp->fullCData(oldp+17,(vlSelf->npc__DOT__rdregsrc),3);
    bufp->fullCData(oldp+18,(vlSelf->npc__DOT__cmp_type),2);
    bufp->fullBit(oldp+19,(vlSelf->npc__DOT__ALUsrc1));
    bufp->fullBit(oldp+20,(vlSelf->npc__DOT__ALUsrc2));
    bufp->fullBit(oldp+21,(((0x6fU == (0x7fU & vlSelf->npc__DOT__inst)) 
                            | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr))));
    bufp->fullBit(oldp+22,(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_beq) 
                            | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bne) 
                               | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bge) 
                                  | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bgeu) 
                                     | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_blt) 
                                        | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bltu))))))));
    bufp->fullBit(oldp+23,((4U != (IData)(vlSelf->npc__DOT__rdregsrc))));
    bufp->fullIData(oldp+24,(((0U == (IData)(vlSelf->npc__DOT__rdregsrc))
                               ? (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)
                               : ((1U == (IData)(vlSelf->npc__DOT__rdregsrc))
                                   ? ((0U == (7U & 
                                              (vlSelf->npc__DOT__inst 
                                               >> 0xcU)))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSelf->npc__DOT__drdata 
                                                          >> 7U)))) 
                                           << 8U) | 
                                          (0xffU & vlSelf->npc__DOT__drdata))
                                       : ((4U == (7U 
                                                  & (vlSelf->npc__DOT__inst 
                                                     >> 0xcU)))
                                           ? (0xffU 
                                              & vlSelf->npc__DOT__drdata)
                                           : ((1U == 
                                               (7U 
                                                & (vlSelf->npc__DOT__inst 
                                                   >> 0xcU)))
                                               ? ((
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelf->npc__DOT__drdata 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelf->npc__DOT__drdata))
                                               : ((5U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->npc__DOT__inst 
                                                       >> 0xcU)))
                                                   ? 
                                                  (0xffffU 
                                                   & vlSelf->npc__DOT__drdata)
                                                   : vlSelf->npc__DOT__drdata))))
                                   : ((2U == (IData)(vlSelf->npc__DOT__rdregsrc))
                                       ? ((IData)(4U) 
                                          + vlSelf->npc__DOT__pc)
                                       : ((3U == (IData)(vlSelf->npc__DOT__rdregsrc))
                                           ? ((0U == (IData)(vlSelf->npc__DOT__cmp_type))
                                               ? (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)))))
                                               : ((1U 
                                                   == (IData)(vlSelf->npc__DOT__cmp_type))
                                                   ? 
                                                  (0U 
                                                   != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->npc__DOT__cmp_type))
                                                    ? 
                                                   (1U 
                                                    & ((IData)(
                                                               (0x80000000ULL 
                                                                == 
                                                                (0x180000000ULL 
                                                                 & vlSelf->npc__DOT__u_ALU__DOT__out))) 
                                                       | (IData)(
                                                                 (0x100000000ULL 
                                                                  == 
                                                                  (0x180000000ULL 
                                                                   & vlSelf->npc__DOT__u_ALU__DOT__out)))))
                                                    : 
                                                   (1U 
                                                    & (~ 
                                                       ((0U 
                                                         == (IData)(vlSelf->npc__DOT__ALU_op))
                                                         ? (IData)(
                                                                   (1ULL 
                                                                    & (((QData)((IData)(vlSelf->npc__DOT__ALU_A)) 
                                                                        + 
                                                                        ((QData)((IData)(vlSelf->npc__DOT__ALU_B)) 
                                                                         + (QData)((IData)(vlSelf->npc__DOT__ALU_Cin)))) 
                                                                       >> 0x20U)))
                                                         : 
                                                        ((1U 
                                                          == (IData)(vlSelf->npc__DOT__ALU_op)) 
                                                         & (IData)(
                                                                   (1ULL 
                                                                    & ((1ULL 
                                                                        + 
                                                                        ((QData)((IData)(vlSelf->npc__DOT__ALU_A)) 
                                                                         + (QData)((IData)(
                                                                                (~ vlSelf->npc__DOT__ALU_B))))) 
                                                                       >> 0x20U))))))))))
                                           : 0U))))),32);
    bufp->fullIData(oldp+25,(vlSelf->npc__DOT__rf_rdata1),32);
    bufp->fullIData(oldp+26,(vlSelf->npc__DOT__rf_rdata2),32);
    bufp->fullIData(oldp+27,((IData)(vlSelf->npc__DOT__u_ALU__DOT__out)),32);
    bufp->fullIData(oldp+28,(vlSelf->npc__DOT__ALU_A),32);
    bufp->fullIData(oldp+29,(vlSelf->npc__DOT__ALU_B),32);
    bufp->fullBit(oldp+30,((1U & (~ (IData)((0U != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)))))));
    bufp->fullBit(oldp+31,((1U & (IData)((vlSelf->npc__DOT__u_ALU__DOT__out 
                                          >> 0x20U)))));
    bufp->fullBit(oldp+32,((1U & ((0U == (IData)(vlSelf->npc__DOT__ALU_op))
                                   ? (IData)((1ULL 
                                              & (((QData)((IData)(vlSelf->npc__DOT__ALU_A)) 
                                                  + 
                                                  ((QData)((IData)(vlSelf->npc__DOT__ALU_B)) 
                                                   + (QData)((IData)(vlSelf->npc__DOT__ALU_Cin)))) 
                                                 >> 0x20U)))
                                   : ((1U == (IData)(vlSelf->npc__DOT__ALU_op)) 
                                      & (IData)((1ULL 
                                                 & ((1ULL 
                                                     + 
                                                     ((QData)((IData)(vlSelf->npc__DOT__ALU_A)) 
                                                      + (QData)((IData)(
                                                                        (~ vlSelf->npc__DOT__ALU_B))))) 
                                                    >> 0x20U))))))));
    bufp->fullBit(oldp+33,((1U & ((IData)((0x80000000ULL 
                                           == (0x180000000ULL 
                                               & vlSelf->npc__DOT__u_ALU__DOT__out))) 
                                  | (IData)((0x100000000ULL 
                                             == (0x180000000ULL 
                                                 & vlSelf->npc__DOT__u_ALU__DOT__out)))))));
    bufp->fullBit(oldp+34,((1U & (~ ((0U == (IData)(vlSelf->npc__DOT__ALU_op))
                                      ? (IData)((1ULL 
                                                 & (((QData)((IData)(vlSelf->npc__DOT__ALU_A)) 
                                                     + 
                                                     ((QData)((IData)(vlSelf->npc__DOT__ALU_B)) 
                                                      + (QData)((IData)(vlSelf->npc__DOT__ALU_Cin)))) 
                                                    >> 0x20U)))
                                      : ((1U == (IData)(vlSelf->npc__DOT__ALU_op)) 
                                         & (IData)(
                                                   (1ULL 
                                                    & ((1ULL 
                                                        + 
                                                        ((QData)((IData)(vlSelf->npc__DOT__ALU_A)) 
                                                         + (QData)((IData)(
                                                                           (~ vlSelf->npc__DOT__ALU_B))))) 
                                                       >> 0x20U)))))))));
    bufp->fullBit(oldp+35,(vlSelf->npc__DOT__stop_sim));
    bufp->fullBit(oldp+36,((((0x6fU == (0x7fU & vlSelf->npc__DOT__inst)) 
                             | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr)) 
                            | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_beq) 
                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bne) 
                                   | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bge) 
                                      | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bgeu) 
                                         | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_blt) 
                                            | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bltu)))))) 
                               & ((0U == (7U & (vlSelf->npc__DOT__inst 
                                                >> 0xcU)))
                                   ? (vlSelf->npc__DOT__rf_rdata1 
                                      == vlSelf->npc__DOT__rf_rdata2)
                                   : ((1U == (7U & 
                                              (vlSelf->npc__DOT__inst 
                                               >> 0xcU)))
                                       ? (vlSelf->npc__DOT__rf_rdata1 
                                          != vlSelf->npc__DOT__rf_rdata2)
                                       : ((5U == (7U 
                                                  & (vlSelf->npc__DOT__inst 
                                                     >> 0xcU)))
                                           ? VL_GTES_III(32, vlSelf->npc__DOT__rf_rdata1, vlSelf->npc__DOT__rf_rdata2)
                                           : ((7U == 
                                               (7U 
                                                & (vlSelf->npc__DOT__inst 
                                                   >> 0xcU)))
                                               ? (vlSelf->npc__DOT__rf_rdata1 
                                                  >= vlSelf->npc__DOT__rf_rdata2)
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->npc__DOT__inst 
                                                       >> 0xcU)))
                                                   ? 
                                                  VL_LTS_III(32, vlSelf->npc__DOT__rf_rdata1, vlSelf->npc__DOT__rf_rdata2)
                                                   : (IData)(
                                                             ((0x6000U 
                                                               == 
                                                               (0x7000U 
                                                                & vlSelf->npc__DOT__inst)) 
                                                              & (vlSelf->npc__DOT__rf_rdata1 
                                                                 < vlSelf->npc__DOT__rf_rdata2))))))))))));
    bufp->fullBit(oldp+37,((((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_beq) 
                             | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bne) 
                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bge) 
                                   | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bgeu) 
                                      | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_blt) 
                                         | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bltu)))))) 
                            & ((0U == (7U & (vlSelf->npc__DOT__inst 
                                             >> 0xcU)))
                                ? (vlSelf->npc__DOT__rf_rdata1 
                                   == vlSelf->npc__DOT__rf_rdata2)
                                : ((1U == (7U & (vlSelf->npc__DOT__inst 
                                                 >> 0xcU)))
                                    ? (vlSelf->npc__DOT__rf_rdata1 
                                       != vlSelf->npc__DOT__rf_rdata2)
                                    : ((5U == (7U & 
                                               (vlSelf->npc__DOT__inst 
                                                >> 0xcU)))
                                        ? VL_GTES_III(32, vlSelf->npc__DOT__rf_rdata1, vlSelf->npc__DOT__rf_rdata2)
                                        : ((7U == (7U 
                                                   & (vlSelf->npc__DOT__inst 
                                                      >> 0xcU)))
                                            ? (vlSelf->npc__DOT__rf_rdata1 
                                               >= vlSelf->npc__DOT__rf_rdata2)
                                            : ((4U 
                                                == 
                                                (7U 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 0xcU)))
                                                ? VL_LTS_III(32, vlSelf->npc__DOT__rf_rdata1, vlSelf->npc__DOT__rf_rdata2)
                                                : (IData)(
                                                          ((0x6000U 
                                                            == 
                                                            (0x7000U 
                                                             & vlSelf->npc__DOT__inst)) 
                                                           & (vlSelf->npc__DOT__rf_rdata1 
                                                              < vlSelf->npc__DOT__rf_rdata2)))))))))));
    bufp->fullIData(oldp+38,(vlSelf->npc__DOT__inst),32);
    bufp->fullCData(oldp+39,(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw)
                               ? 0xfU : ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sb)
                                          ? 1U : ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sh)
                                                   ? 3U
                                                   : 0U)))),8);
    bufp->fullIData(oldp+40,(vlSelf->npc__DOT__drdata),32);
    bufp->fullBit(oldp+41,(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw) 
                            | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lw) 
                               | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lbu) 
                                  | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sb) 
                                     | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sh) 
                                        | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lh) 
                                           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lhu) 
                                              | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lb))))))))));
    bufp->fullBit(oldp+42,(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw) 
                            | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sb) 
                               | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sh)))));
    bufp->fullIData(oldp+43,(((0U == (7U & (vlSelf->npc__DOT__inst 
                                            >> 0xcU)))
                               ? (((- (IData)((1U & 
                                               (vlSelf->npc__DOT__drdata 
                                                >> 7U)))) 
                                   << 8U) | (0xffU 
                                             & vlSelf->npc__DOT__drdata))
                               : ((4U == (7U & (vlSelf->npc__DOT__inst 
                                                >> 0xcU)))
                                   ? (0xffU & vlSelf->npc__DOT__drdata)
                                   : ((1U == (7U & 
                                              (vlSelf->npc__DOT__inst 
                                               >> 0xcU)))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSelf->npc__DOT__drdata 
                                                          >> 0xfU)))) 
                                           << 0x10U) 
                                          | (0xffffU 
                                             & vlSelf->npc__DOT__drdata))
                                       : ((5U == (7U 
                                                  & (vlSelf->npc__DOT__inst 
                                                     >> 0xcU)))
                                           ? (0xffffU 
                                              & vlSelf->npc__DOT__drdata)
                                           : vlSelf->npc__DOT__drdata))))),32);
    bufp->fullIData(oldp+44,(((0U == (IData)(vlSelf->npc__DOT__cmp_type))
                               ? (1U & (~ (IData)((0U 
                                                   != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)))))
                               : ((1U == (IData)(vlSelf->npc__DOT__cmp_type))
                                   ? (0U != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out))
                                   : ((2U == (IData)(vlSelf->npc__DOT__cmp_type))
                                       ? (1U & ((IData)(
                                                        (0x80000000ULL 
                                                         == 
                                                         (0x180000000ULL 
                                                          & vlSelf->npc__DOT__u_ALU__DOT__out))) 
                                                | (IData)(
                                                          (0x100000000ULL 
                                                           == 
                                                           (0x180000000ULL 
                                                            & vlSelf->npc__DOT__u_ALU__DOT__out)))))
                                       : (1U & (~ (
                                                   (0U 
                                                    == (IData)(vlSelf->npc__DOT__ALU_op))
                                                    ? (IData)(
                                                              (1ULL 
                                                               & (((QData)((IData)(vlSelf->npc__DOT__ALU_A)) 
                                                                   + 
                                                                   ((QData)((IData)(vlSelf->npc__DOT__ALU_B)) 
                                                                    + (QData)((IData)(vlSelf->npc__DOT__ALU_Cin)))) 
                                                                  >> 0x20U)))
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->npc__DOT__ALU_op)) 
                                                    & (IData)(
                                                              (1ULL 
                                                               & ((1ULL 
                                                                   + 
                                                                   ((QData)((IData)(vlSelf->npc__DOT__ALU_A)) 
                                                                    + (QData)((IData)(
                                                                                (~ vlSelf->npc__DOT__ALU_B))))) 
                                                                  >> 0x20U))))))))))),32);
    bufp->fullCData(oldp+45,(vlSelf->npc__DOT__idu_inst__DOT__inst_name),6);
    bufp->fullBit(oldp+46,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_addi));
    bufp->fullBit(oldp+47,((0x100073U == vlSelf->npc__DOT__inst)));
    bufp->fullBit(oldp+48,((0x17U == (0x7fU & vlSelf->npc__DOT__inst))));
    bufp->fullBit(oldp+49,((0x37U == (0x7fU & vlSelf->npc__DOT__inst))));
    bufp->fullBit(oldp+50,((0x6fU == (0x7fU & vlSelf->npc__DOT__inst))));
    bufp->fullBit(oldp+51,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr));
    bufp->fullBit(oldp+52,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw));
    bufp->fullBit(oldp+53,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lw));
    bufp->fullBit(oldp+54,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_add));
    bufp->fullBit(oldp+55,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_beq));
    bufp->fullBit(oldp+56,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sltu));
    bufp->fullBit(oldp+57,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_xor));
    bufp->fullBit(oldp+58,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_or));
    bufp->fullBit(oldp+59,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sltiu));
    bufp->fullBit(oldp+60,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bne));
    bufp->fullBit(oldp+61,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lbu));
    bufp->fullBit(oldp+62,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sb));
    bufp->fullBit(oldp+63,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sub));
    bufp->fullBit(oldp+64,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_srai));
    bufp->fullBit(oldp+65,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_andi));
    bufp->fullBit(oldp+66,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sll));
    bufp->fullBit(oldp+67,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_and));
    bufp->fullBit(oldp+68,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sh));
    bufp->fullBit(oldp+69,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_xori));
    bufp->fullBit(oldp+70,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bge));
    bufp->fullBit(oldp+71,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bgeu));
    bufp->fullBit(oldp+72,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_slli));
    bufp->fullBit(oldp+73,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_blt));
    bufp->fullBit(oldp+74,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bltu));
    bufp->fullBit(oldp+75,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_slt));
    bufp->fullBit(oldp+76,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lh));
    bufp->fullBit(oldp+77,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lhu));
    bufp->fullBit(oldp+78,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_srl));
    bufp->fullBit(oldp+79,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_srli));
    bufp->fullBit(oldp+80,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sra));
    bufp->fullBit(oldp+81,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lb));
    bufp->fullBit(oldp+82,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_slti));
    bufp->fullBit(oldp+83,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_ori));
    bufp->fullIData(oldp+84,(vlSelf->npc__DOT__idu_inst__DOT__immI),32);
    bufp->fullIData(oldp+85,((0xfffff000U & vlSelf->npc__DOT__inst)),32);
    bufp->fullIData(oldp+86,(vlSelf->npc__DOT__idu_inst__DOT__immS),32);
    bufp->fullIData(oldp+87,(vlSelf->npc__DOT__idu_inst__DOT__immB),32);
    bufp->fullIData(oldp+88,(vlSelf->npc__DOT__idu_inst__DOT__immJ),32);
    bufp->fullCData(oldp+89,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+90,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+91,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+92,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+93,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+94,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit));
    bufp->fullWData(oldp+95,(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut),1482);
    bufp->fullIData(oldp+142,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+143,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+144,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+145,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+146,(vlSelf->npc__DOT__u_ALU__DOT__add_overflow));
    bufp->fullBit(oldp+147,(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow));
    bufp->fullBit(oldp+148,((1U & (IData)((1ULL & (
                                                   ((QData)((IData)(vlSelf->npc__DOT__ALU_A)) 
                                                    + 
                                                    ((QData)((IData)(vlSelf->npc__DOT__ALU_B)) 
                                                     + (QData)((IData)(vlSelf->npc__DOT__ALU_Cin)))) 
                                                   >> 0x20U))))));
    bufp->fullBit(oldp+149,((1U & (IData)((1ULL & (
                                                   (1ULL 
                                                    + 
                                                    ((QData)((IData)(vlSelf->npc__DOT__ALU_A)) 
                                                     + (QData)((IData)(
                                                                       (~ vlSelf->npc__DOT__ALU_B))))) 
                                                   >> 0x20U))))));
    bufp->fullIData(oldp+150,(vlSelf->npc__DOT__u_ALU__DOT__add_result),32);
    bufp->fullIData(oldp+151,(vlSelf->npc__DOT__u_ALU__DOT__sub_result),32);
    bufp->fullQData(oldp+152,(vlSelf->npc__DOT__u_ALU__DOT__out),33);
    bufp->fullIData(oldp+154,((~ vlSelf->npc__DOT__ALU_B)),32);
    __Vtemp_hd5abb2a0__0[0U] = (IData)((0xe00000000ULL 
                                        | (QData)((IData)(vlSelf->__VdfgTmp_hfe872291__0))));
    __Vtemp_hd5abb2a0__0[1U] = ((vlSelf->__VdfgTmp_hfeb03756__0 
                                 << 4U) | (IData)((
                                                   (0xe00000000ULL 
                                                    | (QData)((IData)(vlSelf->__VdfgTmp_hfe872291__0))) 
                                                   >> 0x20U)));
    __Vtemp_hd5abb2a0__0[2U] = (0xc0U | ((vlSelf->__VdfgTmp_h71bd92c6__0 
                                          << 8U) | 
                                         (vlSelf->__VdfgTmp_hfeb03756__0 
                                          >> 0x1cU)));
    __Vtemp_hd5abb2a0__0[3U] = (0xa00U | ((vlSelf->__VdfgTmp_h7497e9b0__0 
                                           << 0xcU) 
                                          | (vlSelf->__VdfgTmp_h71bd92c6__0 
                                             >> 0x18U)));
    __Vtemp_hd5abb2a0__0[4U] = (0x8000U | ((vlSelf->__VdfgTmp_h743af046__0 
                                            << 0x10U) 
                                           | (vlSelf->__VdfgTmp_h7497e9b0__0 
                                              >> 0x14U)));
    __Vtemp_hd5abb2a0__0[5U] = (0x60000U | ((vlSelf->__VdfgTmp_hfeab4dac__0 
                                             << 0x14U) 
                                            | (vlSelf->__VdfgTmp_h743af046__0 
                                               >> 0x10U)));
    __Vtemp_hd5abb2a0__0[6U] = (0x400000U | ((vlSelf->npc__DOT__u_ALU__DOT__sub_result 
                                              << 0x18U) 
                                             | (vlSelf->__VdfgTmp_hfeab4dac__0 
                                                >> 0xcU)));
    __Vtemp_hd5abb2a0__0[7U] = (0x2000000U | ((vlSelf->npc__DOT__u_ALU__DOT__add_result 
                                               << 0x1cU) 
                                              | (((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow) 
                                                  << 0x18U) 
                                                 | (vlSelf->npc__DOT__u_ALU__DOT__sub_result 
                                                    >> 8U))));
    __Vtemp_hd5abb2a0__0[8U] = (((IData)(vlSelf->npc__DOT__u_ALU__DOT__add_overflow) 
                                 << 0x1cU) | (vlSelf->npc__DOT__u_ALU__DOT__add_result 
                                              >> 4U));
    bufp->fullWData(oldp+155,(__Vtemp_hd5abb2a0__0),288);
    bufp->fullQData(oldp+164,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),36);
    bufp->fullQData(oldp+166,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),36);
    bufp->fullQData(oldp+168,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2]),36);
    bufp->fullQData(oldp+170,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3]),36);
    bufp->fullQData(oldp+172,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[4]),36);
    bufp->fullQData(oldp+174,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[5]),36);
    bufp->fullQData(oldp+176,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[6]),36);
    bufp->fullQData(oldp+178,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[7]),36);
    bufp->fullQData(oldp+180,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0]),33);
    bufp->fullQData(oldp+182,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1]),33);
    bufp->fullQData(oldp+184,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2]),33);
    bufp->fullQData(oldp+186,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3]),33);
    bufp->fullQData(oldp+188,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[4]),33);
    bufp->fullQData(oldp+190,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[5]),33);
    bufp->fullQData(oldp+192,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[6]),33);
    bufp->fullQData(oldp+194,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[7]),33);
    bufp->fullQData(oldp+196,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out),33);
    bufp->fullBit(oldp+198,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+199,(((((0x6fU == (0x7fU & vlSelf->npc__DOT__inst)) 
                                 | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr)) 
                                | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_beq) 
                                    | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bne) 
                                       | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bge) 
                                          | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bgeu) 
                                             | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_blt) 
                                                | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bltu)))))) 
                                   & ((0U == (7U & 
                                              (vlSelf->npc__DOT__inst 
                                               >> 0xcU)))
                                       ? (vlSelf->npc__DOT__rf_rdata1 
                                          == vlSelf->npc__DOT__rf_rdata2)
                                       : ((1U == (7U 
                                                  & (vlSelf->npc__DOT__inst 
                                                     >> 0xcU)))
                                           ? (vlSelf->npc__DOT__rf_rdata1 
                                              != vlSelf->npc__DOT__rf_rdata2)
                                           : ((5U == 
                                               (7U 
                                                & (vlSelf->npc__DOT__inst 
                                                   >> 0xcU)))
                                               ? VL_GTES_III(32, vlSelf->npc__DOT__rf_rdata1, vlSelf->npc__DOT__rf_rdata2)
                                               : ((7U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->npc__DOT__inst 
                                                       >> 0xcU)))
                                                   ? 
                                                  (vlSelf->npc__DOT__rf_rdata1 
                                                   >= vlSelf->npc__DOT__rf_rdata2)
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->npc__DOT__inst 
                                                        >> 0xcU)))
                                                    ? 
                                                   VL_LTS_III(32, vlSelf->npc__DOT__rf_rdata1, vlSelf->npc__DOT__rf_rdata2)
                                                    : (IData)(
                                                              ((0x6000U 
                                                                == 
                                                                (0x7000U 
                                                                 & vlSelf->npc__DOT__inst)) 
                                                               & (vlSelf->npc__DOT__rf_rdata1 
                                                                  < vlSelf->npc__DOT__rf_rdata2))))))))))
                                ? ((IData)((vlSelf->npc__DOT__u_ALU__DOT__out 
                                            >> 1U)) 
                                   << 1U) : ((IData)(4U) 
                                             + vlSelf->npc__DOT__pc))),32);
    bufp->fullIData(oldp+200,(vlSelf->npc__DOT__pc),32);
    bufp->fullIData(oldp+201,(((IData)(4U) + vlSelf->npc__DOT__pc)),32);
    bufp->fullIData(oldp+202,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0]),32);
    bufp->fullIData(oldp+203,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[1]),32);
    bufp->fullIData(oldp+204,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[2]),32);
    bufp->fullIData(oldp+205,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[3]),32);
    bufp->fullIData(oldp+206,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[4]),32);
    bufp->fullIData(oldp+207,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[5]),32);
    bufp->fullIData(oldp+208,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[6]),32);
    bufp->fullIData(oldp+209,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[7]),32);
    bufp->fullIData(oldp+210,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[8]),32);
    bufp->fullIData(oldp+211,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[9]),32);
    bufp->fullIData(oldp+212,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[10]),32);
    bufp->fullIData(oldp+213,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[11]),32);
    bufp->fullIData(oldp+214,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[12]),32);
    bufp->fullIData(oldp+215,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[13]),32);
    bufp->fullIData(oldp+216,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[14]),32);
    bufp->fullIData(oldp+217,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[15]),32);
    bufp->fullIData(oldp+218,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[16]),32);
    bufp->fullIData(oldp+219,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[17]),32);
    bufp->fullIData(oldp+220,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[18]),32);
    bufp->fullIData(oldp+221,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[19]),32);
    bufp->fullIData(oldp+222,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[20]),32);
    bufp->fullIData(oldp+223,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[21]),32);
    bufp->fullIData(oldp+224,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[22]),32);
    bufp->fullIData(oldp+225,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[23]),32);
    bufp->fullIData(oldp+226,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[24]),32);
    bufp->fullIData(oldp+227,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[25]),32);
    bufp->fullIData(oldp+228,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[26]),32);
    bufp->fullIData(oldp+229,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[27]),32);
    bufp->fullIData(oldp+230,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[28]),32);
    bufp->fullIData(oldp+231,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[29]),32);
    bufp->fullIData(oldp+232,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[30]),32);
    bufp->fullIData(oldp+233,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[31]),32);
    bufp->fullIData(oldp+234,(vlSelf->npc__DOT__u_RegisterFile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+235,(vlSelf->clk));
    bufp->fullBit(oldp+236,(vlSelf->rst));
    bufp->fullBit(oldp+237,((1U & (~ (IData)(vlSelf->rst)))));
    bufp->fullBit(oldp+238,(vlSelf->npc__DOT__ALU_Cin));
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
