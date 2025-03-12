## RV32I CPU 设计和验证
RTL designs located at `core/vsrc`

### Initialization
**run initialzation script**

First, switch to folder `RV32-CPU` and run:
```
bash init.sh
source ~/.bashrc
```
Then try

```
$CPU_HOME
```
to check whether env variables are right.

Install necessary files before simulation:

**install verilator**

[check verilator manual](https://verilator.org/guide/latest/install.html)

**install dependant libraries**

```
sudo apt install libreadline-dev
```

**run example program**
```
cd $CPU_HOME/core
make sim
```

### Run tests

We prepared some tests program in `tests/tests`.

If you want to run any of them, run commands below:
```
cd $CPU_HOME/tests
make run ARCH=riscv32e-npc ALL=<your_tests_name>
```

If `ALL` is not specified, the program defaults to test all the C files in `tests/`

also, you can run your own testfile by adding it into `tests/`:

For example, you create a testfile called `mytest.c`. After adding it to `tests/` directory, you can run
```
make run ARCH=riscv32e-npc ALL=mytest
```
to run your own test.

If using simple debugger while testing is intended, you can modify file `$CPU_HOME/abstract-machine/scripts/platform/npc.mk` by removing the `-b` arg in line 15.

### Setup CPU Configuration

There are some optional configs in CPU simulations. If you want to activate or deactivate any, check out `core/csrc/include/config.h`.
