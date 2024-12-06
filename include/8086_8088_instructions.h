#ifndef ISET_8086_8088_INSTRUCTIONS_H
#define ISET_8086_8088_INSTRUCTIONS_H


/*
 * ADD Function:
 * Performs a bitwise addition of two unsigned short values.
 * This function simulates the addition of two 16-bit numbers, considering carry at each bit.
 * 
 * Parameters:
 * - first_argument: The first operand (unsigned short, 16-bit).
 * - second_argument: The second operand (unsigned short, 16-bit).
 * 
 * Return:
 * - The result of the addition, stored in the first_argument.
 *   The first_argument is modified in place to hold the sum of the two operands.
 */
void ADD(
    unsigned short first_argument, 
    unsigned short second_agument
);


/*
 * ADDL Function:
 * Performs a bitwise addition of two unsigned int values.
 * This function simulates the addition of two 32-bit numbers, considering carry at each bit.
 * 
 * Parameters:
 * - first_argument: The first operand (unsigned int, 32-bit).
 * - second_argument: The second operand (unsigned int, 32-bit).
 * 
 * Return:
 * - The result of the addition, stored in the first_argument.
 *   The first_argument is modified in place to hold the sum of the two operands.
 */
void ADDL(
    unsigned int first_argument, 
    unsigned int second_agument
);



#endif