global _start
extern print_string
extern scan_string
extern exit_program
section .data
    msg1 db 'Inputkan nama : ', 0x0
    msg2 db 'Nama anda: ', 0x0
    input_buffer db 100 
section .text
_start:
    lea rdi, [msg1]
    call print_string

    lea rdi, [input_buffer]
    call scan_string

    lea rdi, [msg2]
    call print_string

    lea rdi, [input_buffer]
    call print_string

    call exit_program
