[BITS 32]

global _start
extern c_start
extern os_exit

section .asm

_start:
    call c_start
    call os_exit
    ret