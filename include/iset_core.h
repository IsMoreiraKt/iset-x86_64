#ifndef ISET_CORE_H
#define ISET_CORE_H



/*
 * XOR Function:
 * Performs the "Exclusive OR" logical operation between two operands.
 * Returns 1 if the bits are different, and 0 if they are the same.
 * 
 * Parameters:
 * - first_argument: The first operand (must be 0 or 1).
 * - second_argument: The second operand (must be 0 or 1).
 * 
 * Return:
 * - The result of the XOR operation between the two operands.
 */
unsigned char XOR(
    unsigned char first_argument, 
    unsigned char second_argument
) {
    return first_argument ^ second_argument;
}


/*
 * AND Function:
 * Performs the "AND" logical operation between two operands.
 * Returns 1 only if both operands are 1.
 * 
 * Parameters:
 * - first_argument: The first operand (must be 0 or 1).
 * - second_argument: The second operand (must be 0 or 1).
 * 
 * Return:
 * - The result of the AND operation between the two operands.
 */
unsigned char AND(
    unsigned char first_argument, 
    unsigned char second_argument
) {
    return first_argument & second_argument;
}


/*
 * OR Function:
 * Performs the "OR" logical operation between two operands.
 * Returns 1 if at least one of the operands is 1.
 * 
 * Parameters:
 * - first_argument: The first operand (must be 0 or 1).
 * - second_argument: The second operand (must be 0 or 1).
 * 
 * Return:
 * - The result of the OR operation between the two operands.
 */
unsigned char OR(
    unsigned char first_argument, 
    unsigned char second_argument
) {
    return first_argument | second_argument;
}


/*
 * NOT Function:
 * Performs the "NOT" logical operation (inverts the value of the operand).
 * Returns 1 if the operand is 0, and 0 if the operand is 1.
 * 
 * Parameters:
 * - first_argument: The operand (must be 0 or 1).
 * 
 * Return:
 * - The result of the NOT operation (negation of the operand).
 */
unsigned char NOT(
    unsigned char first_argument
) {
    return !first_argument;
}


/*
 * NAND Function:
 * Performs the "NAND" logical operation between two operands.
 * Returns 1 if at least one of the operands is 0.
 * 
 * Parameters:
 * - first_argument: The first operand (must be 0 or 1).
 * - second_argument: The second operand (must be 0 or 1).
 * 
 * Return:
 * - The result of the NAND operation between the two operands.
 */
unsigned char NAND(
    unsigned char first_argument, 
    unsigned char second_argument
) {
    return !(first_argument & second_argument);
}


/*
 * NOR Function:
 * Performs the "NOR" logical operation between two operands.
 * Returns 1 only if both operands are 0.
 * 
 * Parameters:
 * - first_argument: The first operand (must be 0 or 1).
 * - second_argument: The second operand (must be 0 or 1).
 * 
 * Return:
 * - The result of the NOR operation between the two operands.
 */
unsigned char NOR(
    unsigned char first_argument, 
    unsigned char second_argument
) {
    return !(first_argument | second_argument);
}


/*
 * XNOR Function:
 * Performs the "XNOR" logical operation between two operands.
 * Returns 1 if the operands are the same, and 0 if they are different.
 * 
 * Parameters:
 * - first_argument: The first operand (must be 0 or 1).
 * - second_argument: The second operand (must be 0 or 1).
 * 
 * Return:
 * - The result of the XNOR operation between the two operands.
 */
unsigned char XNOR(
    unsigned char first_argument, 
    unsigned char second_argument
) {
    return !(first_argument ^ second_argument);
}



#endif