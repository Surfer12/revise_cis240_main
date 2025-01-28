#ifndef CPU_H
#define CPU_H

#include <stdint.h>
#include "isa.h"
#include "alu.h"

#define NUM_REGISTERS 8
#define MEMORY_SIZE 256

// CPU State Enumeration
typedef enum {
    STATE_FETCH,
    STATE_DECODE,
    STATE_EXECUTE,
    STATE_MEMORY,
    STATE_HALTED
} CPUState;

// CPU Structure
typedef struct {
    uint16_t registers[NUM_REGISTERS];  // General-purpose registers
    uint16_t memory[MEMORY_SIZE];       // Memory
    uint16_t pc;                        // Program Counter
    uint16_t ir;                        // Instruction Register
    uint16_t mar;                       // Memory Address Register
    uint16_t mdr;                       // Memory Data Register
    CPUState current_state;             // Current CPU State
    uint8_t zero_flag;                  // Zero flag from last ALU operation
    uint8_t carry_flag;                 // Carry flag from last ALU operation
} CPU;

// CPU Function Prototypes
void cpu_init(CPU* cpu);                        // Initialize CPU
void cpu_reset(CPU* cpu);                       // Reset CPU to initial state
void cpu_fetch_instruction(CPU* cpu);           // Fetch next instruction
void cpu_decode_instruction(CPU* cpu);          // Decode current instruction
void cpu_execute_instruction(CPU* cpu);         // Execute current instruction
void cpu_run(CPU* cpu);                         // Run the CPU
void cpu_dump_state(const CPU* cpu);            // Print current CPU state for debugging

#endif // CPU_H