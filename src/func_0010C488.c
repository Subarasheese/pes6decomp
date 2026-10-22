/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
typedef unsigned int u32;
struct Sema { int a; int max; int init; int d; int e; const char *opt; };
struct Stat { unsigned char bytes[64]; };
struct Blk { int sema; int *res; int n8; int flags; struct Stat stat; unsigned char path[0x400]; };
extern struct Blk D_003EDD00;
extern int D_0037138C;
extern char D_003EF400[];
extern char D_003EE940[];
extern char D_003C3DD0[];
extern int func_00105360(struct Sema *);
extern void func_00105370(int);
extern int WaitSema(int);
extern u32 func_00109B50(int, int, int, int, int, int, int, int, int, int);
extern int func_0010A0C0(int);
extern void func_0010A0F0(void);
extern void func_0010A1E8(void);

extern void sceSifWriteBackDCache(void *, int);

int func_0010C488(const unsigned char *path, const struct Stat *stat, int flags)
{
    struct Blk *b = &D_003EDD00;
    int i;
    int sema;
    int res;
    int ok;
    struct Sema sp;
    func_0010A0C0(13);
    if (D_0037138C == 0)
        func_0010A1E8();
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
    sp.opt = D_003C3DD0;
    sema = func_00105360(&sp);
    b->res = &res;
    b->sema = sema;
    b->n8 = 4;
    sceSifWriteBackDCache(&D_003EDD00,0x450);
    if ((int)func_00109B50((int)D_003EF400, 13, 0, (int)&D_003EDD00, i+0x51, (int)D_003EE940, 4, 0, 0, 0) < 0) {
        func_00105370(sema);
        func_0010A0F0();
        return -0xB;
    }
    ok = *(int *)((u32)D_003EE940 | 0x20000000);
    func_0010A0F0();
    if (ok == 0) {
        func_00105370(sema);
        return -0xB;
    }
    WaitSema(sema);
    func_00105370(sema);
    return res;
}