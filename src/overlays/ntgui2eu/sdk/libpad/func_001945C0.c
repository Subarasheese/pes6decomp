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
extern PadSt D_011FD510[2][4];
extern int D_005CA9E4;
extern char D_005FF1A8[];
int func_0019B4C0(unsigned int);
void func_0019BA18(void *, void *);
unsigned int func_0019B4E0(SifDmaData *, int);
void func_0019DBD0(const char *, ...);

int func_001945C0(int port, int slot) {
    SifDmaData dma[16];
    PadCmd *c;
    unsigned int id;
    unsigned int dest;
    int n;

    c = D_011FD510[port][slot].cmd;
    if (D_011FD510[port][slot].dmaid != 0 && func_0019B4C0(D_011FD510[port][slot].dmaid) >= 0) {
        if (D_005CA9E4)
            func_0019DBD0(D_005FF1A8);
        return 0;
    }
    n = c->x0 + 1;
    dest = D_011FD510[port][slot].dest + ((n & 1) << 5);
    c->x0 = n;
    func_0019BA18(c, (char *)c + 0x1F);
    dma[0].dest = (void *)dest;
    dma[0].src = c;
    dma[0].size = 0x20;
    dma[0].attr = 0;
    id = func_0019B4E0(dma, 1);
    if (id == 0) {
        if (D_005CA9E4)
            func_0019DBD0(D_005FF1A8);
        return 0;
    }
    D_011FD510[port][slot].dmaid = id;
    return 1;
}
