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
extern int D_005CABE4;
extern int D_005CABF4;
extern int D_005CAB60[32];
extern WriteArg D_01203340;
extern struct iob D_01204840[];
extern char D_01204A40[];
extern int D_01203F80[];
extern char D_006005D0[];
struct iob *func_0019F7C8(int);
int func_0019FC48(int);
void func_0019FC78(void);
void func_0019E3F8(void *, int);
int func_0019B120(struct SemaParam *);
int func_0019B130(int);
int func_0019B140(int);
int func_0019B160(int);
int func_0019F6D8(void *, int, int, void *, int, void *, int, void *, void *, int);
int func_001A0B28(int fd, const void *buf, int size) {
    struct SemaParam sp;
    int res;
    struct iob *io;
    WriteArg *arg;
    int sema, r, flags, nowait, i, n, j;

    arg = &D_01203340;
    io = func_0019F7C8(fd);
    func_0019FC48(3);
    if (D_005CABE4 == 0 || io == 0 || (flags = io->flags) == 0) {
        func_0019FC78();
        return -9;
    }
    arg->fd = io->fd;
    arg->idx = io - D_01204840;
    sp.maxCount = 1;
    sp.option = (unsigned int)D_006005D0;
    arg->size = size;
    arg->buf = (void *)buf;
    sp.initCount = 0;
    sema = func_0019B120(&sp);
    arg->res = &res;
    arg->rsize = 4;
    D_01203340.sema = sema;
    if (flags & 0x8000) {
        func_0019B160(D_005CABF4);
        r = (int)D_005CAB60;
        i = 0;
        do {
            do {
                nowait = flags & 0x8000;
            } while (0);
        } while (0);
        for (; i < 32; i++) {
            if (D_005CAB60[i] == -1) {
                D_005CAB60[i] = arg->sema;
                arg->sema = -arg->sema;
                break;
            }
        }
        func_0019B140(D_005CABF4);
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
        func_0019E3F8((void *)buf, size);
    buf = (void *)((unsigned int)buf | 0x20000000);
    arg->nhead = n;
    for (j = 0; j < n; j++)
        arg->head[j] = ((const char *)buf)[j];
    if (func_0019F6D8(D_01204A40, 3, 0, &D_01203340, 0x30, D_01203F80, 4, 0, 0, nowait) < 0) {
        func_0019B130(sema);
        func_0019FC78();
        return -11;
    }
    r = *(volatile int *)((unsigned int)D_01203F80 | 0x20000000);
    func_0019FC78();
    if (r == 0) {
        func_0019B130(sema);
        return -11;
    }
    if (nowait) {
        func_0019B130(sema);
        return 0;
    }
    func_0019B160(sema);
    func_0019B130(sema);
    return res;
}
