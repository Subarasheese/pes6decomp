/* compiler: ee-gcc-2.9-G0 */
/* Source: devin-thomas/guilty-gear-x-plus, src/sdk/sce/libdma.c (sceDmaPause). See
 * LICENSES/ggx-CC0.txt. */
typedef struct DmaChan {
    volatile int chcr;
    int pad0[3];
    int madr;
    int pad1[3];
    int qwc;
    int pad2[3];
    int tadr;
} DmaChan;
extern int DIntr(void);
extern int EIntr(void);

int func_00102538(DmaChan *ch) {
    int oldi = DIntr();
    unsigned int enabler = *((volatile int *)0x1000F520);
    unsigned int chcr;
    if (!(enabler & 0x10000)) {
        *((volatile int *)0x1000F590) = enabler | 0x10000;
    }
    *((volatile int *)0x1000E000);
    chcr = ch->chcr;
    ch->chcr = chcr & (~0x100);
    *((volatile int *)0x1000F590) = enabler;
    if (oldi) {
        EIntr();
    }
    return chcr;
}
