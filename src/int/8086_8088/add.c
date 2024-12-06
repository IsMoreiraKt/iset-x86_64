#include "8086_8088_instructions.h"
#include "iset_core.h"



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
    unsigned short second_argument
) {
    unsigned short sum = 0;
    unsigned short carry = 0;

    // Loop through each bit (0 to 15) of the operands
    for (unsigned short i = 0; i <= 16; i++) {
        unsigned short x_bit = AND((first_argument >> i), 1);  // Get the i-th bit of the first operand
        unsigned short y_bit = AND((second_argument >> i), 1); // Get the i-th bit of the second operand
        unsigned short sum_bit = XOR(XOR(x_bit, y_bit), carry); // Calculate the sum bit

        // Calculate the carry for the next iteration (if any)
        carry = OR(AND(x_bit, y_bit), AND(carry, XOR(x_bit, y_bit)));

        // Combine the sum bit into the final sum
        sum |= (sum_bit << i);
    }

    // Store the result of the addition in the first_argument
    first_argument = sum;
}


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
    unsigned int second_argument
) {
    unsigned int sum = 0;
    unsigned int carry = 0;

    // Loop through each bit (0 to 31) of the operands
    for (unsigned int i = 0; i <= 32; i++) {
        unsigned int x_bit = AND((first_argument >> i), 1);  // Get the i-th bit of the first operand
        unsigned int y_bit = AND((second_argument >> i), 1); // Get the i-th bit of the second operand
        unsigned int sum_bit = XOR(XOR(x_bit, y_bit), carry); // Calculate the sum bit

        // Calculate the carry for the next iteration (if any)
        carry = OR(AND(x_bit, y_bit), AND(carry, XOR(x_bit, y_bit)));

        // Combine the sum bit into the final sum
        sum |= (sum_bit << i);
    }

    // Store the result of the addition in the first_argument
    first_argument = sum;
}