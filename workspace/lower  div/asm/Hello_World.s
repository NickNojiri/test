# hello_world.s
# This program prints "Hello World" to the console.

.global main
main:
    # Print "Hello World"
    mov x0, #1
    ldr x1, =msg
    bl printf

    # Exit the program
    mov x0, #0
    bl exit

.data
msg: .asciz "Hello World!"