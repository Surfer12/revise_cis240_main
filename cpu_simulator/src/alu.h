#ifndef ALU_H
#define ALU_H

#include <stdint.h>
#include "isa.h"

// ALU operation result structure to capture additional information like overflow
typedef struct {
    uint16_t value;     // Result of the operation
    uint8_t zero_flag;  // Set to 1 if result is zero
    uint8_t carry_flag; // Set to 1 if operation caused a carry/overflow
} ALUResult;

// ALU function prototype
ALUResult alu_execute(ALUOp op, uint16_t val1, uint16_t val2);

// Utility functions for flag checking
uint8_t is_zero(uint16_t value);
uint8_t check_overflow_add(uint16_t a, uint16_t b);
uint8_t check_overflow_sub(uint16_t a, uint16_t b);

#endif // ALU_H