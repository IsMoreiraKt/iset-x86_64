#ifndef ISET_8086_8088_INSTRUCTIONS_H
#define ISET_8086_8088_INSTRUCTIONS_H



#define ADDB(first_argument, second_argument) _Generic((first_argument),    \
    char: _Generic((second_argument),                                       \
        char*: ADDBS,                                                       \
        default: ADDBU                                                      \
    ),                                                                      \
    default: ADDBU                                                          \
)(first_argument, second_argument)


#define ADDW(first_argument, second_argument) _Generic((first_argument),    \
    short: _Generic((second_argument),                                      \
        short*: ADDWS,                                                      \
        default: ADDWU                                                      \
    ),                                                                      \
    default: ADDWU                                                          \
)(first_argument, second_argument)


#define ADDL(first_argument, second_argument) _Generic((first_argument),    \
    int: _Generic((second_argument),                                        \
        int*: ADDLS,                                                        \
        default: ADDLU                                                      \
    ),                                                                      \
    default: ADDLU                                                          \
)(first_argument, second_argument)


#define ADDQ(first_argument, second_argument) _Generic((first_argument),    \
    long: _Generic((second_argument),                                       \
        long*: ADDQS,                                                       \
        default: ADDQU                                                      \
    ),                                                                      \
    default: ADDQU                                                          \
)(first_argument, second_argument)



/*
 * ADDB Function:
 * Performs a bitwise addition of two 8-bit signed or unsigned values.
 * The appropriate function is selected based on the types of the arguments.
 * 
 * Signed Addition: ADDBS (signed 8-bit values).
 * Unsigned Addition: ADDBU (unsigned 8-bit values).
 * 
 * Parameters:
 * - first_argument: The first operand (char or unsigned char, 8-bit).
 * - second_argument: A pointer to the second operand (char* or unsigned char*).
 */
void ADDBS(char first_argument, char *second_argument);
void ADDBU(unsigned char first_argument, unsigned char *second_argument);


/*
 * ADDW Function:
 * Performs a bitwise addition of two 16-bit signed or unsigned values.
 * The appropriate function is selected based on the types of the arguments.
 * 
 * Signed Addition: ADDWS (signed 16-bit values).
 * Unsigned Addition: ADDWU (unsigned 16-bit values).
 * 
 * Parameters:
 * - first_argument: The first operand (short or unsigned short, 16-bit).
 * - second_argument: A pointer to the second operand (short* or unsigned short*).
 */
void ADDWS(short first_argument, short *second_argument);
void ADDWU(unsigned short first_argument, unsigned short *second_argument);


/*
 * ADDL Function:
 * Performs a bitwise addition of two 32-bit signed or unsigned values.
 * The appropriate function is selected based on the types of the arguments.
 * 
 * Signed Addition: ADDLS (signed 32-bit values).
 * Unsigned Addition: ADDLU (unsigned 32-bit values).
 * 
 * Parameters:
 * - first_argument: The first operand (int or unsigned int, 32-bit).
 * - second_argument: A pointer to the second operand (int* or unsigned int*).
 */
void ADDLS(int first_argument, int *second_argument);
void ADDLU(unsigned int first_argument, unsigned int *second_argument);


/*
 * ADDQ Function:
 * Performs a bitwise addition of two 64-bit signed or unsigned values.
 * The appropriate function is selected based on the types of the arguments.
 * 
 * Signed Addition: ADDQS (signed 64-bit values).
 * Unsigned Addition: ADDQU (unsigned 64-bit values).
 * 
 * Parameters:
 * - first_argument: The first operand (long or unsigned long, 64-bit).
 * - second_argument: A pointer to the second operand (long* or unsigned long*).
 */
void ADDQS(long first_argument, long *second_argument);
void ADDQU(unsigned long first_argument, unsigned long *second_argument);



#define ADCB(first_argument, second_argument) _Generic((first_argument),    \
    char: _Generic((second_argument),                                       \
        char*: ADCBS,                                                       \
        default: ADCBU                                                      \
    ),                                                                      \
    default: ADCBU                                                          \
)(first_argument, second_argument)


#define ADCW(first_argument, second_argument) _Generic((first_argument),    \
    short: _Generic((second_argument),                                      \
        short*: ADCWS,                                                      \
        default: ADCWU                                                      \
    ),                                                                      \
    default: ADCWU                                                          \
)(first_argument, second_argument)


#define ADCL(first_argument, second_argument) _Generic((first_argument),    \
    int: _Generic((second_argument),                                        \
        int*: ADCLS,                                                        \
        default: ADCLU                                                      \
    ),                                                                      \
    default: ADCLU                                                          \
)(first_argument, second_argument)


#define ADCQ(first_argument, second_argument) _Generic((first_argument),    \
    long: _Generic((second_argument),                                       \
        long*: ADCQS,                                                       \
        default: ADCQU                                                      \
    ),                                                                      \
    default: ADCQU                                                          \
)(first_argument, second_argument)



/*
 * ADCB Function:
 * Performs a bitwise addition of two 8-bit signed or unsigned values,
 * including the carry flag from the previous operation.
 * The appropriate function is selected based on the types of the arguments.
 * 
 * Signed Addition: ADCBS (signed 8-bit values with carry).
 * Unsigned Addition: ADCBU (unsigned 8-bit values with carry).
 * 
 * Parameters:
 * - first_argument: The first operand (char or unsigned char, 8-bit).
 * - second_argument: A pointer to the second operand (char* or unsigned char*).
 */
void ADCBS(char first_argument, char *second_argument);
void ADCBU(unsigned char first_argument, unsigned char *second_argument);


/*
 * ADCW Function:
 * Performs a bitwise addition of two 16-bit signed or unsigned values,
 * including the carry flag from the previous operation.
 * The appropriate function is selected based on the types of the arguments.
 * 
 * Signed Addition: ADCWS (signed 16-bit values with carry).
 * Unsigned Addition: ADCWU (unsigned 16-bit values with carry).
 * 
 * Parameters:
 * - first_argument: The first operand (short or unsigned short, 16-bit).
 * - second_argument: A pointer to the second operand (short* or unsigned short*).
 */
void ADCWS(short first_argument, short *second_argument);
void ADCWU(unsigned short first_argument, unsigned short *second_argument);


/*
 * ADCL Function:
 * Performs a bitwise addition of two 32-bit signed or unsigned values,
 * including the carry flag from the previous operation.
 * The appropriate function is selected based on the types of the arguments.
 * 
 * Signed Addition: ADCLS (signed 32-bit values with carry).
 * Unsigned Addition: ADCLU (unsigned 32-bit values with carry).
 * 
 * Parameters:
 * - first_argument: The first operand (int or unsigned int, 32-bit).
 * - second_argument: A pointer to the second operand (int* or unsigned int*).
 */
void ADCLS(int first_argument, int *second_argument);
void ADCLU(unsigned int first_argument, unsigned int *second_argument);


/*
 * ADCQ Function:
 * Performs a bitwise addition of two 64-bit signed or unsigned values,
 * including the carry flag from the previous operation.
 * The appropriate function is selected based on the types of the arguments.
 * 
 * Signed Addition: ADCQS (signed 64-bit values with carry).
 * Unsigned Addition: ADCQU (unsigned 64-bit values with carry).
 * 
 * Parameters:
 * - first_argument: The first operand (long or unsigned long, 64-bit).
 * - second_argument: A pointer to the second operand (long* or unsigned long*).
 */
void ADCQS(long first_argument, long *second_argument);
void ADCQU(unsigned long first_argument, unsigned long *second_argument);



#endif