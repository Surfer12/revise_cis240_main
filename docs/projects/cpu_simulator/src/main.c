#include <stdio.h>
#include "cpu.h"
#include "isa.h"

// Helper function to encode instructions
uint16_t encode_instruction(uint8_t opcode, uint8_t dest, uint8_t src1, uint8_t src2, uint8_t imm) {
    return ENCODE_INSTRUCTION(opcode, dest, src1, src2, imm);
}

int main() {
    // Create CPU instance
    CPU cpu;

    // Initialize the CPU
    cpu_init(&cpu);

    // Load a simple test program
    // Program:
    // 1. Load 5 into R0
    // 2. Load 3 into R1
    // 3. Add R0 and R1, store result in R2
    // 4. Halt
    cpu.memory[0] = encode_instruction(OP_LOAD, 0, 0, 0, 5);   // LOAD R0, #5
    cpu.memory[1] = encode_instruction(OP_LOAD, 1, 0, 0, 3);   // LOAD R1, #3
    cpu.memory[2] = encode_instruction(OP_ADD, 2, 0, 1, 0);    // ADD R2, R0, R1
    cpu.memory[3] = encode_instruction(OP_HALT, 0, 0, 0, 0);   // HALT

    // Print initial state
    printf("Initial CPU State:\n");
    cpu_dump_state(&cpu);

    // Run the CPU
    printf("\nRunning CPU...\n");
    cpu_run(&cpu);

    // Print final state
    printf("\nFinal CPU State:\n");
    cpu_dump_state(&cpu);

    return 0;
}