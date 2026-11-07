/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
typedef unsigned int u32;
struct Sema { int a; int max; int init; int d; int e; const char *opt; };
struct Blk { int sema; int *res; int n8; void *arg; };
extern struct Blk D_003EDD00;
extern int D_0037138C;
extern char D_003EF400[];
extern char D_003EE940[];
extern char D_003C3D70[];
extern int func_00105360(struct Sema *);
extern void func_00105370(int);
extern int WaitSema(int);
extern u32 func_00109B50(int, int, int, int, int, int, int, int, int, int);
extern int func_0010A0C0(int);
extern void func_0010A0F0(void);
extern void func_0010A1E8(void);

/* sceFsAddDrv */
int func_0010BDF8(void *drv)
{
    struct Blk *b = &D_003EDD00;
    int sema;
    int res;
    int ok;
    struct Sema sp;
    func_0010A0C0(0xF);
    if (D_0037138C == 0)
        func_0010A1E8();
    b->arg = drv;
    sp.max = 1;
    sp.init = 0;
    sp.opt = D_003C3D70;
    sema = func_00105360(&sp);
    b->sema = sema;
    b->res = &res;
    b->n8 = 4;
    if ((int)func_00109B50((int)D_003EF400, 0xF, 0, (int)&D_003EDD00, 0x10, (int)D_003EE940, 4, 0, 0, 0) < 0) {
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
