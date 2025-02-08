**Von Neumann Architecture**

- Von Neumann architecture is a fundamental concept in computer science, designed by
  John von Neumann.
- It consists of four main components: Memory, CPU, ALU (Arithmetic and Logical Unit),
  and I/O devices.

**Control Unit**

The control unit is the component that determines which circuit in the ALU to use for
each instruction.

**Data Path**

The data path includes all components necessary for processing data, such as memory,
registers, ALU, and communication buses.

**Control**

The control unit controls the flow of instructions through the data path based on
program instructions.

### Bus

The bus contains three types of signals:

1. **Control lines**: transmit control signals for read or write operations.
2. **Address lines**: transmit memory addresses to be accessed.
3. **Data lines**: transfer data between the CPU, memory, and I/O devices.

### ALU (Arithmetic and Logical Unit)\*\*

- Benchmark: The ALU is tested on benchmark datasets, such as those used in artificial
  intelligence applications.
- Batches: When a new algorithm is created, it's essential to test it on this dataset.

### Memory

- Speed increases exponentially with cost.
- Types of memory:
  - **Registers**: store temporary data within the microprocessor.
  - **Main Memory**: stores large amounts of data for long-term storage.
  - **Cache Memory**: a faster, smaller memory that stores frequently accessed data.

#### Registers

- **Program Counter (PC)**: stores the next instruction to be executed.
- **Instruction Register (IR)**: holds the current instruction being executed.
- **Memory Address Register (MAR)**: stores the memory address from which data will be
  fetched or sent to.
- **Memory Data Register (MDR)**: stores data being transferred between the CPU and
  memory.

#### Cache Memory

- Three levels:
  1.  **Level 1 (L1) Cache**: closest to the CPU, fastest, but smallest.
  2.  **Level 2 (L2) Cache**: slower than L1, larger capacity.
  3.  **Level 3 (L3) Cache**: slowest, largest capacity.

## Definitions

- **Response Time**: execution time, wall clock time, or elapsed time: total time
  required for a task.
- **Throughput**: bandwidth: number of tasks completed per unit time.
- **CPU Execution Time**: actual CPU time spent computing; excludes I/O and other
  program overhead.
- **User CPU Time**: CPU time spent in a program itself.
- **System CPU Time**: CPU time spent by the operating system on behalf of the program.
- **Clock Cycle**: one clock period, typically measured by the processor clock.
- **Clock Period**: length of each clock cycle.
- **Clock Cycles per Instruction (CPI)**: average number of clock cycles per
  instruction for a program or fragment.

## Laws

- `Performance = 1/ExecutionTime`
- Relation between performance and execution:
  `PerformanceX > PerformanceY`
  `1/ Execution timeX > 1/ Execution timeY`
- `CPU execution time = CPU clock cycles × Clock cycle time`
- `CPU execution time = CPU clock cycles/Clock rate`
- `CPU execution time = IC × CPI × Clock Cycle Time`

## Microchip Manufacturing

The process begins with silicon-rich sand, as silicon is an excellent conductor and
insulator. The manufacturing process involves several steps:

```
 Silicon raw material → Crystallization → Wafer fabrication → Doping → Transistors and
logic circuits → Packaging and assembly → Final product
```

# Quesstion:

- how can components interact to each f
- why we still have in the memory of only 8 bits
- what would happen if we devide by zero if it is inside try block
- are the registers tha stores the flags the same as the ones it stores data
- how to make a chip (watch a video)
