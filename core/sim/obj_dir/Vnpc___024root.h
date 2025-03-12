// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnpc.h for the primary calling header

#ifndef VERILATED_VNPC___024ROOT_H_
#define VERILATED_VNPC___024ROOT_H_  // guard

#include "verilated.h"

class Vnpc__Syms;

class Vnpc___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        CData/*4:0*/ npc__DOT__rs1;
        CData/*2:0*/ npc__DOT__ALU_op;
        CData/*2:0*/ npc__DOT__rdregsrc;
        CData/*1:0*/ npc__DOT__cmp_type;
        CData/*0:0*/ npc__DOT__ALUsrc1;
        CData/*0:0*/ npc__DOT__ALUsrc2;
        CData/*0:0*/ npc__DOT__ALU_Cin;
        CData/*0:0*/ npc__DOT__stop_sim;
        CData/*5:0*/ npc__DOT__idu_inst__DOT__inst_name;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__inst_is_addi;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__inst_is_jalr;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__inst_is_sw;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__inst_is_lw;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__inst_is_add;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__inst_is_beq;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__inst_is_sltu;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__inst_is_xor;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__inst_is_or;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__inst_is_sltiu;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__inst_is_bne;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__inst_is_lbu;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__inst_is_sb;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__inst_is_sub;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__inst_is_srai;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__inst_is_andi;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__inst_is_sll;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__inst_is_and;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__inst_is_sh;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__inst_is_xori;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__inst_is_bge;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__inst_is_bgeu;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__inst_is_slli;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__inst_is_blt;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__inst_is_bltu;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__inst_is_slt;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__inst_is_lh;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__inst_is_lhu;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__inst_is_srl;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__inst_is_srli;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__inst_is_sra;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__inst_is_lb;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__inst_is_slti;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__inst_is_ori;
        CData/*0:0*/ npc__DOT__idu_inst__DOT____VdfgTmp_he69f398c__0;
        CData/*0:0*/ npc__DOT__idu_inst__DOT____VdfgTmp_h873f971e__0;
        CData/*0:0*/ npc__DOT__idu_inst__DOT____VdfgTmp_hd3ddd1c8__0;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit;
        CData/*2:0*/ npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit;
        CData/*2:0*/ npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit;
        CData/*0:0*/ npc__DOT__u_ALU__DOT__add_overflow;
        CData/*0:0*/ npc__DOT__u_ALU__DOT__sub_overflow;
        CData/*0:0*/ npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ npc__DOT__imm;
        IData/*31:0*/ npc__DOT__rf_rdata1;
    };
    struct {
        IData/*31:0*/ npc__DOT__rf_rdata2;
        IData/*31:0*/ npc__DOT__ALU_A;
        IData/*31:0*/ npc__DOT__ALU_B;
        IData/*31:0*/ npc__DOT__pc;
        IData/*31:0*/ npc__DOT__inst;
        IData/*31:0*/ npc__DOT__drdata;
        IData/*31:0*/ npc__DOT__u_PC__DOT__dnpc;
        IData/*31:0*/ npc__DOT__idu_inst__DOT__immI;
        IData/*31:0*/ npc__DOT__idu_inst__DOT__immS;
        IData/*31:0*/ npc__DOT__idu_inst__DOT__immB;
        IData/*31:0*/ npc__DOT__idu_inst__DOT__immJ;
        VlWide<47>/*1481:0*/ npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut;
        IData/*31:0*/ npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out;
        IData/*31:0*/ npc__DOT__u_RegisterFile__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ npc__DOT__u_ALU__DOT__add_result;
        IData/*31:0*/ npc__DOT__u_ALU__DOT__sub_result;
        IData/*31:0*/ __VdfgTmp_hfeab4dac__0;
        IData/*31:0*/ __VdfgTmp_h743af046__0;
        IData/*31:0*/ __VdfgTmp_h7497e9b0__0;
        IData/*31:0*/ __VdfgTmp_h71bd92c6__0;
        IData/*31:0*/ __VdfgTmp_hfeb03756__0;
        IData/*31:0*/ __VdfgTmp_hfe872291__0;
        IData/*31:0*/ __Vfunc_npc__DOT__inst_mem__DOT__pmem_read__1__Vfuncout;
        IData/*31:0*/ __Vfunc_npc__DOT__data_mem__DOT__pmem_read__2__Vfuncout;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*32:0*/ npc__DOT__u_ALU__DOT__out;
        QData/*32:0*/ npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out;
        VlUnpacked<CData/*5:0*/, 39> npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 39> npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*5:0*/, 39> npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*2:0*/, 39> npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*5:0*/, 39> npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*2:0*/, 39> npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*5:0*/, 39> npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 39> npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*5:0*/, 39> npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 39> npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list;
        VlUnpacked<IData/*31:0*/, 32> npc__DOT__u_RegisterFile__DOT__rf;
        VlUnpacked<QData/*35:0*/, 8> npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 8> npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*32:0*/, 8> npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vnpc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vnpc___024root(Vnpc__Syms* symsp, const char* v__name);
    ~Vnpc___024root();
    VL_UNCOPYABLE(Vnpc___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
