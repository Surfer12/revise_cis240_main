#ifndef ISA_H
#define ISA_H

#include <stdint.h>

// Instruction format:
// 16-bit instruction
// [15-12]: opcode (4 bits)
// [11-9]: destination register (3 bits)
// [8-6]: source register 1 (3 bits)
// [5-3]: source register 2 (3 bits)
// [2-0]: immediate value or unused (3 bits)

// ALU Operation Codes
typedef enum {
    ALU_ADD,
    ALU_SUB,
    ALU_AND,
    ALU_OR,
    ALU_XOR,
    ALU_NOT,
    ALU_SHL,  // Shift left
    ALU_SHR   // Shift right
} ALUOp;

// CPU Operation Codes
typedef enum {
    OP_ADD,    // Add two registers
    OP_SUB,    // Subtract two registers
    OP_AND,    // Bitwise AND
    OP_OR,     // Bitwise OR
    OP_XOR,    // Bitwise XOR
    OP_NOT,    // Bitwise NOT
    OP_SHL,    // Shift left
    OP_SHR,    // Shift right
    OP_LOAD,   // Load from memory
    OP_STORE,  // Store to memory
    OP_JUMP,   // Unconditional jump
    OP_JZ,     // Jump if zero
    OP_HALT    // Stop execution
} OpCode;

// Instruction decoding macros
#define GET_OPCODE(instruction) ((instruction >> 12) & 0xF)
#define GET_DEST_REG(instruction) ((instruction >> 9) & 0x7)
#define GET_SRC1_REG(instruction) ((instruction >> 6) & 0x7)
#define GET_SRC2_REG(instruction) ((instruction >> 3) & 0x7)
#define GET_IMMEDIATE(instruction) (instruction & 0x7)

// Instruction encoding macro
#define ENCODE_INSTRUCTION(op, dest, src1, src2, imm) \
    (((op & 0xF) << 12) | ((dest & 0x7) << 9) | \
     ((src1 & 0x7) << 6) | ((src2 & 0x7) << 3) | (imm & 0x7))

#endif // ISA_H