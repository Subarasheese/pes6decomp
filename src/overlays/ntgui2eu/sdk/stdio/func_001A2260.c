/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
typedef unsigned int u32;
struct Sema { int a; int max; int init; int d; int e; const char *opt; };
struct Blk { int sema; int *res; int n8; char path[0x400]; char path2[0x400]; char data[0x400]; int flags; int size; };
extern struct Blk D_01203340;
extern int D_005CABE4;
extern char D_01204A40[];
extern char D_01203F80[];
extern char D_006006D8[];
extern int func_0019B120(struct Sema *);
extern void func_0019B130(int);
extern int func_0019B160(int);
extern u32 func_0019F6D8(int, int, int, int, int, int, int, int, int, int);
extern int func_0019FC48(int);
extern void func_0019FC78(void);
extern void func_0019FD70(void);

extern void func_0019E3F8(void *, int);

int func_001A2260(const char *path, const char *path2)
{
    struct Blk *b = &D_01203340;
    int i;
    int sema;
    int res;
    int ok;
    struct Sema sp;
    func_0019FC48(17);
    if (D_005CABE4 == 0)
        func_0019FD70();
    for (i = 0; i < 0x400 && (b->path[i] = path[i]); i++);
    if (i == 0x400) {
        b->path[0x3FF] = 0;

    }
    {
        for (i=0; i<0x400 && (b->path2[i]=path2[i]); i++);
        if(i==0x400) b->path2[0x3ff]=0;
    }
    sp.max = 1;
    sp.init = 0;
    sp.opt = D_006006D8;
    sema = func_0019B120(&sp);
    b->res = &res;
    b->sema = sema;
    b->n8 = 4;
    func_0019E3F8(&D_01203340,0x80C);
    if ((int)func_0019F6D8((int)D_01204A40, 17, 0, (int)&D_01203340, 0x80C, (int)D_01203F80, 4, 0, 0, 0) < 0) {
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
