// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vnpc__Syms.h"
#include "Vnpc.h"
#include "Vnpc___024root.h"

void Vnpc___024root____Vdpiexp_npc__DOT__get_pc_inst_TOP(Vnpc__Syms* __restrict vlSymsp, IData/*31:0*/ &cpu_pc, IData/*31:0*/ &cpu_inst);
void Vnpc___024root____Vdpiexp_npc__DOT__u_RegisterFile__DOT__get_reg_TOP(Vnpc__Syms* __restrict vlSymsp, IData/*31:0*/ addr, IData/*31:0*/ &reg_data);

// FUNCTIONS
Vnpc__Syms::~Vnpc__Syms()
{
}

Vnpc__Syms::Vnpc__Syms(VerilatedContext* contextp, const char* namep, Vnpc* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_npc.configure(this, name(), "npc", "npc", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_npc__u_RegisterFile.configure(this, name(), "npc.u_RegisterFile", "u_RegisterFile", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_npc.exportInsert(__Vfinal, "get_pc_inst", (void*)(&Vnpc___024root____Vdpiexp_npc__DOT__get_pc_inst_TOP));
        __Vscope_npc__u_RegisterFile.exportInsert(__Vfinal, "get_reg", (void*)(&Vnpc___024root____Vdpiexp_npc__DOT__u_RegisterFile__DOT__get_reg_TOP));
    }
}
