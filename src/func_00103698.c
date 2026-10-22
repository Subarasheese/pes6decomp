/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK code (libvifpk, probably sceVif1PkEnd); written from the PES6 executable. */
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

u_int *func_001034E0(sceVifPacket *pkt);

/* Close the open tag and open an END tag. */
void func_00103698(sceVifPacket *pkt, u_int flag)
{
    u_int *tag = func_001034E0(pkt);
    u_int *p = pkt->cur;

    *p++ = flag | 0x70000000;
    pkt->dmaTag = tag;
    pkt->vifCode = 0;
    p[0] = 0;
    pkt->cur = p + 1;
}
