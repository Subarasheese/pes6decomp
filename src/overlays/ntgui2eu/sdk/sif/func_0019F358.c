/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
typedef struct SifServe {
    unsigned int command;
    void *(*func)(unsigned int, void *, int);
    void *buff;
    int size;
    void *cfunc;
    void *cbuff;
    int csize;
    void *client;
    unsigned int paddr;
    unsigned int fno;
    void *receive;
    int rsize;
    int rmode;
    unsigned int rid;
} SifServe;

typedef struct SifPkt {
    char pad0[0x10];
    int f10;
    char pad14[4];
    int f18;
    void *f1c;
    unsigned int f20;
} SifPkt;

typedef struct SifDma {
    unsigned int data;
    unsigned int addr;
    int size;
    int mode;
} SifDma;

extern char D_012032C0[];
extern int func_0019B4E0(SifDma *, int);
extern int func_0019E230(int, void *, int, void *, void *, int);
extern void func_0019E3F8(void *, int);
extern SifPkt *func_0019E738(void *);
extern SifPkt *func_0019E768(void *, int);
extern int func_001A4728(void);
extern int func_001A4778(void);

void func_0019F358(SifServe *sd)
{
    SifPkt *pkt;
    int n;
    int rsize = 0;
    void *rbuff;
    SifDma dmat[2];
    int id;
    int i;

    rbuff = sd->func(sd->fno, sd->buff, sd->size);
    if (rbuff != 0)
        rsize = sd->rsize;
    if (sd->size > 0)
        func_0019E3F8(sd->buff, sd->size);
    if (rsize > 0)
        func_0019E3F8(rbuff, rsize);
    func_001A4728();
    if (sd->rid & 4)
        pkt = func_0019E768(D_012032C0, sd->rid >> 16);
    else
        pkt = func_0019E738(D_012032C0);
    func_001A4778();
    pkt->f20 = 0x8000000A;
    pkt->f1c = sd->client;
    if (sd->rmode) {
        while (func_0019E230(0x80000008, pkt, 0x40, rbuff, sd->receive, rsize) == 0)
            ;
        return;
    }
    pkt->f18 = 0;
    n = 0;
    pkt->f10 = 0;
    if (rsize > 0) {
        n = 1;
        dmat[0].data = (unsigned int)rbuff;
        dmat[0].addr = (unsigned int)sd->receive;
        dmat[0].size = rsize;
        dmat[0].mode = 0;
    }
    dmat[n].data = (unsigned int)pkt;
    dmat[n].addr = sd->paddr;
    dmat[n].size = 0x40;
    dmat[n].mode = 0;
    n++;
    while ((id = func_0019B4E0(dmat, n)) == 0) {
        for (i = 0x100000; i != -1; i--) ;
        if (id != 0)
            break;
    }
}
