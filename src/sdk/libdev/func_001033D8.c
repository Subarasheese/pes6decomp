/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK code (libvifpk, probably sceVif0PkCall); written from the PES6 executable. */
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

u_int *func_001032E8(sceVifPacket *pkt);

/* Close the open tag and open a CALL tag to addr. */
void func_001033D8(sceVifPacket *pkt, u_long128 *addr, u_int flag)
{
    u_int *tag = func_001032E8(pkt);
    u_int *p = pkt->cur;

    *p++ = flag | 0x50000000;
    pkt->dmaTag = tag;
    p[0] = (u_int)addr & 0x9FFFFFFF;
    pkt->cur = p + 1;
    pkt->vifCode = 0;
}
