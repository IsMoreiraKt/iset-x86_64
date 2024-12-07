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
void ADDB(char first_argument, char *second_argument) {
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
 * ADDW Function:
 * Performs a bitwise addition of two 16-bit signed values.
 * This function simulates the addition of two 16-bit numbers, considering carry at each bit.
 * 
 * Parameters:
 * - first_argument: The first operand (short, 16-bit).
 * - second_argument: A pointer to the second operand (short, 16-bit).
 */
void ADDW(short first_argument, short *second_argument) {
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
 * ADDL Function:
 * Performs a bitwise addition of two 32-bit signed values.
 * This function simulates the addition of two 32-bit numbers, considering carry at each bit.
 * 
 * Parameters:
 * - first_argument: The first operand (int, 32-bit).
 * - second_argument: A pointer to the second operand (int, 32-bit).
 */
void ADDL(int first_argument, int *second_argument) {
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
 * ADDQ Function:
 * Performs a bitwise addition of two 64-bit signed values.
 * This function simulates the addition of two 64-bit numbers, considering carry at each bit.
 * 
 * Parameters:
 * - first_argument: The first operand (long, 64-bit).
 * - second_argument: A pointer to the second operand (long, 64-bit).
 */
void ADDQ(long first_argument, long *second_argument) {
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