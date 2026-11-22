/* compiler: ee-gcc-2.9-as210-G0 */
/* Komasia/sly2-decomp, src/lib/_doCSC2.c (_doCSC2). See THIRD_PARTY.md. */

typedef struct {
    volatile int cnt;
    int done;
    int rem;
    unsigned int addr;
    int total;
} CSC;
typedef struct {
    int type;
    int pad[7];
} CB;
typedef struct {
    char p0[0x868];
    void *mp;
} D;
#define R(a) (*(volatile unsigned int *)(a))
#define RS(a) (*(volatile int *)(a))
int D_008FD370(int ch, void *arg);
int func_00105080(int ch, int (*h)(int, void *), int next, void *arg);
int RemoveDmacHandler(int ch, int id);
int func_00105F78(int ch);
int DisableDmac(int ch);
int DIntr(void);
int EIntr(void);
int func_008FBDB0(void *mp, CB *cb);
void func_00900500(D *d, const char *msg);
void func_008FCCD8(D *d, unsigned int out, int n) {
    CB cb;
    CSC c;
    int id;
    int e;

    c.total = n / 1023 + 1;
    c.rem = n;
    c.addr = (out + 0xFFC00) & 0x0FFFFFFF;
    c.done = 0;
    c.cnt = 0;
    while (RS(0x10002010) < 0)
        ;
    id = func_00105080(3, D_008FD370, 0, &c);
    R(0x1000E010) = 8;
    func_00105F78(3);
    e = DIntr();
    {
        volatile unsigned int *m = (void *)0x1000B010, *q = (void *)0x1000B020,
                              *c = (void *)0x1000B000;
        *m = out & 0x0FFFFFFF;
        *q = 0xFFC0;
        *c = 0x100;
    }
    if (e)
        EIntr();
    R(0x10002000) = 0x700003FF;
    cb.type = 4;
    func_008FBDB0(d->mp, &cb);
    while (c.cnt < c.total)
        ;
    if (c.done)
        func_00900500(d, "CSC handler error\n");
    while (RS(0x10002010) < 0)
        ;
    DisableDmac(3);
    RemoveDmacHandler(3, id);
}
