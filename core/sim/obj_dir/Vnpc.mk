# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vnpc.mk

default: Vnpc

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = Vnpc
# Module prefix (from --prefix)
VM_MODPREFIX = Vnpc
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-I/home/azureuser/RV32-CPU/core/csrc/include \
	-I/home/azureuser/RV32-CPU/core/tools/capstone/repo/include \
	-DTOP_NAME="Vnpc" \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	-lreadline \
	-ltinfo \
	-ldl \
	-pie \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	cpu \
	mmio \
	timer \
	difftest \
	expr \
	sdb \
	trace \
	watchpoint \
	memory \
	npc \
	disasm \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/azureuser/RV32-CPU/core/csrc \
	/home/azureuser/RV32-CPU/core/csrc/device \
	/home/azureuser/RV32-CPU/core/csrc/infrastructure \
	/home/azureuser/RV32-CPU/core/csrc/utils \


### Default rules...
# Include list of all generated classes
include Vnpc_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

cpu.o: /home/azureuser/RV32-CPU/core/csrc/cpu.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
mmio.o: /home/azureuser/RV32-CPU/core/csrc/device/mmio.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
timer.o: /home/azureuser/RV32-CPU/core/csrc/device/timer.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
difftest.o: /home/azureuser/RV32-CPU/core/csrc/infrastructure/difftest.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
expr.o: /home/azureuser/RV32-CPU/core/csrc/infrastructure/expr.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
sdb.o: /home/azureuser/RV32-CPU/core/csrc/infrastructure/sdb.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
trace.o: /home/azureuser/RV32-CPU/core/csrc/infrastructure/trace.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
watchpoint.o: /home/azureuser/RV32-CPU/core/csrc/infrastructure/watchpoint.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
memory.o: /home/azureuser/RV32-CPU/core/csrc/memory.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
npc.o: /home/azureuser/RV32-CPU/core/csrc/npc.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
disasm.o: /home/azureuser/RV32-CPU/core/csrc/utils/disasm.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
Vnpc: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
