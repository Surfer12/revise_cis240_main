#include "alu.h"
#include <stdint.h>

// Utility function to check if a value is zero
uint8_t is_zero(uint16_t value) {
    return value == 0;
}

// Check for overflow in addition
uint8_t check_overflow_add(uint16_t a, uint16_t b) {
    return (a + b) < a;  // If sum is less than original value, overflow occurred
}

// Check for overflow in subtraction
uint8_t check_overflow_sub(uint16_t a, uint16_t b) {
    return b > a;  // If subtrahend is larger than minuend, overflow occurred
}

// Main ALU execution function
ALUResult alu_execute(ALUOp op, uint16_t val1, uint16_t val2) {
    ALUResult result = {0};  // Initialize result to zero

    switch(op) {
        case ALU_ADD:
            result.value = val1 + val2;
            result.zero_flag = is_zero(result.value);
            result.carry_flag = check_overflow_add(val1, val2);
            break;

        case ALU_SUB:
            result.value = val1 - val2;
            result.zero_flag = is_zero(result.value);
            result.carry_flag = check_overflow_sub(val1, val2);
            break;

        case ALU_AND:
            result.value = val1 & val2;
            result.zero_flag = is_zero(result.value);
            break;

        case ALU_OR:
            result.value = val1 | val2;
            result.zero_flag = is_zero(result.value);
            break;

        case ALU_XOR:
            result.value = val1 ^ val2;
            result.zero_flag = is_zero(result.value);
            break;

        case ALU_NOT:
            result.value = ~val1;
            result.zero_flag = is_zero(result.value);
            break;

        case ALU_SHL:
            result.value = val1 << val2;
            result.zero_flag = is_zero(result.value);
            result.carry_flag = (val1 >> (16 - val2)) & 1;  // Capture bits shifted out
            break;

        case ALU_SHR:
            result.value = val1 >> val2;
            result.zero_flag = is_zero(result.value);
            result.carry_flag = (val1 & ((1 << val2) - 1));  // Capture bits shifted out
            break;

        default:
            // For unknown operations, return zero
            result.zero_flag = 1;
            break;
    }

    return result;
}