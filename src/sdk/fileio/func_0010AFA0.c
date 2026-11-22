/* compiler: ee-gcc-2.9-as210-G0 */
/* Komasia/sly2-decomp, src/lib/sceWrite.c (sceWrite). See THIRD_PARTY.md. */

/* libkernel fileio sceWrite (Lilly's agent, T1573; same recipe as sceRead, T1568). Keys: `nowait`
   assigned in a nested do{do{}while(0);}while(0) after `i = 0` (loop-depth weight gives the
   target's s4 nowait > s5 sema > s6 size > s7 flags priority); a separate counter j for the
   head-copy loop; and a dead first statement in each arm (`r = (int)D_002C49F8;`, `n = buf &
   0xF;`): it computes the arm's `lui`/andi itself, so gcse PRE no longer appends it AFTER `i = 0` /
   `nowait = 0`. */
struct iob {
    int fd, flags, x8, xC;
};
struct SemaParam {
    int currentCount;
    int maxCount;
    int initCount;
    int numWaitThreads;
    unsigned int attr;
    unsigned int option;
};
typedef struct {
    int sema;
    int *res;
    int rsize;
    int fd;
    void *buf;
    int size;
    int nhead;
    char head[16];
    int idx;
} WriteArg;
extern int D_0037138C;
extern int D_0037139C;
extern int D_00371308[32];
extern WriteArg D_003EDD00;
extern struct iob D_003EF200[];
extern char D_003EF400[];
extern int D_003EE940[];
extern char D_003C3CE0[];
struct iob *func_00109C40(int);
int func_0010A0C0(int);
void func_0010A0F0(void);
void sceSifWriteBackDCache(void *, int);
int func_00105360(struct SemaParam *);
int func_00105370(int);
int func_00105380(int);
int WaitSema(int);
int func_00109B50(void *, int, int, void *, int, void *, int, void *, void *, int);
int func_0010AFA0(int fd, const void *buf, int size) {
    struct SemaParam sp;
    int res;
    struct iob *io;
    WriteArg *arg;
    int sema, r, flags, nowait, i, n, j;

    arg = &D_003EDD00;
    io = func_00109C40(fd);
    func_0010A0C0(3);
    if (D_0037138C == 0 || io == 0 || (flags = io->flags) == 0) {
        func_0010A0F0();
        return -9;
    }
    arg->fd = io->fd;
    arg->idx = io - D_003EF200;
    sp.maxCount = 1;
    sp.option = (unsigned int)D_003C3CE0;
    arg->size = size;
    arg->buf = (void *)buf;
    sp.initCount = 0;
    sema = func_00105360(&sp);
    arg->res = &res;
    arg->rsize = 4;
    D_003EDD00.sema = sema;
    if (flags & 0x8000) {
        WaitSema(D_0037139C);
        r = (int)D_00371308;
        i = 0;
        do {
            do {
                nowait = flags & 0x8000;
            } while (0);
        } while (0);
        for (; i < 32; i++) {
            if (D_00371308[i] == -1) {
                D_00371308[i] = arg->sema;
                arg->sema = -arg->sema;
                break;
            }
        }
        func_00105380(D_0037139C);
    } else {
        n = (unsigned int)buf & 0xF;
        nowait = 0;
    }
    if (((unsigned int)buf & 0xF) == 0)
        n = 0;
    else
        n = (unsigned int)buf / 16 * 16 + 16 - (unsigned int)buf;
    if (size < n)
        n = size;
    if (!(flags & 0x20000000))
        sceSifWriteBackDCache((void *)buf, size);
    buf = (void *)((unsigned int)buf | 0x20000000);
    arg->nhead = n;
    for (j = 0; j < n; j++)
        arg->head[j] = ((const char *)buf)[j];
    if (func_00109B50(D_003EF400, 3, 0, &D_003EDD00, 0x30, D_003EE940, 4, 0, 0, nowait) < 0) {
        func_00105370(sema);
        func_0010A0F0();
        return -11;
    }
    r = *(volatile int *)((unsigned int)D_003EE940 | 0x20000000);
    func_0010A0F0();
    if (r == 0) {
        func_00105370(sema);
        return -11;
    }
    if (nowait) {
        func_00105370(sema);
        return 0;
    }
    WaitSema(sema);
    func_00105370(sema);
    return res;
}
