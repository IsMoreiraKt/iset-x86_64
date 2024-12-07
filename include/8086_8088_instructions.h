#ifndef ISET_8086_8088_INSTRUCTIONS_H
#define ISET_8086_8088_INSTRUCTIONS_H



/*
 * ADDB Function:
 * Performs a bitwise addition of two 8-bit signed values.
 * This function simulates the addition of two 8-bit numbers, considering carry at each bit.
 * 
 * Parameters:
 * - first_argument: The first operand (char, 8-bit).
 * - second_argument: A pointer to the second operand (char, 8-bit).
 * 
 * Return:
 * - The result of the addition is stored in the first_argument.
 *   The first_argument is modified in place to hold the sum of the two operands.
 */
void ADDB(
    char first_argument, 
    char *second_argument
);


/*
 * ADDW Function:
 * Performs a bitwise addition of two 16-bit signed values.
 * This function simulates the addition of two 16-bit numbers, considering carry at each bit.
 * 
 * Parameters:
 * - first_argument: The first operand (short, 16-bit).
 * - second_argument: A pointer to the second operand (short, 16-bit).
 * 
 * Return:
 * - The result of the addition is stored in the first_argument.
 *   The first_argument is modified in place to hold the sum of the two operands.
 */
void ADDW(
    short first_argument, 
    short *second_argument
);


/*
 * ADDL Function:
 * Performs a bitwise addition of two 32-bit signed values.
 * This function simulates the addition of two 32-bit numbers, considering carry at each bit.
 * 
 * Parameters:
 * - first_argument: The first operand (int, 32-bit).
 * - second_argument: A pointer to the second operand (int, 32-bit).
 * 
 * Return:
 * - The result of the addition is stored in the first_argument.
 *   The first_argument is modified in place to hold the sum of the two operands.
 */
void ADDL(
    int first_argument, 
    int *second_argument
);


/*
 * ADDQ Function:
 * Performs a bitwise addition of two 64-bit signed values.
 * This function simulates the addition of two 64-bit numbers, considering carry at each bit.
 * 
 * Parameters:
 * - first_argument: The first operand (long, 64-bit).
 * - second_argument: A pointer to the second operand (long, 64-bit).
 * 
 * Return:
 * - The result of the addition is stored in the first_argument.
 *   The first_argument is modified in place to hold the sum of the two operands.
 */
void ADDQ(
    long first_argument, 
    long *second_argument
);


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
    unsigned short second_agument
);


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
    unsigned int second_agument
);



#endif