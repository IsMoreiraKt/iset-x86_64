.section .data
    # 8 bits: Range from -128 to 127 (signed)
    first_8bit_number:      .byte 120         # Positive 8-bit number
    second_8bit_number:     .byte -50         # Negative 8-bit number
    result_8bit:            .byte 0           # Result of 8-bit addition with carry


    # 16 bits: Range from -32768 to 32767 (signed)
    first_16bit_number:     .short 30000      # Positive 16-bit number
    second_16bit_number:    .short -10000     # Negative 16-bit number
    result_16bit:           .short 0          # Result of 16-bit addition with carry


    # 32 bits: Range from -2147483648 to 2147483647 (signed)
    first_32bit_number:     .long 2000000000  # Positive 32-bit number (2 billion)
    second_32bit_number:    .long -1000000000 # Negative 32-bit number (-1 billion)
    result_32bit:           .long 0           # Result of 32-bit addition with carry


    # 64 bits: Range from -9223372036854775808 to 9223372036854775807 (signed)
    first_64bit_number:     .quad 5000000000  # Positive 64-bit number (5 billion)
    second_64bit_number:    .quad -2000000000 # Negative 64-bit number (-2 billion)
    result_64bit:           .quad 0           # Result of 64-bit addition with carry



.section .text
    .globl adcex

adcex:
    # Clear the carry flag (CF) before starting operations
    clc


    # 8-bit addition with carry
    movb first_8bit_number, %al         # Load first 8-bit number into %al
    addb second_8bit_number, %al        # Add second 8-bit number to %al
    adcb $0, %al                        # Add carry flag to %al
    movb %al, result_8bit               # Store the result in result_8bit


    # 16-bit addition with carry
    movw first_16bit_number, %ax        # Load first 16-bit number into %ax
    addw second_16bit_number, %ax       # Add second 16-bit number to %ax
    adcw $0, %ax                        # Add carry flag to %ax
    movw %ax, result_16bit              # Store the result in result_16bit


    # 32-bit addition with carry
    movl first_32bit_number, %eax       # Load first 32-bit number into %eax
    addl second_32bit_number, %eax      # Add second 32-bit number to %eax
    adcl $0, %eax                       # Add carry flag to %eax
    movl %eax, result_32bit             # Store the result in result_32bit


    # 64-bit addition with carry
    movq first_64bit_number, %rax       # Load first 64-bit number into %rax
    addq second_64bit_number, %rax      # Add second 64-bit number to %rax
    adcq $0, %rax                       # Add carry flag to %rax
    movq %rax, result_64bit             # Store the result in result_64bit


    # Exit the program
    movl $1, %eax                       # Exit system call
    xorl %ebx, %ebx                     # Status code 0
    int $0x80                           # Interrupt to exit
