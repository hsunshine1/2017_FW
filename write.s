.global print
print:


push %rbp
mov %rsp, %rbp

mov $1, %rax
push %rdi
lea (%rsp), %rsi
mov $1, %rdi
mov $1, %rdx
syscall

leave
ret


