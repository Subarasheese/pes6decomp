/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
typedef int s32;
typedef unsigned int u32;

struct SemaParam {
    int count;
    int max_count;
    int init_count;
    int wait_threads;
    u32 attr;
    u32 option;
};

struct DevctlArg {
    int pad0;
    int size;
    int addr;
    int count;
};

struct DevctlBuf {
    int sema;
    int *result;
    int rsize;
    char name[0x400];
    char arg[0x400];
    int cmd;
    u32 arglen;
    void *bufp;
    u32 buflen;
};

extern int D_0037138C;
extern struct DevctlBuf D_003EDD00;
extern char D_003EF400[];
extern char D_003EE940[];
extern char D_003C3E48[];

extern int func_0010A0C0(int);
extern void func_0010A1E8(void);
extern void func_0010A0F0(void);
extern int func_00105360(struct SemaParam *);
extern int func_00105370(int);
extern int WaitSema(int);
extern void sceSifWriteBackDCache(void *, int);
extern int func_00109B50(void *, int, int, void *, int, void *, int, void *, void *, int);

int func_0010CF90(const char *name, int cmd, struct DevctlArg *arg, u32 arglen, void *bufp, u32 buflen)
{
    struct SemaParam sp;
    int result;
    int sema;
    int rpc;
    int i;
    u32 j;
    int stat;
    struct DevctlBuf *b;

    func_0010A0C0(0x17);
    b = &D_003EDD00;
    if (D_0037138C == 0) {
        func_0010A1E8();
    }
    for (i = 0; i < 0x400; i++) {
        if ((b->name[i] = name[i]) == 0) {
            break;
        }
    }
    if (i == 0x400) {
        b->name[0x3FF] = 0;
    }
    if (arglen > 0x400 || buflen > 0x400) {
        goto inval;
    }
    if (cmd == 0x4601) {
        if (arg->size == 0) {
            func_0010A0F0();
            return 0;
        }
        if (arg->count == 0) {
        inval:
            func_0010A0F0();
            return -22;
        }
    }
    for (j = 0; j < arglen; j++) {
        b->arg[j] = ((char *)arg)[j];
    }
    b->arglen = arglen;
    b->cmd = cmd;
    sp.init_count = 0;
    sp.max_count = 1;
    sp.option = (u32)D_003C3E48;
    sema = func_00105360(&sp);
    b->buflen = buflen;
    b->result = &result;
    b->rsize = 4;
    b->bufp = bufp;
    b->sema = sema;
    if (cmd == 0x4601) {
        rpc = 0x1C;
        sceSifWriteBackDCache((void *)arg->addr, arg->size * arg->count);
    } else {
        rpc = 0x17;
    }
    sceSifWriteBackDCache(&D_003EDD00, 0x81C);
    if (func_00109B50(D_003EF400, rpc, 0, &D_003EDD00, 0x81C, D_003EE940, 4, 0, 0, 0) < 0) {
        func_00105370(sema);
        func_0010A0F0();
        return -11;
    }
    stat = *(int *)((u32)D_003EE940 | 0x20000000);
    func_0010A0F0();
    if (stat == 0) {
        func_00105370(sema);
        return -11;
    }
    WaitSema(sema);
    func_00105370(sema);
    return result;
}
