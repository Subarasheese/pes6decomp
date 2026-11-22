/* compiler: ee-gcc-2.9-G0 */
/* crashbashash/DW4_Decomp, src/sony/libdma/libdma.c (WatchDma). See THIRD_PARTY.md. */

typedef struct {
    unsigned int DIR : 1;
    unsigned int p0 : 1;
    unsigned int MOD : 2;
    unsigned int ASP : 2;
    unsigned int TTE : 1;
    unsigned int TIE : 1;
    unsigned int STR : 1;
} tD_CHCR;
typedef union {
    tD_CHCR f;
    unsigned int word;
} uD_CHCR;
typedef struct {
    uD_CHCR chcr;
    unsigned int p0[3];
    unsigned int madr;
    unsigned int p1[3];
    unsigned int qwc;
    unsigned int p2[3];
    unsigned int tadr;
    unsigned int p3[3];
    unsigned int as0;
    unsigned int p4[3];
    unsigned int as1;
    unsigned int p5[11];
    unsigned int sadr;
} sceDmaChan;
extern void printf(const char *format, ...);
extern unsigned int func_00102538(sceDmaChan *d);

void func_00101E10(sceDmaChan *d, unsigned int addr, int limit) {
    int n = (limit) ? (limit) : (0x1000000);
    while ((*((volatile unsigned int *)(&d->madr))) < addr) {
        if ((--n) < 0) {
            printf("libdma: sync timeout\n");
            func_00102538(d);
        }
    }
}
