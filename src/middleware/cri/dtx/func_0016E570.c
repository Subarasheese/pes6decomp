/* compiler: ee-gcc-2.96-G0 */
/* DTX_ExecHndl adapted from LucasPicoli/god-hand-decomp, src/cod/00332398.c. See THIRD_PARTY.md. */
extern int D_0038592C;
extern int D_00385938;
typedef struct {
    char pad0[0x3C];
    int seq;
} IopXferHdr;
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} SifDmaData;
typedef struct {
    signed char b0;
    signed char state;
    char pad2[6];
    int count;
    char *buf;
    int size;
    IopXferHdr *hdr;
    unsigned int dest;
    unsigned int dsize;
    void (*recv)(int arg, char *buf, int size);
    int recvArg;
    void (*fill)(int arg, char *buf, int size);
    int fillArg;
    SifDmaData dma;
    int id;
} IopXfer;
extern void InvalidDCache(void *start, void *end);
extern void SyncDCache(void *start, void *end);
extern int sceSifSetDma(SifDmaData *dma, int n);
void func_0016E570(IopXfer *x) {
    D_00385938++;
    if ((x->state == 1) && (x->count < x->hdr->seq)) {
        InvalidDCache(x->buf, (x->size + x->buf) - 1);
        x->recv(x->recvArg, x->buf, x->size);
        x->count = x->hdr->seq;
        x->state = 0;
    }
    if (((*((int *)x)) & 0xFFFF00) != 0x10000) {
        return;
    }
    if (D_0038592C != 1) {
        return;
    }
    x->fill(x->fillArg, x->buf, x->size);
    x->count++;
    x->hdr->seq = x->count;
    SyncDCache(x->buf, (x->buf + x->size) - 1);
    InvalidDCache(x->buf, (x->buf + x->size) + 0x3F);
    x->dma.data = ((unsigned int)x->buf) & 0x0FFFFFFF;
    x->dma.addr = x->dest;
    x->dma.size = x->dsize;
    x->dma.mode = 0;
    while ((x->id = sceSifSetDma(&x->dma, 1)) == 0) {
    }

    x->state = 1;
}
