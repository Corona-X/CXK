// This is a kernel stub file :)

.section __TEXT,__text
.align 4

.globl __fake_kernel

__fake_kernel:
    1:
        jmp 1b

    // lol
    ret

.globl _XKAllocate
.globl _XKFree

_XKAllocate:
    ret

_XKFree:
    ret
