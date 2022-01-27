#include "System.h"

extern void main()
{
    IDT_install();
    IRQ_install();
    __asm__ volatile ("sti"); //Permite que haya IRQs 
    timer_install();
    enable_disable_cursor(ENABLE_NORMAL_CURSOR);  

    printv("Starting PonchOS!\n");
}