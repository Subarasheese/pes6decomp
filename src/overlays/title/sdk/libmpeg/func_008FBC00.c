/* compiler: ee-gcc-2.9-G0 */
/* sceMpegGetPictureRAW8 adapted from LucasPicoli/god-hand-decomp, src/cod/0039a8e8.c. See
 * THIRD_PARTY.md. */
extern int func_008FB318(void *decoder);

int func_008FBC00(void *m, unsigned int addr, int mode) {
    char *q;
    addr = (addr & 0x0FFFFFFFU) | 0x20000000U;
    q = (char *)(*((int *)(((char *)m) + 0x40)));
    *((int *)(q + 0xF8)) = mode;
    *((int *)(q + 0xEC)) = addr;
    *((int *)(q + 0xC4)) = 0;
    *((int *)(q + 0xF4)) = 0;
    *((int *)(q + 0xF0)) = 0;
    return func_008FB318(m);
}
