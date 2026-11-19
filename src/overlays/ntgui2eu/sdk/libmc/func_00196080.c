/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
struct Block {
    int count0, count4;
    unsigned char *dst8, *dstC;
    unsigned char buf10[64], buf50[64];
};
extern int D_005CAA38;
void func_0019B150(int);
void func_00196080(unsigned int addr) {
    struct Block *p = (struct Block *)(addr | 0x20000000);
    unsigned char *dst, *uncached;
    int i;
    if (p->count0 != 0) {
        dst = p->dst8;
        uncached = (unsigned char *)((unsigned int)dst | 0x20000000);
        for (i = 0; i < p->count0; i++) {
            unsigned char v = p->buf10[i];
            *dst = v;
            *uncached = v;
            dst++;
            uncached++;
        }
    }
    if (p->count4 != 0) {
        unsigned char *dst2, *uncached2;
        int j;
        dst2 = p->dstC;
        uncached2 = (unsigned char *)((unsigned int)dst2 | 0x20000000);
        for (j = 0; j < p->count4; j++) {
            unsigned char v = p->buf50[j];
            *dst2 = v;
            *uncached2 = v;
            dst2++;
            uncached2++;
        }
    }
    func_0019B150(D_005CAA38);
}
