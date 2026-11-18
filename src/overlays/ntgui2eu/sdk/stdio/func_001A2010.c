/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
typedef unsigned int u32;
struct Sema { int a; int max; int init; int d; int e; const char *opt; };
struct Stat { unsigned char bytes[64]; };
struct Blk { int sema; int *res; int n8; int flags; struct Stat stat; unsigned char path[0x400]; };
extern struct Blk D_01203340;
extern int D_005CABE4;
extern char D_01204A40[];
extern char D_01203F80[];
extern char D_006006C0[];
extern int func_0019B120(struct Sema *);
extern void func_0019B130(int);
extern int func_0019B160(int);
extern u32 func_0019F6D8(int, int, int, int, int, int, int, int, int, int);
extern int func_0019FC48(int);
extern void func_0019FC78(void);
extern void func_0019FD70(void);

extern void func_0019E3F8(void *, int);

int func_001A2010(const unsigned char *path, const struct Stat *stat, int flags)
{
    struct Blk *b = &D_01203340;
    int i;
    int sema;
    int res;
    int ok;
    struct Sema sp;
    func_0019FC48(13);
    if (D_005CABE4 == 0)
        func_0019FD70();
    for (i = 0; i < 0x400; i++) {
        if ((b->path[i] = path[i]) == 0)
            break;
    }
    if (i == 0x400) {
        b->path[0x3FF] = 0;
        i=0x3ff;

    }
    b->stat=*stat;
    b->flags=flags;
    sp.max = 1;
    sp.init = 0;
    sp.opt = D_006006C0;
    sema = func_0019B120(&sp);
    b->res = &res;
    b->sema = sema;
    b->n8 = 4;
    func_0019E3F8(&D_01203340,0x450);
    if ((int)func_0019F6D8((int)D_01204A40, 13, 0, (int)&D_01203340, i+0x51, (int)D_01203F80, 4, 0, 0, 0) < 0) {
        func_0019B130(sema);
        func_0019FC78();
        return -0xB;
    }
    ok = *(int *)((u32)D_01203F80 | 0x20000000);
    func_0019FC78();
    if (ok == 0) {
        func_0019B130(sema);
        return -0xB;
    }
    func_0019B160(sema);
    func_0019B130(sema);
    return res;
}
