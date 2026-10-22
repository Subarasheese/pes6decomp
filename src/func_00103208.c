/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK code (libvifpk, probably sceGifPkCloseGifTag); written from the PES6 executable. */
typedef unsigned int u_int;
typedef unsigned long u_long;
typedef unsigned int u_long128 __attribute__((mode(TI)));

/* A packet being built: the next word to write, the start, and the DMA tag, VIF code and GIF
   tag that the open calls leave for the close calls to patch with their counts. */
typedef struct {
    u_int *cur;
    u_long128 *base;
    u_int *dmaTag;
    u_long *gifTag;
} sceGifPacket;

/* Set the open GIF tag's NLOOP from the data added since, then pad to 16 bytes with zeros. */
void func_00103208(sceGifPacket *pkt)
{
    u_long *tag = pkt->gifTag;
    u_long t = *tag;
    u_long flg = (t >> 58) & 3;
    u_int n = ((u_long *)pkt->cur - tag) - 2;
    u_int nreg;
    u_int *p;

    if (flg != 1) {
        n >>= 1;
    }
    if (flg != 2) {
        nreg = t >> 60;
        if (nreg == 0) {
            nreg = 16;
        }
        n = (n + nreg - 1) / nreg;
    }
    pkt->gifTag = 0;
    *tag = t + n;
    p = pkt->cur;
    while ((u_int)p & 0xC) {
        *p++ = 0;
    }
    pkt->cur = p;
}
