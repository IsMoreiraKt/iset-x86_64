#include "8086_8088_instructions.h"
#include "iset_core.h"



/**
 * ADCBS Function:
 * Performs an addition with carry (ADC) operation on two signed 8-bit values.
 * 
 * Parameters:
 * - first_argument: The first operand (8-bit signed).
 * - second_argument: A pointer to the second operand (8-bit signed).
 * 
 * Behavior:
 * - Adds `first_argument`, `*second_argument`, and the current `CARRY_FLAG`.
 * - Updates the `CARRY_FLAG` based on overflow conditions.
 */
void ADCBS(char first_argument, char *second_argument) {
    char result = first_argument;

    ADDBS(second_argument, result);
    ADDBS(CARRY_FLAG, result);

    if (result < first_argument || result < *second_argument || result < CARRY_FLAG) {
        CARRY_FLAG = 1;
    } else {
        CARRY_FLAG = 0;
    }

    *second_argument = result;
}


/**
 * ADCBU Function:
 * Performs an addition with carry (ADC) operation on two unsigned 8-bit values.
 * 
 * Parameters:
 * - first_argument: The first operand (8-bit unsigned).
 * - second_argument: A pointer to the second operand (8-bit unsigned).
 * 
 * Behavior:
 * - Adds `first_argument`, `*second_argument`, and the current `CARRY_FLAG`.
 * - Updates the `CARRY_FLAG` based on overflow conditions.
 */
void ADCBU(unsigned char first_argument, unsigned char *second_argument) {
    unsigned char result = first_argument;

    ADDBU(second_argument, result);
    ADDBU(CARRY_FLAG, result);

    if (result < first_argument || result < *second_argument || result < CARRY_FLAG) {
        CARRY_FLAG = 1;
    } else {
        CARRY_FLAG = 0;
    }

    *second_argument = result;
}


/**
 * ADCWS Function:
 * Performs an addition with carry (ADC) operation on two signed 16-bit values.
 * 
 * Parameters:
 * - first_argument: The first operand (16-bit signed).
 * - second_argument: A pointer to the second operand (16-bit signed).
 * 
 * Behavior:
 * - Adds `first_argument`, `*second_argument`, and the current `CARRY_FLAG`.
 * - Updates the `CARRY_FLAG` based on overflow conditions.
 */
void ADCWS(short first_argument, short *second_argument) {
    short result = first_argument;

    ADDWS(second_argument, result);
    ADDWS(CARRY_FLAG, result);

    if (result < first_argument || result < *second_argument || result < CARRY_FLAG) {
        CARRY_FLAG = 1;
    } else {
        CARRY_FLAG = 0;
    }

    *second_argument = result;
}


/**
 * ADCWU Function:
 * Performs an addition with carry (ADC) operation on two unsigned 16-bit values.
 * 
 * Parameters:
 * - first_argument: The first operand (16-bit unsigned).
 * - second_argument: A pointer to the second operand (16-bit unsigned).
 * 
 * Behavior:
 * - Adds `first_argument`, `*second_argument`, and the current `CARRY_FLAG`.
 * - Updates the `CARRY_FLAG` based on overflow conditions.
 */
void ADCWU(unsigned short first_argument, unsigned short *second_argument) {
    unsigned short result = first_argument;

    ADDWU(second_argument, result);
    ADDWU(CARRY_FLAG, result);

    if (result < first_argument || result < *second_argument || result < CARRY_FLAG) {
        CARRY_FLAG = 1;
    } else {
        CARRY_FLAG = 0;
    }

    *second_argument = result;
}


/**
 * ADCLS Function:
 * Performs an addition with carry (ADC) operation on two signed 32-bit values.
 * 
 * Parameters:
 * - first_argument: The first operand (32-bit signed).
 * - second_argument: A pointer to the second operand (32-bit signed).
 * 
 * Behavior:
 * - Adds `first_argument`, `*second_argument`, and the current `CARRY_FLAG`.
 * - Updates the `CARRY_FLAG` based on overflow conditions.
 */
void ADCLS(int first_argument, int *second_argument) {
    int result = first_argument;

    ADDLS(second_argument, result);
    ADDLS(CARRY_FLAG, result);

    if (result < first_argument || result < *second_argument || result < CARRY_FLAG) {
        CARRY_FLAG = 1;
    } else {
        CARRY_FLAG = 0;
    }

    *second_argument = result;
}


/**
 * ADCLU Function:
 * Performs an addition with carry (ADC) operation on two unsigned 32-bit values.
 * 
 * Parameters:
 * - first_argument: The first operand (32-bit unsigned).
 * - second_argument: A pointer to the second operand (32-bit unsigned).
 * 
 * Behavior:
 * - Adds `first_argument`, `*second_argument`, and the current `CARRY_FLAG`.
 * - Updates the `CARRY_FLAG` based on overflow conditions.
 */
void ADCLU(unsigned int first_argument, unsigned int *second_argument) {
    unsigned int result = first_argument;

    ADDLU(second_argument, result);
    ADDLU(CARRY_FLAG, result);

    if (result < first_argument || result < *second_argument || result < CARRY_FLAG) {
        CARRY_FLAG = 1;
    } else {
        CARRY_FLAG = 0;
    }

    *second_argument = result;
}


/**
 * ADCQS Function:
 * Performs an addition with carry (ADC) operation on two signed 64-bit values.
 * 
 * Parameters:
 * - first_argument: The first operand (64-bit signed).
 * - second_argument: A pointer to the second operand (64-bit signed).
 * 
 * Behavior:
 * - Adds `first_argument`, `*second_argument`, and the current `CARRY_FLAG`.
 * - Updates the `CARRY_FLAG` based on overflow conditions.
 */
void ADCQS(long first_argument, long *second_argument) {
    long result = first_argument;

    ADDQS(second_argument, result);
    ADDQS(CARRY_FLAG, result);

    if (result < first_argument || result < *second_argument || result < CARRY_FLAG) {
        CARRY_FLAG = 1;
    } else {
        CARRY_FLAG = 0;
    }

    *second_argument = result;
}


/**
 * ADCQU Function:
 * Performs an addition with carry (ADC) operation on two unsigned 64-bit values.
 * 
 * Parameters:
 * - first_argument: The first operand (64-bit unsigned).
 * - second_argument: A pointer to the second operand (64-bit unsigned).
 * 
 * Behavior:
 * - Adds `first_argument`, `*second_argument`, and the current `CARRY_FLAG`.
 * - Updates the `CARRY_FLAG` based on overflow conditions.
 */
void ADCQU(unsigned long first_argument,unsigned long *second_argument) {
    unsigned long result = first_argument;

    ADDQU(second_argument, result);
    ADDQU(CARRY_FLAG, result);

    if (result < first_argument || result < *second_argument || result < CARRY_FLAG) {
        CARRY_FLAG = 1;
    } else {
        CARRY_FLAG = 0;
    }

    *second_argument = result;
}