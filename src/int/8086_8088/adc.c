#include "8086_8088_instructions.h"
#include "iset_core.h"



/*
 * ADDC:
 * Performs addition with carry (including carry flag) for two 16-bit numbers.
 * The function adds the value of "second_argument" to "first_argument" and includes the carry state (CARRY_FLAG).
 * After the addition, the carry flag is updated based on the result.
 * 
 * Parameters:
 * - first_argument: Pointer to the first operand (16-bit number) that will be updated with the result of the addition.
 * - second_argument: The second operand (16-bit number) to be added to the first.
 * 
 * The global variable CARRY_FLAG is used to track the carry status during the operation.
 */
void ADDC(
    unsigned short *first_argument, 
    unsigned short second_argument
) {
    unsigned short result = *first_argument;
    
    ADD(&result, second_argument);
    ADD(&result, CARRY_FLAG);
    
    /*
     * Check for carry after the addition.
     * If the result is smaller than any of the operands, a carry occurred.
     */
    if (result < *first_argument || result < second_argument || result < CARRY_FLAG) {
        CARRY_FLAG = 1;  // Set carry flag to 1 (carry occurred).
    } else {
        CARRY_FLAG = 0;  // Set carry flag to 0 (no carry).
    }

    *first_argument = result;  // Update the first operand with the result.
}


/*
 * ADDCL:
 * Performs addition with carry (including carry flag) for two 32-bit numbers.
 * The function adds the value of "second_argument" to "first_argument" and includes the carry state (CARRY_FLAG).
 * After the addition, the carry flag is updated based on the result.
 * 
 * Parameters:
 * - first_argument: Pointer to the first operand (32-bit number) that will be updated with the result of the addition.
 * - second_argument: The second operand (32-bit number) to be added to the first.
 * 
 * The global variable CARRY_FLAG is used to track the carry status during the operation.
 */
void ADDCL(
    unsigned int *first_argument, 
    unsigned int second_argument
) {
    unsigned int result = *first_argument;
    
    ADDL(&result, second_argument);
    ADDL(&result, CARRY_FLAG);
    
    /* 
     * Check for carry after the addition.
     * If the result is smaller than any of the operands, a carry occurred.
     */
    if (result < *first_argument || result < second_argument || result < CARRY_FLAG) {
        CARRY_FLAG = 1;  // Set carry flag to 1 (carry occurred).
    } else {
        CARRY_FLAG = 0;  // Set carry flag to 0 (no carry).
    }

    *first_argument = result;  // Update the first operand with the result.
}