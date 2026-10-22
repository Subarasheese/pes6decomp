/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
typedef unsigned int u32;
struct Sema { int a; int max; int init; int d; int e; const char *opt; };
struct Ent { int p0; int p4; int p8; int pc; };
struct Blk { int sema; int *res; int n8; int pc; int p10; };
extern struct Blk D_003EDD00;
extern struct Ent D_003EF200[];
extern int D_0037138C;
extern char D_003EF400[];
extern char D_003EE940[];
extern char D_003C3C98[];
extern int func_00105360(struct Sema *);
extern void func_00105370(int);
extern int WaitSema(int);
extern u32 func_00109B50(int, int, int, int, int, int, int, int, int, int);
extern struct Ent *func_00109C40(unsigned int);
extern int func_0010A0C0(int);
extern void func_0010A0F0(void);

static inline int clamp_result(int x, int limit) { return x > limit ? 0 : x; }

int func_0010A978(unsigned int fd)
{
    struct Blk *b = &D_003EDD00;
    struct Ent *e;
    int sema;
    int res;
    int ok;
    struct Sema sp;
    e = func_00109C40(fd);
    func_0010A0C0(1);
    if (D_0037138C == 0 || e == 0 || e->p4 == 0) {
        func_0010A0F0();
        return -9;
    }
    b->pc = e->p0;
    b->p10 = e - D_003EF200;
    sp.max = 1;
    sp.init = 0;
    sp.opt = D_003C3C98;
    sema = func_00105360(&sp);
    b->sema = sema;
    b->res = &res;
    b->n8 = 4;
    if ((int)func_00109B50((int)D_003EF400, 1, 0, (int)&D_003EDD00, 0x14, (int)D_003EE940, 4, 0, 0, 0) < 0) {
        func_00105370(sema);
        func_0010A0F0();
        return -0xB;
    }
    e->p4 = 0;
    ok = *(int *)((u32)D_003EE940 | 0x20000000);
    func_0010A0F0();
    if (ok == 0) {
        func_00105370(sema);
        return -0xB;
    }
    WaitSema(sema);
    func_00105370(sema);
    return clamp_result(res, -1);
}
