#include "../cpu/isr.h"
#include "../drivers/screen.h"
#include "kernel.h"
#include "../libc/string.h"

void kernel_main() {
    isr_install();
    irq_install();

    kprint("Type something, it will go through the kernel\n"
        "Type QUIT to halt the CPU\n> ");
}

void user_input(char *input) {
    if (strcmp(input, "QUIT") == 0) {
        kprint("Stopping the CPU\n");
        asm volatile("hlt");
    }
    kprint("You entered: ");
    kprint(input);
    kprint("\n> ");
}