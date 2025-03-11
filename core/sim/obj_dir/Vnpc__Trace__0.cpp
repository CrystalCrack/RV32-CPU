// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vnpc__Syms.h"


void Vnpc___024root__trace_chg_0_sub_0(Vnpc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vnpc___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root__trace_chg_0\n"); );
    // Init
    Vnpc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnpc___024root*>(voidSelf);
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vnpc___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vnpc___024root__trace_chg_0_sub_0(Vnpc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root__trace_chg_0_sub_0\n"); );
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<9>/*287:0*/ __Vtemp_7;
    VlWide<9>/*287:0*/ __Vtemp_8;
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+1,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+2,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+3,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+4,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+5,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[5]),3);
        bufp->chgCData(oldp+6,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[6]),3);
        bufp->chgCData(oldp+7,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[7]),3);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgCData(oldp+8,(vlSelfRef.npc__DOT__rs1),5);
        bufp->chgCData(oldp+9,((0x1fU & (vlSelfRef.npc__DOT__inst 
                                         >> 0x14U))),5);
        bufp->chgCData(oldp+10,(((IData)(vlSelfRef.npc__DOT__stop_sim)
                                  ? 0xaU : (0x1fU & 
                                            (vlSelfRef.npc__DOT__inst 
                                             >> 7U)))),5);
        bufp->chgIData(oldp+11,(vlSelfRef.npc__DOT__imm),32);
        bufp->chgCData(oldp+12,((7U & (vlSelfRef.npc__DOT__inst 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+13,((vlSelfRef.npc__DOT__inst 
                                 >> 0x19U)),7);
        bufp->chgCData(oldp+14,((0x7fU & vlSelfRef.npc__DOT__inst)),7);
        bufp->chgCData(oldp+15,(vlSelfRef.npc__DOT__ALU_op),3);
        bufp->chgCData(oldp+16,(vlSelfRef.npc__DOT__rdregsrc),3);
        bufp->chgCData(oldp+17,(vlSelfRef.npc__DOT__cmp_type),2);
        bufp->chgBit(oldp+18,(vlSelfRef.npc__DOT__ALUsrc1));
        bufp->chgBit(oldp+19,(vlSelfRef.npc__DOT__ALUsrc2));
        bufp->chgBit(oldp+20,(((0x6fU == (0x7fU & vlSelfRef.npc__DOT__inst)) 
                               | (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_jalr))));
        bufp->chgBit(oldp+21,(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_beq) 
                               | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bne) 
                                  | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bge) 
                                     | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bgeu) 
                                        | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_blt) 
                                           | (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bltu))))))));
        bufp->chgBit(oldp+22,((4U != (IData)(vlSelfRef.npc__DOT__rdregsrc))));
        bufp->chgIData(oldp+23,(((0U == (IData)(vlSelfRef.npc__DOT__rdregsrc))
                                  ? (IData)(vlSelfRef.npc__DOT__u_ALU__DOT__out)
                                  : ((1U == (IData)(vlSelfRef.npc__DOT__rdregsrc))
                                      ? ((0U == (7U 
                                                 & (vlSelfRef.npc__DOT__inst 
                                                    >> 0xcU)))
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelfRef.npc__DOT__drdata 
                                                             >> 7U)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & vlSelfRef.npc__DOT__drdata))
                                          : ((4U == 
                                              (7U & 
                                               (vlSelfRef.npc__DOT__inst 
                                                >> 0xcU)))
                                              ? (0xffU 
                                                 & vlSelfRef.npc__DOT__drdata)
                                              : ((1U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.npc__DOT__inst 
                                                      >> 0xcU)))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.npc__DOT__drdata 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelfRef.npc__DOT__drdata))
                                                  : 
                                                 ((5U 
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
                                              ? ((0U 
                                                  == (IData)(vlSelfRef.npc__DOT__cmp_type))
                                                  ? 
                                                 (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != (IData)(vlSelfRef.npc__DOT__u_ALU__DOT__out)))))
                                                  : 
                                                 ((1U 
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
        bufp->chgIData(oldp+24,(vlSelfRef.npc__DOT__rf_rdata1),32);
        bufp->chgIData(oldp+25,(vlSelfRef.npc__DOT__rf_rdata2),32);
        bufp->chgIData(oldp+26,((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__out)),32);
        bufp->chgIData(oldp+27,(vlSelfRef.npc__DOT__ALU_A),32);
        bufp->chgIData(oldp+28,(vlSelfRef.npc__DOT__ALU_B),32);
        bufp->chgBit(oldp+29,((1U & (~ (IData)((0U 
                                                != (IData)(vlSelfRef.npc__DOT__u_ALU__DOT__out)))))));
        bufp->chgBit(oldp+30,((1U & (IData)((vlSelfRef.npc__DOT__u_ALU__DOT__out 
                                             >> 0x20U)))));
        bufp->chgBit(oldp+31,((1U & ((0U == (IData)(vlSelfRef.npc__DOT__ALU_op))
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
                                                       >> 0x20U))))))));
        bufp->chgBit(oldp+32,((1U & ((IData)((0x80000000ULL 
                                              == (0x180000000ULL 
                                                  & vlSelfRef.npc__DOT__u_ALU__DOT__out))) 
                                     | (IData)((0x100000000ULL 
                                                == 
                                                (0x180000000ULL 
                                                 & vlSelfRef.npc__DOT__u_ALU__DOT__out)))))));
        bufp->chgBit(oldp+33,((1U & (~ ((0U == (IData)(vlSelfRef.npc__DOT__ALU_op))
                                         ? (IData)(
                                                   (1ULL 
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
        bufp->chgBit(oldp+34,(vlSelfRef.npc__DOT__stop_sim));
        bufp->chgBit(oldp+35,((((0x6fU == (0x7fU & vlSelfRef.npc__DOT__inst)) 
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
                                      : ((1U == (7U 
                                                 & (vlSelfRef.npc__DOT__inst 
                                                    >> 0xcU)))
                                          ? (vlSelfRef.npc__DOT__rf_rdata1 
                                             != vlSelfRef.npc__DOT__rf_rdata2)
                                          : ((5U == 
                                              (7U & 
                                               (vlSelfRef.npc__DOT__inst 
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
                                                                 < vlSelfRef.npc__DOT__rf_rdata2))))))))))));
        bufp->chgBit(oldp+36,((((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_beq) 
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
                                                                 < vlSelfRef.npc__DOT__rf_rdata2)))))))))));
        bufp->chgIData(oldp+37,(vlSelfRef.npc__DOT__inst),32);
        bufp->chgCData(oldp+38,(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sw)
                                  ? 0xfU : ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sb)
                                             ? 1U : 
                                            ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sh)
                                              ? 3U : 0U)))),8);
        bufp->chgIData(oldp+39,(vlSelfRef.npc__DOT__drdata),32);
        bufp->chgBit(oldp+40,(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sw) 
                               | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lw) 
                                  | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lbu) 
                                     | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sb) 
                                        | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sh) 
                                           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lh) 
                                              | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lhu) 
                                                 | (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lb))))))))));
        bufp->chgBit(oldp+41,(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sw) 
                               | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sb) 
                                  | (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sh)))));
        bufp->chgIData(oldp+42,(((0U == (7U & (vlSelfRef.npc__DOT__inst 
                                               >> 0xcU)))
                                  ? (((- (IData)((1U 
                                                  & (vlSelfRef.npc__DOT__drdata 
                                                     >> 7U)))) 
                                      << 8U) | (0xffU 
                                                & vlSelfRef.npc__DOT__drdata))
                                  : ((4U == (7U & (vlSelfRef.npc__DOT__inst 
                                                   >> 0xcU)))
                                      ? (0xffU & vlSelfRef.npc__DOT__drdata)
                                      : ((1U == (7U 
                                                 & (vlSelfRef.npc__DOT__inst 
                                                    >> 0xcU)))
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelfRef.npc__DOT__drdata 
                                                             >> 0xfU)))) 
                                              << 0x10U) 
                                             | (0xffffU 
                                                & vlSelfRef.npc__DOT__drdata))
                                          : ((5U == 
                                              (7U & 
                                               (vlSelfRef.npc__DOT__inst 
                                                >> 0xcU)))
                                              ? (0xffffU 
                                                 & vlSelfRef.npc__DOT__drdata)
                                              : vlSelfRef.npc__DOT__drdata))))),32);
        bufp->chgIData(oldp+43,(((0U == (IData)(vlSelfRef.npc__DOT__cmp_type))
                                  ? (1U & (~ (IData)(
                                                     (0U 
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
                                          : (1U & (~ 
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
                                                                   >> 0x20U))))))))))),32);
        bufp->chgCData(oldp+44,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name),6);
        bufp->chgBit(oldp+45,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_addi));
        bufp->chgBit(oldp+46,((0x100073U == vlSelfRef.npc__DOT__inst)));
        bufp->chgBit(oldp+47,((0x17U == (0x7fU & vlSelfRef.npc__DOT__inst))));
        bufp->chgBit(oldp+48,((0x37U == (0x7fU & vlSelfRef.npc__DOT__inst))));
        bufp->chgBit(oldp+49,((0x6fU == (0x7fU & vlSelfRef.npc__DOT__inst))));
        bufp->chgBit(oldp+50,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_jalr));
        bufp->chgBit(oldp+51,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sw));
        bufp->chgBit(oldp+52,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lw));
        bufp->chgBit(oldp+53,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_add));
        bufp->chgBit(oldp+54,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_beq));
        bufp->chgBit(oldp+55,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sltu));
        bufp->chgBit(oldp+56,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_xor));
        bufp->chgBit(oldp+57,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_or));
        bufp->chgBit(oldp+58,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sltiu));
        bufp->chgBit(oldp+59,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bne));
        bufp->chgBit(oldp+60,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lbu));
        bufp->chgBit(oldp+61,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sb));
        bufp->chgBit(oldp+62,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sub));
        bufp->chgBit(oldp+63,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_srai));
        bufp->chgBit(oldp+64,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_andi));
        bufp->chgBit(oldp+65,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sll));
        bufp->chgBit(oldp+66,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_and));
        bufp->chgBit(oldp+67,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sh));
        bufp->chgBit(oldp+68,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_xori));
        bufp->chgBit(oldp+69,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bge));
        bufp->chgBit(oldp+70,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bgeu));
        bufp->chgBit(oldp+71,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_slli));
        bufp->chgBit(oldp+72,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_blt));
        bufp->chgBit(oldp+73,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bltu));
        bufp->chgBit(oldp+74,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_slt));
        bufp->chgBit(oldp+75,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lh));
        bufp->chgBit(oldp+76,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lhu));
        bufp->chgBit(oldp+77,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_srl));
        bufp->chgBit(oldp+78,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_srli));
        bufp->chgBit(oldp+79,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sra));
        bufp->chgBit(oldp+80,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lb));
        bufp->chgBit(oldp+81,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_slti));
        bufp->chgBit(oldp+82,(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_ori));
        bufp->chgIData(oldp+83,(vlSelfRef.npc__DOT__idu_inst__DOT__immI),32);
        bufp->chgIData(oldp+84,((0xfffff000U & vlSelfRef.npc__DOT__inst)),32);
        bufp->chgIData(oldp+85,(vlSelfRef.npc__DOT__idu_inst__DOT__immS),32);
        bufp->chgIData(oldp+86,(vlSelfRef.npc__DOT__idu_inst__DOT__immB),32);
        bufp->chgIData(oldp+87,(vlSelfRef.npc__DOT__idu_inst__DOT__immJ),32);
        bufp->chgCData(oldp+88,(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out),3);
        bufp->chgBit(oldp+89,(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+90,(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+91,(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+92,(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+93,(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit));
        bufp->chgWData(oldp+94,(vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut),1482);
        bufp->chgIData(oldp+141,(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+142,(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+143,(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out),3);
        bufp->chgBit(oldp+144,(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+145,(vlSelfRef.npc__DOT__u_ALU__DOT__add_overflow));
        bufp->chgBit(oldp+146,(vlSelfRef.npc__DOT__u_ALU__DOT__sub_overflow));
        bufp->chgBit(oldp+147,((1U & (IData)((1ULL 
                                              & (((QData)((IData)(vlSelfRef.npc__DOT__ALU_A)) 
                                                  + 
                                                  ((QData)((IData)(vlSelfRef.npc__DOT__ALU_B)) 
                                                   + (QData)((IData)(vlSelfRef.npc__DOT__ALU_Cin)))) 
                                                 >> 0x20U))))));
        bufp->chgBit(oldp+148,((1U & (IData)((1ULL 
                                              & ((1ULL 
                                                  + 
                                                  ((QData)((IData)(vlSelfRef.npc__DOT__ALU_A)) 
                                                   + (QData)((IData)(
                                                                     (~ vlSelfRef.npc__DOT__ALU_B))))) 
                                                 >> 0x20U))))));
        bufp->chgIData(oldp+149,(vlSelfRef.npc__DOT__u_ALU__DOT__add_result),32);
        bufp->chgIData(oldp+150,(vlSelfRef.npc__DOT__u_ALU__DOT__sub_result),32);
        bufp->chgQData(oldp+151,(vlSelfRef.npc__DOT__u_ALU__DOT__out),33);
        bufp->chgIData(oldp+153,((~ vlSelfRef.npc__DOT__ALU_B)),32);
        __Vtemp_7[5U] = (((IData)((6ULL | ((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_0)) 
                                           << 4U))) 
                          << 0x10U) | (((0xffU & ((IData)(
                                                          (8ULL 
                                                           | ((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_1)) 
                                                              << 4U))) 
                                                  >> 0x14U)) 
                                        | ((IData)(
                                                   ((0xaULL 
                                                     | ((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_2)) 
                                                        << 4U)) 
                                                    >> 0x20U)) 
                                           >> 0x18U)) 
                                       | ((0xf00U & 
                                           ((IData)(
                                                    (8ULL 
                                                     | ((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_1)) 
                                                        << 4U))) 
                                            >> 0x14U)) 
                                          | ((IData)(
                                                     ((8ULL 
                                                       | ((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_1)) 
                                                          << 4U)) 
                                                      >> 0x20U)) 
                                             << 0xcU))));
        __Vtemp_7[7U] = (((0xffffU & ((IData)((4ULL 
                                               | ((QData)((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__sub_result)) 
                                                  << 4U))) 
                                      >> 0xcU)) | ((IData)(
                                                           ((6ULL 
                                                             | ((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_0)) 
                                                                << 4U)) 
                                                            >> 0x20U)) 
                                                   >> 0x10U)) 
                         | (((IData)((((QData)((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__add_overflow)) 
                                       << 0x24U) | 
                                      (((QData)((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__add_result)) 
                                        << 4U) | (QData)((IData)(
                                                                 (2U 
                                                                  | (IData)(vlSelfRef.npc__DOT__u_ALU__DOT__sub_overflow))))))) 
                             << 0x18U) | ((0xf0000U 
                                           & ((IData)(
                                                      (4ULL 
                                                       | ((QData)((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__sub_result)) 
                                                          << 4U))) 
                                              >> 0xcU)) 
                                          | ((IData)(
                                                     ((4ULL 
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
                         | ((0xff0000U & ((IData)((
                                                   ((QData)((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__add_overflow)) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__add_result)) 
                                                       << 4U) 
                                                      | (QData)((IData)(
                                                                        (2U 
                                                                         | (IData)(vlSelfRef.npc__DOT__u_ALU__DOT__sub_overflow))))))) 
                                          >> 8U)) | 
                            ((IData)(((((QData)((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__add_overflow)) 
                                        << 0x24U) | 
                                       (((QData)((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__add_result)) 
                                         << 4U) | (QData)((IData)(
                                                                  (2U 
                                                                   | (IData)(vlSelfRef.npc__DOT__u_ALU__DOT__sub_overflow)))))) 
                                      >> 0x20U)) << 0x18U)));
        __Vtemp_8[0U] = (IData)((0xe00000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_5))));
        __Vtemp_8[1U] = ((vlSelfRef.__VdfgRegularize_hd87f99a1_1_4 
                          << 4U) | (IData)(((0xe00000000ULL 
                                             | (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_5))) 
                                            >> 0x20U)));
        __Vtemp_8[2U] = (((IData)((0xcULL | ((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_3)) 
                                             << 4U))) 
                          << 4U) | (vlSelfRef.__VdfgRegularize_hd87f99a1_1_4 
                                    >> 0x1cU));
        __Vtemp_8[3U] = (((IData)((0xaULL | ((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_2)) 
                                             << 4U))) 
                          << 8U) | (((IData)((0xcULL 
                                              | ((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_3)) 
                                                 << 4U))) 
                                     >> 0x1cU) | ((IData)(
                                                          ((0xcULL 
                                                            | ((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_3)) 
                                                               << 4U)) 
                                                           >> 0x20U)) 
                                                  << 4U)));
        __Vtemp_8[4U] = (((IData)((0xaULL | ((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_2)) 
                                             << 4U))) 
                          >> 0x18U) | (((IData)((8ULL 
                                                 | ((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_1)) 
                                                    << 4U))) 
                                        << 0xcU) | 
                                       ((IData)(((0xaULL 
                                                  | ((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_2)) 
                                                     << 4U)) 
                                                 >> 0x20U)) 
                                        << 8U)));
        __Vtemp_8[5U] = __Vtemp_7[5U];
        __Vtemp_8[6U] = (((IData)((6ULL | ((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_0)) 
                                           << 4U))) 
                          >> 0x10U) | (((IData)((4ULL 
                                                 | ((QData)((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__sub_result)) 
                                                    << 4U))) 
                                        << 0x14U) | 
                                       ((IData)(((6ULL 
                                                  | ((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_0)) 
                                                     << 4U)) 
                                                 >> 0x20U)) 
                                        << 0x10U)));
        __Vtemp_8[7U] = __Vtemp_7[7U];
        __Vtemp_8[8U] = __Vtemp_7[8U];
        bufp->chgWData(oldp+154,(__Vtemp_8),288);
        bufp->chgQData(oldp+163,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),36);
        bufp->chgQData(oldp+165,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),36);
        bufp->chgQData(oldp+167,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2]),36);
        bufp->chgQData(oldp+169,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3]),36);
        bufp->chgQData(oldp+171,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[4]),36);
        bufp->chgQData(oldp+173,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[5]),36);
        bufp->chgQData(oldp+175,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[6]),36);
        bufp->chgQData(oldp+177,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[7]),36);
        bufp->chgQData(oldp+179,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0]),33);
        bufp->chgQData(oldp+181,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1]),33);
        bufp->chgQData(oldp+183,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2]),33);
        bufp->chgQData(oldp+185,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3]),33);
        bufp->chgQData(oldp+187,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[4]),33);
        bufp->chgQData(oldp+189,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[5]),33);
        bufp->chgQData(oldp+191,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[6]),33);
        bufp->chgQData(oldp+193,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[7]),33);
        bufp->chgQData(oldp+195,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out),33);
        bufp->chgBit(oldp+197,(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+198,(((((0x6fU == (0x7fU 
                                               & vlSelfRef.npc__DOT__inst)) 
                                    | (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_jalr)) 
                                   | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_beq) 
                                       | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bne) 
                                          | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bge) 
                                             | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bgeu) 
                                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_blt) 
                                                   | (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bltu)))))) 
                                      & ((0U == (7U 
                                                 & (vlSelfRef.npc__DOT__inst 
                                                    >> 0xcU)))
                                          ? (vlSelfRef.npc__DOT__rf_rdata1 
                                             == vlSelfRef.npc__DOT__rf_rdata2)
                                          : ((1U == 
                                              (7U & 
                                               (vlSelfRef.npc__DOT__inst 
                                                >> 0xcU)))
                                              ? (vlSelfRef.npc__DOT__rf_rdata1 
                                                 != vlSelfRef.npc__DOT__rf_rdata2)
                                              : ((5U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.npc__DOT__inst 
                                                      >> 0xcU)))
                                                  ? 
                                                 VL_GTES_III(32, vlSelfRef.npc__DOT__rf_rdata1, vlSelfRef.npc__DOT__rf_rdata2)
                                                  : 
                                                 ((7U 
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
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+199,(vlSelfRef.npc__DOT__pc),32);
        bufp->chgIData(oldp+200,(((IData)(4U) + vlSelfRef.npc__DOT__pc)),32);
        bufp->chgIData(oldp+201,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[0]),32);
        bufp->chgIData(oldp+202,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[1]),32);
        bufp->chgIData(oldp+203,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[2]),32);
        bufp->chgIData(oldp+204,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[3]),32);
        bufp->chgIData(oldp+205,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[4]),32);
        bufp->chgIData(oldp+206,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[5]),32);
        bufp->chgIData(oldp+207,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[6]),32);
        bufp->chgIData(oldp+208,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[7]),32);
        bufp->chgIData(oldp+209,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[8]),32);
        bufp->chgIData(oldp+210,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[9]),32);
        bufp->chgIData(oldp+211,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[10]),32);
        bufp->chgIData(oldp+212,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[11]),32);
        bufp->chgIData(oldp+213,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[12]),32);
        bufp->chgIData(oldp+214,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[13]),32);
        bufp->chgIData(oldp+215,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[14]),32);
        bufp->chgIData(oldp+216,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[15]),32);
        bufp->chgIData(oldp+217,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[16]),32);
        bufp->chgIData(oldp+218,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[17]),32);
        bufp->chgIData(oldp+219,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[18]),32);
        bufp->chgIData(oldp+220,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[19]),32);
        bufp->chgIData(oldp+221,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[20]),32);
        bufp->chgIData(oldp+222,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[21]),32);
        bufp->chgIData(oldp+223,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[22]),32);
        bufp->chgIData(oldp+224,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[23]),32);
        bufp->chgIData(oldp+225,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[24]),32);
        bufp->chgIData(oldp+226,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[25]),32);
        bufp->chgIData(oldp+227,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[26]),32);
        bufp->chgIData(oldp+228,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[27]),32);
        bufp->chgIData(oldp+229,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[28]),32);
        bufp->chgIData(oldp+230,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[29]),32);
        bufp->chgIData(oldp+231,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[30]),32);
        bufp->chgIData(oldp+232,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[31]),32);
        bufp->chgIData(oldp+233,(vlSelfRef.npc__DOT__u_RegisterFile__DOT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+234,(vlSelfRef.clk));
    bufp->chgBit(oldp+235,(vlSelfRef.rst));
    bufp->chgBit(oldp+236,((1U & (~ (IData)(vlSelfRef.rst)))));
}

void Vnpc___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root__trace_cleanup\n"); );
    // Init
    Vnpc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnpc___024root*>(voidSelf);
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
