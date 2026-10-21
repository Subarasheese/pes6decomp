/* compiler: ee-gcc-2.96 */
/* Sony SDK code; source adapted from crashwoc-decomp-ps2 (src/sdk/sce/libdma.c). */
typedef unsigned char u_char;
static void memclr(void *buf, int size)
{
    u_char *p = buf;
    while (size--) {
        *p++ = 0;
    }
}