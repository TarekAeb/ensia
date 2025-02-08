## Computer architecture:

The Von Neumann computer is composed of three main components:

- CPU (central processing unit)
- Central memory (RAM)
- I/O devices

we will be interested in the two ones.

### 1. CPU

A processor is a complex electronic circuit designed to execute machine instructions at a very high speed. it is caracterized of:

#### 1.1 CPU caracterisation:

- **frequency**: the number of operations the processor is able to perform per seconds
- **internal memory**: the processor contains two types of internal memory, cache and registers.
- **word size**: The word-size of a processor represents the size of its internal registers. It also represents the amount of bits the processor can
  handle or process at a time (modern computers all have 65 bits)
- **Hyperthreading** is thechnology where processors can execute multiple threads per core.
- **IPC instruction per clcok cycle**: it measures the average number of instructions that the CPU can execute per clock cycle.
- **little indian** refers to the order in which bytes of a multibyte data value are stored in computer memory

#### 1.2 CPU structure:

- **ALU (Arithmetic Logic Unit)**: performs arithmetic and logical operations like (+,-,\*,/)
- **Control unit (CU)**: this unit fetches the instructions from the memory and decodes them. It also controls the flow of data between the CPU and the other devices.
- **Cache memory**: is a small and fast memory that stores the most frequently used data and instructions. It is used to speed up the data transfer between the CPU and the memory. it is organized in three level L1, L2, L3.
- **Commmunication buses**: are used to transfer data between the CPU and the memory, and between the CPU and the I/O devices. There are three types of buses:
  - **Data bus**: used to transfer data between the CPU and the memory.
  - **Address bus**: used to transfer the address of the memory location to be accessed.
  - **Control bus**: used to transfer control signals between the CPU and the memory.
- **Registers**: These are small and fast storage locations (of length word size) used for instructions execution. Some of them are general-purpose,
  whereas other are special-purpose. In the following paragraphs, we explore some of them:
  - **General-purpose registers**:
    - **AX**: Accumulator register, used for arithmetic operations.
    - **BX**: Base register, used for memory access.
    - **CX**: Counter register, used for loop operations.
    - **DX**: Data register, used for I/O operations.
      These registers are denoted eax, ebx, ecx, edx on 32-bit CISC processors, as rax, rbx, ... on 64-bit CISC processors, as r0, r1, r2, ... on 32-bit RISC processors, and x0, x1, ... on 64-bit RISC processors.
  - **Indexing Registers:**
    - **BP**: Base Pointer register, used for stack operations.
    - **SP**: Stack Pointer register, used for stack operations.
    - **IP**: Instruction Pointer register, used to store the address of the next instruction
    - **LR**: Link Register, used to store the return address of a function call.
      These registers are denoted ebp, esp, eip, ... on 32-bit CISC processors, as rbp, rsp, ... on 64-bit CISC processors, as s0, s1, ... on 32-bit RISC processors, and x30, x31, ... on 64-bit RISC processors.
  - **Status and memory registers:**
    - **FL**: Flags register, used to store the status of the ALU operations like (carry flag, zero flag, sing flag, interrupt flag, parity flag, overflow flag, ... trap flag)
    - **SR**: Segment registers point base address of segments.
    - **MAR**: Memory Address Register, used to store the address of the memory location to be accessed.
    - **MBR**: Memory Buffer Register, used to store the data to be written to or read from the memory.
    - **CRI**: Current Instruction Register, used to store the current instruction to be decoded.
    - **ISRSP**: Interrupt Service Routine Stack Pointer, used to store the address of the stack used during interrupt handling.

#### 1.3 Processor Instruction Set:

The instruction set of a processor is the set of instructions that the processor can execute. It is composed of two types of instructions:

##### 1.3.1 Complex Instruction Set Computer (CISC):

Is a computer architecture in which single instructions can execute several low-level operations. It is characterized by the following features:

- **Variable-length instructions**: instructions can have different lengths.
- **Large number of instructions**: the instruction set contains a large number of instructions.
- **Memory-to-memory operations**: instructions can operate directly on memory.
- **Complex addressing modes**: instructions can have complex addressing modes.
- **Microprogramming**: the control unit is implemented using microprogramming.

##### 1.3.2 Reduced Instruction Set Computer (RISC):

Is a computer architecture in which each single instruction can execute one single low-level operation.

- Requires more instructions for a given code. One instruction en-
  codes one single operation.
- Greater performance due to simplified instruction set.
- Used in supercomputer, such as the Fugaku.
- Less expensive, as they use smaller chips.
- Less transistors, so less heat dissipation compared to CISC, hence
  their application on small devices, e.g., smartphones and tablets.

**Example of CISC instructions:**

```assembly
MOV Ax, 0x1111 // Moves the value 0x1111 to register Ax
MOV Al, 0x11 // Moves the value 0x11 to the lower part of Ax
INC Ax // Increments the current value stored in Ax
DEC Ax // Decrements the current value stored in Ax
DIV Bx  // Divides the content of Ax by Bx and store it in Ax
MUL Cx // Multiplies the content of Ax with Cx and store it in Ax
PUSH Ax  // Pushes the content of Ax onto the stack (SP=SP-2)
POP Ax // Pops the top of the stack (pointed by SP) into Ax
JMP ABCD // Jumps to label ABCD
CMP Ax, 1 // Compares the content of Ax with value 1 and sets the Flags
JE ABCD // Jumps to ABCD if Ax was equal to 1 (previous operation)
LOOP ABCD // Jumps to ABCD and decrements the Cx while Cx is non-zero
HLT // Terminates the program
```

**Example of RISC instructions:**

```assembly
LDR R0, =0x1b25 //Load register R0 with the value 0x1b25.
MOV R0, ♯10 //Move the decimal value 10 to register.
ldr r1, [r0] //Load register R1 with content from the memory. The address of the memory location to load from is contained in register R0.
ADD R1, R2, ♯10 //Add the 10 to register R2 and store result in R1.
STR R2, [R0] //Copy content of R2 and store it in memory at address contained in register R0.
JMP T //Jump to label “T”. This can be used in loops.
CMP R0 R1 //Compare the content of R0 and R1 . Actually, R1 is substracted from R0, and based on the result, some flag in the state (flag) register are set, e.g., the zero flag, the sign flag, etc.
BEQ T //Branch to label “T” if equal, i.e., if the zero flag is set (e.g., if
R0=R1 in the previous CMP instruction) .
SUBS R0, R0, ♯10 //Substract and set the flags. The value 10 is substracted from the content of R0. The result is stored into register R0. Based on the result, the flags are set at the flag register.

```

### Machine code:

Machine code is a sequence of bytes, e.g., 01010101 01010111. . .01010100, that can be interpreted and executed by a dedicated CPU. In fact, each instruction in the assembly language, e.g., MOV AX, BX, is transformed into a corresponding machine code by the assembler program (e.g., Netwide Assembler a.k.a., nasm) to be executed by the processor.

### Instruction execution cycle:

Generally, the execution of an instruction is divided into several steps:

1. **Fetch**: the instruction is fetched from the memory.
2. **Decode**: the instruction is decoded to determine the operation to be performed.
3. **Execute**: the operation is executed.
4. **Write**: the result is written back to the memory.

### Instruction per Clock Cycle (IPC):

The instruction per clock cycle (IPC) refers to the average number of instructions that a CPU can simultaniously perform per single clock cycle (CC).

### 2. RAM

The central memory stores both data and instructions
