# CPU Simulator

A simple CPU simulator that demonstrates the practical application of Discrete Mathematics principles through a simulated CPU architecture.

## Overview

This project implements a basic CPU simulator that showcases:
- Boolean algebra through ALU operations
- Set theory in register and memory management
- Combinatorics in instruction encoding
- Finite State Machines in the CPU control unit

## Features

- 16-bit instruction set architecture
- 8 general-purpose registers
- Basic ALU operations (ADD, SUB, AND, OR, XOR, NOT, SHL, SHR)
- Von Neumann architecture with unified memory
- Fetch-Decode-Execute cycle implementation
- Status flags (Zero, Carry)

## Instruction Set Architecture

Each instruction is 16 bits wide:
- [15-12]: Opcode (4 bits)
- [11-9]: Destination register (3 bits)
- [8-6]: Source register 1 (3 bits)
- [5-3]: Source register 2 (3 bits)
- [2-0]: Immediate value (3 bits)

### Supported Instructions
- `LOAD Rd, #imm` - Load immediate value into register
- `ADD Rd, Rs1, Rs2` - Add two registers
- `SUB Rd, Rs1, Rs2` - Subtract two registers
- `AND Rd, Rs1, Rs2` - Bitwise AND
- `OR Rd, Rs1, Rs2` - Bitwise OR
- `XOR Rd, Rs1, Rs2` - Bitwise XOR
- `NOT Rd, Rs1` - Bitwise NOT
- `JUMP Rd` - Jump to address in register
- `JZ Rd` - Jump if zero flag is set
- `HALT` - Stop execution

## Building

Requirements:
- GCC compiler
- Make build system

To build the project:
```bash
make
```

To clean build files:
```bash
make clean
```

To run the simulator:
```bash
make run
```

## Project Structure

```
cpu_simulator/
├── src/
│   ├── isa.h      - Instruction Set Architecture definitions
│   ├── alu.h      - ALU interface
│   ├── alu.c      - ALU implementation
│   ├── cpu.h      - CPU interface
│   ├── cpu.c      - CPU implementation
│   └── main.c     - Test program
├── obj/           - Object files (created during build)
├── Makefile       - Build configuration
├── .gitignore     - Git ignore rules
└── README.md      - This file
```

## Example Program

The default test program demonstrates:
1. Loading values into registers
2. Performing arithmetic operations
3. Using the ALU
4. Basic control flow

```c
// Load 5 into R0
// Load 3 into R1
// Add R0 and R1, store result in R2
// Halt
```

## Implementation Details

### ALU
- Implements basic arithmetic and logical operations
- Sets status flags (zero, carry) based on results
- Uses bitwise operations to demonstrate Boolean algebra

### CPU
- Implements fetch-decode-execute cycle
- Manages register file and memory
- Handles instruction decoding and execution
- Maintains CPU state and flags

## Educational Value

This simulator demonstrates:
1. Discrete Mathematics in computer architecture
2. Low-level programming concepts
3. CPU architecture fundamentals
4. Digital logic and Boolean algebra
5. State machines and control flow

## Future Extensions

Possible enhancements:
1. Pipeline simulation
2. Cache implementation
3. More complex instructions
4. Assembly language parser
5. GUI for visualization
6. Interrupt handling

## License

This project is open source and available under the MIT License.