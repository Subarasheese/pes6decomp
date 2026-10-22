/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK code (libvifpk, probably sceVif0PkRef); written from the PES6 executable. */
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

/* Close the open tag and add a REF tag: send size quadwords from addr. */
void func_00103340(sceVifPacket *pkt, u_long128 *addr, u_int size, u_int opt1, u_int opt2, u_int flag)
{
    u_int *p;

    func_001032E8(pkt);
    p = pkt->cur;
    size |= 0x30000000;
    *p++ = flag | size;
    p[0] = (u_int)addr & 0x9FFFFFFF;
    p[1] = opt1;
    p[2] = opt2;
    pkt->cur = p + 3;
}
