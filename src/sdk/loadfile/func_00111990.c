/* compiler: ee-gcc-2.9-G0 */
/* Komasia/sly2-decomp, src/lib/_send_to_iop.c (_send_to_iop). See THIRD_PARTY.md. */

/* _send_to_iop (libpad): DMA the 0x20-byte pad command to the IOP double buffer (Claude agent). */
typedef struct {
    int x0;
    int x4;
    int x8;
    unsigned char data[0x14];
} PadCmd;
typedef struct {
    unsigned char *buf;
    PadCmd *cmd;
    unsigned int dest;
    unsigned int dmaid;
    int open;
    int x14;
    int x18;
} PadSt;
typedef struct {
    void *src;
    void *dest;
    int size;
    int attr;
} SifDmaData;
extern PadSt D_003F3250[2][4];
extern int D_003729D4;
extern char D_003C3FC8[];
int sceSifDmaStat(unsigned int);
void SyncDCache(void *, void *);
unsigned int sceSifSetDma(SifDmaData *, int);
void printf(const char *, ...);

int func_00111990(int port, int slot) {
    SifDmaData dma[16];
    PadCmd *c;
    unsigned int id;
    unsigned int dest;
    int n;

    c = D_003F3250[port][slot].cmd;
    if (D_003F3250[port][slot].dmaid != 0 && sceSifDmaStat(D_003F3250[port][slot].dmaid) >= 0) {
        if (D_003729D4)
            printf(D_003C3FC8);
        return 0;
    }
    n = c->x0 + 1;
    dest = D_003F3250[port][slot].dest + ((n & 1) << 5);
    c->x0 = n;
    SyncDCache(c, (char *)c + 0x1F);
    dma[0].dest = (void *)dest;
    dma[0].src = c;
    dma[0].size = 0x20;
    dma[0].attr = 0;
    id = sceSifSetDma(dma, 1);
    if (id == 0) {
        if (D_003729D4)
            printf(D_003C3FC8);
        return 0;
    }
    D_003F3250[port][slot].dmaid = id;
    return 1;
}
