.section .data
    # 8 bits : Range from -128 to 127 (signed)
    first_8bit_number:      .byte 210         # Positive 8-bit number
    second_8bit_number:     .byte -50         # Negative 8-bit number
    result_8bit:            .byte 0           # Result of 8-bit sum


    # 16 bits : Range from -32768 to 32767 (signed)
    first_16bit_number:     .short 5000       # Positive 16-bit number
    second_16bit_number:    .short -3000      # Negative 16-bit number
    result_16bit:           .short 0          # Result of 16-bit sum


    # 32 bits : Range from -2147483648 to 2147483647 (signed)
    first_32bit_number:     .long 500000      # Positive 32-bit number
    second_32bit_number:    .long -200000     # Negative 32-bit number
    result_32bit:           .long 0           # Result of 32-bit sum


    # 64 bits : Range from -9223372036854775808 to 9223372036854775807 (signed)
    first_64bit_number:     .quad 1000000000  # Positive 64-bit number
    second_64bit_number:    .quad -500000000  # Negative 64-bit number
    result_64bit:           .quad 0           # Result of 64-bit sum



.section .text
    .globl addex

addex:
    # Summing 8-bit numbers (signed)
    movb first_8bit_number, %al         # Load first 8-bit number into %al
    addb second_8bit_number, %al        # Add second 8-bit number to %al
    movb %al, result_8bit               # Store the result into result_8bit


    # Summing 16-bit numbers (signed)
    movw first_16bit_number, %ax        # Load first 16-bit number into %ax
    addw second_16bit_number, %ax       # Add second 16-bit number to %ax
    movw %ax, result_16bit              # Store the result into result_16bit


    # Summing 32-bit numbers (signed)
    movl first_32bit_number, %eax       # Load first 32-bit number into %eax
    addl second_32bit_number, %eax      # Add second 32-bit number to %eax
    movl %eax, result_32bit             # Store the result into result_32bit


    # Summing 64-bit numbers (signed)
    movq first_64bit_number, %rax       # Load first 64-bit number into %rax
    addq second_64bit_number, %rax      # Add second 64-bit number to %rax
    movq %rax, result_64bit             # Store the result into result_64bit


    # Exit the program
    movl $1, %eax                       # Exit system call
    xorl %ebx, %ebx                     # Status code 0
    int $0x80                           # Interrupt to exit
