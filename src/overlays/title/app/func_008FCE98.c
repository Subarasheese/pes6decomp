/* compiler: ee-gcc-2.9-as210-G0 */
/* Komasia/sly2-decomp, src/lib/_sceMpegCscStoreRefImage.c (_sceMpegCscStoreRefImage). See
 * THIRD_PARTY.md. */

/* _sceMpegCscStoreRefImage (libmpeg, Claude agent): DMA the reference image to the IPU (toIPU ch4,
   chunked via the _ch4dma handler when > 0xFFFF qw) and CSC it back (fromIPU ch3; _doCSC2 for >=
   0x400 MBs). The CSC part is an inline function used twice; the IPU command helper sets
   d->x82C/x828. */
typedef struct {
    int type;
    int pad[7];
} CB;
typedef struct {
    unsigned int size;
    unsigned int addr;
    int pad[2];
} ST;
typedef struct {
    unsigned int addr;
    int x4;
    int x8;
    int w;
    int h;
} P;
typedef struct {
    char p0[0xEC];
    unsigned int xEC;
    char pF0[0x828 - 0xF0];
    int x828;
    int x82C;
    char p830[0x868 - 0x830];
    void *mp;
} D;
#define R(a) (*(volatile unsigned int *)(a))
#define RS(a) (*(volatile int *)(a))
int D_008FD4B8(int ch, void *arg);
int func_00105080(int ch, int (*h)(int, void *), int next, void *arg);
int RemoveDmacHandler(int ch, int id);
int func_00105F78(int ch);
int DisableDmac(int ch);
void FlushCache(int);
int DIntr(void);
int EIntr(void);
int func_008FBDB0(void *mp, CB *cb);
void func_008FCCD8(D *d, unsigned int out, int n);

static inline void ipuCmd(D *d, unsigned int cmd) {
    R(0x10002000) = cmd;
    d->x82C = cmd & 0xF0000000;
    if ((cmd & 0xF0000000) == 0x20000000 || (cmd & 0xF0000000) == 0x30000000 ||
        (cmd & 0xF0000000) == 0x40000000)
        d->x828 = 0;
    else
        d->x828 = 1;
}

static inline void cscStore(D *d, int n) {
    CB cb2;
    CB *pcb;
    unsigned int out;
    int qwc;
    int e;
    if (n < 0x400) {
        out = d->xEC;
        pcb = &cb2;
        qwc = n << 6;
        while (RS(0x10002010) < 0)
            ;
        e = DIntr();
        {
            volatile unsigned int *m = (void *)0x1000B010, *q = (void *)0x1000B020,
                                  *c = (void *)0x1000B000;
            *m = out & 0x0FFFFFFF;
            *q = qwc;
            *c = 0x100;
        }
        if (e)
            EIntr();
        ipuCmd(d, n | 0x70000000);
        pcb->type = 4;
        func_008FBDB0(d->mp, &cb2);
        while ((R(0x1000B000) >> 8) & 1)
            ;
        while (RS(0x10002010) < 0)
            ;
    } else {
        func_008FCCD8(d, d->xEC, n);
    }
}

void func_008FCE98(D *d, P *p) {
    CB cb;
    ST st;
    int n, id, e;

    n = p->w * p->h;
    cb.type = 2;
    func_008FBDB0(d->mp, &cb);
    if (R(0x10002010) & 0x4000)
        R(0x10002010) = 0x40000000;
    while (RS(0x10002010) < 0)
        ;
    ipuCmd(d, 0);
    while (RS(0x10002010) < 0)
        ;
    FlushCache(0);
    st.addr = p->addr & 0x0FFFFFFF;
    st.size = n * 0x18;
    if (st.size > 0xFFFF) {
        id = func_00105080(4, D_008FD4B8, 0, &st);
        R(0x1000E010) = 0x10;
        func_00105F78(4);
        e = DIntr();
        {
            volatile unsigned int *m = (void *)0x1000B410, *q = (void *)0x1000B420,
                                  *c = (void *)0x1000B400;
            *m = st.addr;
            *q = 0xFFFF;
            *c = 0x101;
        }
        if (e)
            EIntr();
        st.addr = (st.addr + 0xFFFF0) & 0x0FFFFFFF;
        st.size -= 0xFFFF;
        cscStore(d, n);
        DisableDmac(4);
        RemoveDmacHandler(4, id);
    } else {
        e = DIntr();
        {
            volatile unsigned int *m = (void *)0x1000B410, *q = (void *)0x1000B420,
                                  *c = (void *)0x1000B400;
            *m = p->addr & 0x0FFFFFFF;
            *q = st.size;
            *c = 0x101;
        }
        if (e)
            EIntr();
        st.size = 0;
        cscStore(d, n);
    }
    cb.type = 3;
    func_008FBDB0(d->mp, &cb);
}
