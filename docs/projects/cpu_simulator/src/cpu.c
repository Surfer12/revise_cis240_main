#include <stdio.h>
#include <string.h>
#include "cpu.h"

// Initialize the CPU to a known state
void cpu_init(CPU* cpu) {
    // Zero out all registers and memory
    memset(cpu->registers, 0, sizeof(cpu->registers));
    memset(cpu->memory, 0, sizeof(cpu->memory));

    // Reset key registers and state
    cpu->pc = 0;
    cpu->ir = 0;
    cpu->mar = 0;
    cpu->mdr = 0;
    cpu->current_state = STATE_FETCH;
    cpu->zero_flag = 0;
    cpu->carry_flag = 0;
}

// Reset the CPU to initial state (same as init for now)
void cpu_reset(CPU* cpu) {
    cpu_init(cpu);
}

// Fetch the next instruction from memory
void cpu_fetch_instruction(CPU* cpu) {
    // Load instruction from memory at current program counter
    cpu->ir = cpu->memory[cpu->pc];

    // Increment program counter
    cpu->pc++;

    // Transition to decode state
    cpu->current_state = STATE_DECODE;
}

// Decode the current instruction
void cpu_decode_instruction(CPU* cpu) {
    // Extract instruction components using macros from isa.h
    uint8_t opcode = GET_OPCODE(cpu->ir);
    uint8_t dest_reg = GET_DEST_REG(cpu->ir);
    uint8_t src1_reg = GET_SRC1_REG(cpu->ir);
    uint8_t src2_reg = GET_SRC2_REG(cpu->ir);
    uint8_t immediate = GET_IMMEDIATE(cpu->ir);

    // Store decoded information for execution stage
    cpu->mar = dest_reg;  // Destination register as memory address register
    cpu->mdr = src1_reg;  // Source 1 register as memory data register

    // Transition to execute state
    cpu->current_state = STATE_EXECUTE;
}

// Execute the current instruction
void cpu_execute_instruction(CPU* cpu) {
    // Extract instruction components
    uint8_t opcode = GET_OPCODE(cpu->ir);
    uint8_t dest_reg = GET_DEST_REG(cpu->ir);
    uint8_t src1_reg = GET_SRC1_REG(cpu->ir);
    uint8_t src2_reg = GET_SRC2_REG(cpu->ir);
    uint8_t immediate = GET_IMMEDIATE(cpu->ir);

    // Execute based on opcode
    switch(opcode) {
        case OP_ADD: {
            ALUResult result = alu_execute(ALU_ADD,
                                           cpu->registers[src1_reg],
                                           cpu->registers[src2_reg]);
            cpu->registers[dest_reg] = result.value;
            cpu->zero_flag = result.zero_flag;
            cpu->carry_flag = result.carry_flag;
            break;
        }
        case OP_SUB: {
            ALUResult result = alu_execute(ALU_SUB,
                                           cpu->registers[src1_reg],
                                           cpu->registers[src2_reg]);
            cpu->registers[dest_reg] = result.value;
            cpu->zero_flag = result.zero_flag;
            cpu->carry_flag = result.carry_flag;
            break;
        }
        case OP_AND: {
            ALUResult result = alu_execute(ALU_AND,
                                           cpu->registers[src1_reg],
                                           cpu->registers[src2_reg]);
            cpu->registers[dest_reg] = result.value;
            cpu->zero_flag = result.zero_flag;
            break;
        }
        case OP_OR: {
            ALUResult result = alu_execute(ALU_OR,
                                           cpu->registers[src1_reg],
                                           cpu->registers[src2_reg]);
            cpu->registers[dest_reg] = result.value;
            cpu->zero_flag = result.zero_flag;
            break;
        }
        case OP_XOR: {
            ALUResult result = alu_execute(ALU_XOR,
                                           cpu->registers[src1_reg],
                                           cpu->registers[src2_reg]);
            cpu->registers[dest_reg] = result.value;
            cpu->zero_flag = result.zero_flag;
            break;
        }
        case OP_NOT: {
            ALUResult result = alu_execute(ALU_NOT,
                                           cpu->registers[src1_reg],
                                           0);
            cpu->registers[dest_reg] = result.value;
            cpu->zero_flag = result.zero_flag;
            break;
        }
        case OP_LOAD: {
            // Load immediate value or from memory
            cpu->registers[dest_reg] = immediate;
            break;
        }
        case OP_JUMP: {
            // Unconditional jump
            cpu->pc = cpu->registers[dest_reg];
            break;
        }
        case OP_JZ: {
            // Jump if zero flag is set
            if (cpu->zero_flag) {
                cpu->pc = cpu->registers[dest_reg];
            }
            break;
        }
        case OP_HALT: {
            cpu->current_state = STATE_HALTED;
            break;
        }
        default: {
            // Invalid instruction
            fprintf(stderr, "Invalid opcode: %d\n", opcode);
            cpu->current_state = STATE_HALTED;
            break;
        }
    }

    // Transition back to fetch state unless halted
    if (cpu->current_state != STATE_HALTED) {
        cpu->current_state = STATE_FETCH;
    }
}

// Run the CPU until halted
void cpu_run(CPU* cpu) {
    while (cpu->current_state != STATE_HALTED) {
        switch (cpu->current_state) {
            case STATE_FETCH:
                cpu_fetch_instruction(cpu);
                break;
            case STATE_DECODE:
                cpu_decode_instruction(cpu);
                break;
            case STATE_EXECUTE:
                cpu_execute_instruction(cpu);
                break;
            default:
                fprintf(stderr, "Invalid CPU state\n");
                cpu->current_state = STATE_HALTED;
                break;
        }
    }
}

// Dump current CPU state for debugging
void cpu_dump_state(const CPU* cpu) {
    printf("CPU State Dump:\n");
    printf("Program Counter: %04X\n", cpu->pc);
    printf("Instruction Register: %04X\n", cpu->ir);

    printf("Registers:\n");
    for (int i = 0; i < NUM_REGISTERS; i++) {
        printf("R%d: %04X\n", i, cpu->registers[i]);
    }

    printf("Flags:\n");
    printf("Zero Flag: %d\n", cpu->zero_flag);
    printf("Carry Flag: %d\n", cpu->carry_flag);

    printf("Current State: %d\n", cpu->current_state);
}