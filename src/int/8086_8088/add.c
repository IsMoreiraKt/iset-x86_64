#include "8086_8088_instructions.h"
#include "iset_core.h"



/*
 * ADDBS Function:
 * Performs a bitwise addition of two 8-bit signed values.
 * This function simulates the addition of two 8-bit numbers, considering carry at each bit.
 * 
 * Parameters:
 * - first_argument: The first operand (char, 8-bit).
 * - second_argument: A pointer to the second operand (char, 8-bit).
 */
void ADDBS(
    char first_argument, 
    char *second_argument
) {
    unsigned char mask = 0xF;
    unsigned char carry = CARRY_FLAG;
    char sum = 0;

    for (unsigned char shift = 0; shift < 8; shift += 4) {
        unsigned char x_block = (first_argument >> shift) & mask;
        unsigned char y_block = (*second_argument >> shift) & mask;
        unsigned char block_sum = (x_block ^ y_block ^ carry);

        carry = ((x_block & y_block) | (carry & (x_block ^ y_block)));
        sum |= (block_sum & mask) << shift;
    }

    if ((sum & 0x80) != 0) {
        sum |= ~0x7F;
    }

    *second_argument = sum;
    CARRY_FLAG = carry;
}


/*
 * ADDBU Function:
 * Performs a bitwise addition of two 8-bit unsigned values.
 * This function simulates the addition of two 8-bit numbers, considering carry at each bit.
 * 
 * Parameters:
 * - first_argument: The first operand (unsigned char, 8-bit).
 * - second_argument: A pointer to the second operand (unsigned char, 8-bit).
 */
void ADDBU(
    unsigned char first_argument, 
    unsigned char *second_argument
) {
    unsigned char mask = 0xF;
    unsigned char carry = CARRY_FLAG;
    unsigned char sum = 0;

    for (unsigned char shift = 0; shift < 8; shift += 4) {
        unsigned char x_block = (first_argument >> shift) & mask;
        unsigned char y_block = (*second_argument >> shift) & mask;
        unsigned char block_sum = (x_block ^ y_block ^ carry);

        carry = ((x_block & y_block) | (carry & (x_block ^ y_block)));
        sum |= (block_sum & mask) << shift;
    }

    *second_argument = sum;
    CARRY_FLAG = carry;
}


/*
 * ADDWS Function:
 * Performs a bitwise addition of two 16-bit signed values.
 * This function simulates the addition of two 16-bit numbers, considering carry at each bit.
 * 
 * Parameters:
 * - first_argument: The first operand (short, 16-bit).
 * - second_argument: A pointer to the second operand (short, 16-bit).
 */
void ADDWS(
    short first_argument, 
    short *second_argument
) {
    unsigned short mask = 0xFF;
    unsigned char carry = CARRY_FLAG;
    short sum = 0;

    for (unsigned short shift = 0; shift < 16; shift += 8) {
        unsigned short x_block = (first_argument >> shift) & mask;
        unsigned short y_block = (*second_argument >> shift) & mask;
        unsigned short block_sum = (x_block ^ y_block ^ carry);

        carry = ((x_block & y_block) | (carry & (x_block ^ y_block)));
        sum |= (block_sum & mask) << shift;
    }

    if ((sum & 0x8000) != 0) {
        sum |= ~0x7FFF;
    }

    *second_argument = sum;
    CARRY_FLAG = carry;
}


/*
 * ADDWU Function:
 * Performs a bitwise addition of two 16-bit unsigned values.
 * This function simulates the addition of two 16-bit numbers, considering carry at each bit.
 * 
 * Parameters:
 * - first_argument: The first operand (unsigned short, 16-bit).
 * - second_argument: A pointer to the second operand (unsigned short, 16-bit).
 */
void ADDWU(
    unsigned short first_argument, 
    unsigned short *second_argument
) {
    unsigned short mask = 0xFF;
    unsigned char carry = CARRY_FLAG;
    unsigned short sum = 0;

    for (unsigned short shift = 0; shift < 16; shift += 8) {
        unsigned short x_block = (first_argument >> shift) & mask;
        unsigned short y_block = (*second_argument >> shift) & mask;
        unsigned short block_sum = (x_block ^ y_block ^ carry);

        carry = ((x_block & y_block) | (carry & (x_block ^ y_block)));
        sum |= (block_sum & mask) << shift;
    }

    *second_argument = sum;
    CARRY_FLAG = carry;
}


/*
 * ADDLS Function:
 * Performs a bitwise addition of two 32-bit signed values.
 * This function simulates the addition of two 32-bit numbers, considering carry at each bit.
 * 
 * Parameters:
 * - first_argument: The first operand (int, 32-bit).
 * - second_argument: A pointer to the second operand (int, 32-bit).
 */
void ADDLS(
    int first_argument, 
    int *second_argument
) {
    unsigned int mask = 0xFFFF;
    unsigned char carry = CARRY_FLAG;
    int sum = 0;

    for (unsigned char shift = 0; shift < 32; shift += 16) {
        unsigned int x_block = (first_argument >> shift) & mask;
        unsigned int y_block = (*second_argument >> shift) & mask;
        unsigned int block_sum = (x_block ^ y_block ^ carry);

        carry = ((x_block & y_block) | (carry & (x_block ^ y_block)));
        sum |= (block_sum & mask) << shift;
    }

    if ((sum & 0x80000000) != 0) {
        sum |= ~0x7FFFFFFF;
    }

    *second_argument = sum;
    CARRY_FLAG = carry;
}


/*
 * ADDLU Function:
 * Performs a bitwise addition of two 32-bit unsigned values.
 * This function simulates the addition of two 32-bit numbers, considering carry at each bit.
 * 
 * Parameters:
 * - first_argument: The first operand (unsigned int, 32-bit).
 * - second_argument: A pointer to the second operand (unsigned int, 32-bit).
 */
void ADDLU(
    unsigned int first_argument,
    unsigned int *second_argument
) {
    unsigned int mask = 0xFFFF;
    unsigned char carry = CARRY_FLAG;
    unsigned int sum = 0;

    for (unsigned char shift = 0; shift < 32; shift += 16) {
        unsigned int x_block = (first_argument >> shift) & mask;
        unsigned int y_block = (*second_argument >> shift) & mask;
        unsigned int block_sum = (x_block ^ y_block ^ carry);

        carry = ((x_block & y_block) | (carry & (x_block ^ y_block)));
        sum |= (block_sum & mask) << shift;
    }

    *second_argument = sum;
    CARRY_FLAG = carry;
}


/*
 * ADDQS Function:
 * Performs a bitwise addition of two 64-bit signed values.
 * This function simulates the addition of two 64-bit numbers, considering carry at each bit.
 * 
 * Parameters:
 * - first_argument: The first operand (long, 64-bit).
 * - second_argument: A pointer to the second operand (long, 64-bit).
 */
void ADDQS(
    long first_argument, 
    long *second_argument
) {
    unsigned long mask = 0xFFFF;
    unsigned char carry = CARRY_FLAG;
    long sum = 0;

    for (unsigned char shift = 0; shift < 64; shift += 16) {
        unsigned long x_block = (first_argument >> shift) & mask;
        unsigned long y_block = (*second_argument >> shift) & mask;
        unsigned long block_sum = (x_block ^ y_block ^ carry);

        carry = ((x_block & y_block) | (carry & (x_block ^ y_block)));
        sum |= (block_sum & mask) << shift;
    }

    if ((sum & 0x8000000000000000) != 0) {
        sum |= ~0x7FFFFFFFFFFFFFFF;
    }

    *second_argument = sum;
    CARRY_FLAG = carry;
}


/*
 * ADDQU Function:
 * Performs a bitwise addition of two 64-bit unsigned values.
 * This function simulates the addition of two 64-bit numbers, considering carry at each bit.
 * 
 * Parameters:
 * - first_argument: The first operand (unsigned long, 64-bit).
 * - second_argument: A pointer to the second operand (unsigned long, 64-bit).
 */
void ADDQU(
    unsigned long first_argument,
    unsigned long *second_argument
) {
    unsigned long mask = 0xFFFF;
    unsigned char carry = CARRY_FLAG;
    unsigned long sum = 0;

    for (unsigned char shift = 0; shift < 64; shift += 16) {
        unsigned long x_block = (first_argument >> shift) & mask;
        unsigned long y_block = (*second_argument >> shift) & mask;
        unsigned long block_sum = (x_block ^ y_block ^ carry);

        carry = ((x_block & y_block) | (carry & (x_block ^ y_block)));
        sum |= (block_sum & mask) << shift;
    }

    *second_argument = sum;
    CARRY_FLAG = carry;
}