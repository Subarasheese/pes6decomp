/* compiler: ee-gcc-2.9-G0 */
/* Source: nathanialf/ico, sce/libpkt/vifpk044.c (sceVif1PkAlign). See LICENSES/ico-MIT.txt. */
typedef struct {
    unsigned int *cur;
    unsigned int *base;
    unsigned int *dmaTag;
    unsigned int *vifCode;
    char pad10[4];
    unsigned int *gifTag;
} sceVif1Packet;

void func_0019A098(sceVif1Packet *pkt, int bit, int pos) {
    unsigned int m = 0xFFFFFFFF >> (32 - ((bit + 2) & 31));
    unsigned int *p = pkt->cur;
    unsigned int *q;
    unsigned int a = (((unsigned int)p) & (~m)) + (pos * 4);
    if (a < ((unsigned int)p)) {
        unsigned int t = a + 1;
        a = t + m;
    }
    if (((unsigned int)p) < a) {
        goto fill;
        do {
            p = q;
        fill:
            q = p + 1;

            *p = 0;
            pkt->cur = q;
        } while (((unsigned int)q) < a);
    }
}
