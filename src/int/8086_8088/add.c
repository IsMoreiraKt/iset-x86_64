#include "8086_8088_instructions.h"
#include "iset_core.h"



/*
 * ADDB Function:
 * Performs a bitwise addition of two 8-bit signed values.
 * This function simulates the addition of two 8-bit numbers, considering carry at each bit.
 * 
 * Parameters:
 * - first_argument: The first operand (char, 8-bit).
 * - second_argument: A pointer to the second operand (char, 8-bit).
 */
void ADDB(
    char first_argument, 
    char *second_argument
) {
    unsigned char sum = 0;

    for (unsigned int i = 0; i < 8; i++) {
        unsigned char x_bit = AND((first_argument >> i), 1);
        unsigned char y_bit = AND((*second_argument >> i), 1);
        unsigned char sum_bit = XOR(XOR(x_bit, y_bit), CARRY_FLAG);

        CARRY_FLAG = OR(AND(x_bit, y_bit), AND(CARRY_FLAG, XOR(x_bit, y_bit)));
        sum |= (sum_bit << i);
    }

    *second_argument = sum;
}


/*
 * ADDW Function:
 * Performs a bitwise addition of two 16-bit signed values.
 * This function simulates the addition of two 16-bit numbers, considering carry at each bit.
 * 
 * Parameters:
 * - first_argument: The first operand (short, 16-bit).
 * - second_argument: A pointer to the second operand (short, 16-bit).
 */
void ADDW(
    short first_argument, 
    short *second_argument
) {
    unsigned short sum = 0;

    for (unsigned int i = 0; i < 16; i++) {
        unsigned short x_bit = AND((first_argument >> i), 1);
        unsigned short y_bit = AND((*second_argument >> i), 1);
        unsigned short sum_bit = XOR(XOR(x_bit, y_bit), CARRY_FLAG);

        CARRY_FLAG = OR(AND(x_bit, y_bit), AND(CARRY_FLAG, XOR(x_bit, y_bit)));
        sum |= (sum_bit << i);
    }

    *second_argument = sum;
}


/*
 * ADDL Function:
 * Performs a bitwise addition of two 32-bit signed values.
 * This function simulates the addition of two 32-bit numbers, considering carry at each bit.
 * 
 * Parameters:
 * - first_argument: The first operand (int, 32-bit).
 * - second_argument: A pointer to the second operand (int, 32-bit).
 */
void ADDL(
    int first_argument, 
    int *second_argument
) {
    unsigned int sum = 0;

    for (unsigned int i = 0; i < 32; i++) {
        unsigned int x_bit = AND((first_argument >> i), 1);
        unsigned int y_bit = AND((*second_argument >> i), 1);
        unsigned int sum_bit = XOR(XOR(x_bit, y_bit), CARRY_FLAG);

        CARRY_FLAG = OR(AND(x_bit, y_bit), AND(CARRY_FLAG, XOR(x_bit, y_bit)));
        sum |= (sum_bit << i);
    }

    *second_argument = sum;
}


/*
 * ADDQ Function:
 * Performs a bitwise addition of two 64-bit signed values.
 * This function simulates the addition of two 64-bit numbers, considering carry at each bit.
 * 
 * Parameters:
 * - first_argument: The first operand (long, 64-bit).
 * - second_argument: A pointer to the second operand (long, 64-bit).
 */
void ADDQ(
    long first_argument, 
    long *second_argument
) {
    unsigned long sum = 0;

    for (unsigned int i = 0; i < 64; i++) {
        unsigned long x_bit = AND((first_argument >> i), 1);
        unsigned long y_bit = AND((*second_argument >> i), 1);
        unsigned long sum_bit = XOR(XOR(x_bit, y_bit), CARRY_FLAG);

        CARRY_FLAG = OR(AND(x_bit, y_bit), AND(CARRY_FLAG, XOR(x_bit, y_bit)));
        sum |= (sum_bit << i);
    }

    *second_argument = sum;
}