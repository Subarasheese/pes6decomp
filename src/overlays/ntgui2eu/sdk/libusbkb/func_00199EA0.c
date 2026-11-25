/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK libvifpk, reconstructed from the PES6 executable. */
typedef unsigned int u_int;
typedef unsigned long u_long;
typedef unsigned int u_long128 __attribute__((mode(TI)));

/* The close routines fill in the counts of the tags left open in this packet. */
typedef struct {
    u_int *cur;
    u_long128 *base;
    u_int *dmaTag;
    u_int *vifCode;
    u_int pad10;
    u_long *gifTag;
} sceVifPacket;

u_int *func_00199DF0(sceVifPacket *pkt);

/* Close the open tag and open a RET tag. */
void func_00199EA0(sceVifPacket *pkt, u_int flag) {
    u_int *tag = func_00199DF0(pkt);
    u_int *p = pkt->cur;

    *p++ = flag | 0x60000000;
    pkt->dmaTag = tag;
    pkt->vifCode = 0;
    p[0] = 0;
    pkt->cur = p + 1;
}
