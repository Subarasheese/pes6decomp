/* compiler: ee-gcc-2.9-as210-G0 */
/* Sony SDK code; source adapted from kfiv-decomp (src/sce/libkernl/kprintf.c). */

/* Write c to the SIO transmit FIFO once it has room; returns c. */
int kputchar(int c)
{
    unsigned int base;

    do {
        base = 0x10000000;
    } while (*(volatile unsigned int *)(base | 0xF130) & 0x8000);

    *(unsigned char *)(base | 0xF180) = c;
    return c;
}
