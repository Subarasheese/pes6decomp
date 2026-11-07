/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK code (libvifpk, probably sceVif1PkTerminate); written from the PES6 executable. */
typedef unsigned int u_int;
typedef unsigned long u_long;
typedef unsigned int u_long128 __attribute__((mode(TI)));

/* A packet being built: the next word to write, the start, and the DMA tag, VIF code and GIF
   tag that the open calls leave for the close calls to patch with their counts. */
typedef struct {
    u_int *cur;
    u_long128 *base;
    u_int *dmaTag;
    u_int *vifCode;
    u_int pad10;
    u_long *gifTag;
} sceVifPacket;

/* Pad the packet to 16 bytes with zeros and close the open DMA tag (its quadword count). */
u_int *func_001034E0(sceVifPacket *pkt)
{
    u_int *p = pkt->cur;
    u_int *tag = pkt->dmaTag;
    int n;

    while ((u_int)p & 0xC) {
        *p++ = 0;
    }
    if (tag) {
        n = (u_long128 *)p - (u_long128 *)tag - 1;
        *tag += n;
    }
    pkt->cur = p;
    pkt->dmaTag = 0;
    return p;
}
