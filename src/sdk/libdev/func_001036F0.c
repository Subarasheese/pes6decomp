/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK code (libvifpk, probably sceVif1PkOpenDirectCode); written from the PES6 executable. */
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

void func_00103850(sceVifPacket *pkt, int bit, int pos);

/* Align for a DIRECT code and open it; irq sets its interrupt bit. */
void func_001036F0(sceVifPacket *pkt, int irq)
{
    u_int *p;

    func_00103850(pkt, 2, 3);
    p = pkt->cur;
    pkt->vifCode = p;
    pkt->cur = p + 1;
    *p = irq ? 0xD0000000 : 0x50000000;
}
