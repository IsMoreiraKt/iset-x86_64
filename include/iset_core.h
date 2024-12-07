#ifndef ISET_CORE_H
#define ISET_CORE_H



/*
 * CARRY_FLAG:
 * A global variable that stores the state of the carry flag during arithmetic operations.
 * It holds a value of 1 if a carry occurs, and 0 otherwise.
 * This variable is intended to be used in operations that require carry detection.
 */
extern unsigned char CARRY_FLAG;



/*
 * OR(first_argument, second_argument):
 * A macro that performs a bitwise OR operation between two arguments.
 * The operation is type-checked using `_Generic`, ensuring it works for supported types.
 *
 * Supported types:
 * - char
 * - unsigned char
 * - short
 * - unsigned short
 * - int
 * - unsigned int
 * - long
 * - unsigned long
 * - Any unsupported type defaults to the OR operation.
 */
#define OR(first_argument, second_argument) _Generic((first_argument),      \
    char: (first_argument | second_argument),                               \
    unsigned char: (first_argument | second_argument),                      \
    short: (first_argument | second_argument),                              \
    unsigned short: (first_argument | second_argument),                     \
    int: (first_argument | second_argument),                                \
    unsigned int: (first_argument | second_argument),                       \
    long: (first_argument | second_argument),                               \
    unsigned long: (first_argument | second_argument),                      \
    default: (first_argument | second_argument)                             \
)


/*
 * XOR(first_argument, second_argument):
 * A macro that performs a bitwise XOR operation between two arguments.
 * Similar to OR, it uses `_Generic` to ensure proper type handling.
 *
 * Supported types:
 * - char
 * - unsigned char
 * - short
 * - unsigned short
 * - int
 * - unsigned int
 * - long
 * - unsigned long
 * - Any unsupported type defaults to the XOR operation.
 */
#define XOR(first_argument, second_argument) _Generic((first_argument),     \
    char: (first_argument ^ second_argument),                               \
    unsigned char: (first_argument ^ second_argument),                      \
    short: (first_argument ^ second_argument),                              \
    unsigned short: (first_argument ^ second_argument),                     \
    int: (first_argument ^ second_argument),                                \
    unsigned int: (first_argument ^ second_argument),                       \
    long: (first_argument ^ second_argument),                               \
    unsigned long: (first_argument ^ second_argument),                      \
    default: (first_argument ^ second_argument)                             \
)


/*
 * AND(first_argument, second_argument):
 * A macro that performs a bitwise AND operation between two arguments.
 * Similar to OR and XOR, it ensures proper type checking via `_Generic`.
 *
 * Supported types:
 * - char
 * - unsigned char
 * - short
 * - unsigned short
 * - int
 * - unsigned int
 * - long
 * - unsigned long
 * - Any unsupported type defaults to the AND operation.
 */
#define AND(first_argument, second_argument) _Generic((first_argument),     \
    char: (first_argument & second_argument),                               \
    unsigned char: (first_argument & second_argument),                      \
    short: (first_argument & second_argument),                              \
    unsigned short: (first_argument & second_argument),                     \
    int: (first_argument & second_argument),                                \
    unsigned int: (first_argument & second_argument),                       \
    long: (first_argument & second_argument),                               \
    unsigned long: (first_argument & second_argument),                      \
    default: (first_argument & second_argument)                             \
)


/*
 * NOT(first_argument):
 * A macro that performs a bitwise NOT operation on a single argument.
 * Uses `_Generic` for type checking and ensures compatibility with supported types.
 *
 * Supported types:
 * - char
 * - unsigned char
 * - short
 * - unsigned short
 * - int
 * - unsigned int
 * - long
 * - unsigned long
 * - Any unsupported type defaults to the NOT operation.
 */
#define NOT(first_argument) _Generic((first_argument),                      \
    char: (~first_argument),                                                \
    unsigned char: (~first_argument),                                       \
    short: (~first_argument),                                               \
    unsigned short: (~first_argument),                                      \
    int: (~first_argument),                                                 \
    unsigned int: (~first_argument),                                        \
    long: (~first_argument),                                                \
    unsigned long: (~first_argument),                                       \
    default: (~first_argument)                                              \
)



#endif