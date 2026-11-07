/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
typedef unsigned int u32;
struct Sema { int a; int max; int init; int d; int e; const char *opt; };
struct Blk { int sema; int *res; int n8; char path[0x400]; char path2[0x400]; char data[0x400]; int flags; int size; };
extern struct Blk D_003EDD00;
extern int D_0037138C;
extern char D_003EF400[];
extern char D_003EE940[];
extern char D_003C3E18[];
extern int func_00105360(struct Sema *);
extern void func_00105370(int);
extern int WaitSema(int);
extern u32 func_00109B50(int, int, int, int, int, int, int, int, int, int);
extern int func_0010A0C0(int);
extern void func_0010A0F0(void);
extern void func_0010A1E8(void);

extern void sceSifWriteBackDCache(void *, int);

int func_0010CAB0(const unsigned char *path, const unsigned char *path2, int flags, const unsigned char *data, int size)
{
    struct Blk *b = &D_003EDD00;
    int i;
    int sema;
    int res;
    int ok;
    struct Sema sp;
    func_0010A0C0(20);
    if (D_0037138C == 0)
        func_0010A1E8();
    for (i = 0; i < 0x400; i++) {
        if ((b->path[i] = path[i]) == 0)
            break;
    }
    if (i == 0x400) {
        b->path[0x3FF] = 0;

    }
    {
        for (i=0; i<0x400; i++) {
            if ((b->path2[i]=path2[i]) == 0) break;
        }
        if(i==0x400) b->path2[0x3ff]=0;
    }
    if(size>0x400) {func_0010A0F0(); return -7;}
    for(i=0;i<size;i++) b->data[i]=data[i];
    b->size=size;
    b->flags=flags;
    sp.max = 1;
    sp.init = 0;
    sp.opt = D_003C3E18;
    sema = func_00105360(&sp);
    b->res = &res;
    b->sema = sema;
    b->n8 = 4;
    sceSifWriteBackDCache(&D_003EDD00,0xC14);
    if ((int)func_00109B50((int)D_003EF400, 20, 0, (int)&D_003EDD00, 0xC14, (int)D_003EE940, 4, 0, 0, 0) < 0) {
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