/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK code (libvifpk, probably sceGifPkEnd); written from the PES6 executable. */
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

u_int *func_00102FF8(sceGifPacket *pkt);

/* Close the open tag and open an END tag. */
void func_00103160(sceGifPacket *pkt, u_int opt1, u_int opt2, u_int flag)
{
    u_int *tag = func_00102FF8(pkt);
    u_int *p = pkt->cur;

    *p++ = flag | 0x70000000;
    pkt->dmaTag = tag;
    p[0] = 0;
    p[1] = opt1;
    p[2] = opt2;
    pkt->cur = p + 3;
}
