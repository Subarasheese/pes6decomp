/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK code (libvifpk, probably sceGifPkOpenGifTag); written from the PES6 executable. */
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

void func_001031F0(sceGifPacket *pkt, u_long128 tag)
{
    u_int *p = pkt->cur;

    pkt->gifTag = (u_long *)p;
    *(u_long128 *)p = tag;
    pkt->cur = p + 4;
}
