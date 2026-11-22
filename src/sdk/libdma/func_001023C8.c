/* compiler: ee-gcc-2.9-G0 */
/* zm2283145/syphon-filter-omega-strain-decomp, src/lib/libgraph/libgraph_104070.c (sceDmaRecvN).
 * See THIRD_PARTY.md. */

typedef struct {
    volatile int chcr;
    int p0[3];
    volatile unsigned int madr;
    int p1[3];
    volatile unsigned int qwc;
    int p2[3];
    volatile unsigned int tadr;
} DmaChan;
extern void DmaWaitChannelIdle(DmaChan *);
extern unsigned int DmaToPhysicalAddress(void *);

void func_001023C8(DmaChan *d, void *addr, int qwc) {
    unsigned int a = DmaToPhysicalAddress(addr);
    int c;
    DmaWaitChannelIdle(d);
    if (d->madr != 0xFFFFFFFF)
        d->madr = a;
    c = d->chcr;
    d->qwc = qwc;
    c &= ~0xC;
    c &= ~1;
    c |= 0x100;
    d->chcr = c;
}
