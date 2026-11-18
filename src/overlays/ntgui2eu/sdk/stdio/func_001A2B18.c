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

extern int D_005CABE4;
extern struct DevctlBuf D_01203340;
extern char D_01204A40[];
extern char D_01203F80[];
extern char D_00600738[];

extern int func_0019FC48(int);
extern void func_0019FD70(void);
extern void func_0019FC78(void);
extern int func_0019B120(struct SemaParam *);
extern int func_0019B130(int);
extern int func_0019B160(int);
extern void func_0019E3F8(void *, int);
extern int func_0019F6D8(void *, int, int, void *, int, void *, int, void *, void *, int);

int func_001A2B18(const char *name, int cmd, struct DevctlArg *arg, u32 arglen, void *bufp, u32 buflen)
{
    struct SemaParam sp;
    int result;
    int sema;
    int rpc;
    int i;
    u32 j;
    int stat;
    struct DevctlBuf *b;

    func_0019FC48(0x17);
    b = &D_01203340;
    if (D_005CABE4 == 0) {
        func_0019FD70();
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
            func_0019FC78();
            return 0;
        }
        if (arg->count == 0) {
        inval:
            func_0019FC78();
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
    sp.option = (u32)D_00600738;
    sema = func_0019B120(&sp);
    b->buflen = buflen;
    b->result = &result;
    b->rsize = 4;
    b->bufp = bufp;
    b->sema = sema;
    if (cmd == 0x4601) {
        rpc = 0x1C;
        func_0019E3F8((void *)arg->addr, arg->size * arg->count);
    } else {
        rpc = 0x17;
    }
    func_0019E3F8(&D_01203340, 0x81C);
    if (func_0019F6D8(D_01204A40, rpc, 0, &D_01203340, 0x81C, D_01203F80, 4, 0, 0, 0) < 0) {
        func_0019B130(sema);
        func_0019FC78();
        return -11;
    }
    stat = *(int *)((u32)D_01203F80 | 0x20000000);
    func_0019FC78();
    if (stat == 0) {
        func_0019B130(sema);
        return -11;
    }
    func_0019B160(sema);
    func_0019B130(sema);
    return result;
}
