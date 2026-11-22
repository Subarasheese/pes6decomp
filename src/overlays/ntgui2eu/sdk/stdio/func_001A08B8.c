/* compiler: ee-gcc-2.9-G0 */
/* Komasia/sly2-decomp, src/lib/sceRead.c (sceRead). See THIRD_PARTY.md. */

/* libkernel fileio sceRead (Lilly's agent, T1568). Keys: `nowait` assigned in a nested
   do{do{}while(0);}while(0) after `i = 0` (global-alloc priority); and the dead `r = (int)<table>`
   first statement of each arm: it computes the arm's `lui` itself, so gcse PRE no longer appends it
   AFTER `i = 0` / `nowait = 0` (the target has lui first in both arms). */
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
    int x18;
    int idx;
} ReadArg;
extern int D_005CABE4;
extern int D_005CABF4;
extern int D_005CAB60[32];
extern ReadArg D_01203340;
extern struct iob D_01204840[];
extern char D_01204A40[];
extern int D_01203F80[];
extern char D_006005B8[];
struct iob *func_0019F7C8(int);
int func_0019FC48(int);
void func_0019FC78(void);
void func_0019E3F8(void *, int);
int func_0019B120(struct SemaParam *);
int func_0019B130(int);
int func_0019B140(int);
int func_0019B160(int);
int func_0019F6D8(void *, int, int, void *, int, void *, int, void *, void *, int);
int func_001A08B8(int fd, void *buf, int size) {
    struct SemaParam sp;
    int res;
    struct iob *io;
    ReadArg *arg;
    int sema, r, flags, nowait, i;

    arg = &D_01203340;
    io = func_0019F7C8(fd);
    func_0019FC48(2);
    if (D_005CABE4 == 0 || io == 0 || (flags = io->flags) == 0) {
        func_0019FC78();
        return -9;
    }
    arg->fd = io->fd;
    arg->idx = io - D_01204840;
    sp.maxCount = 1;
    sp.option = (unsigned int)D_006005B8;
    arg->buf = buf;
    arg->size = size;
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
        r = (int)D_01203F80;
        nowait = 0;
    }
    if (!(flags & 0x20000000))
        func_0019E3F8(buf, size);
    func_0019E3F8(arg, 0x20);
    if (func_0019F6D8(D_01204A40, 2, 0, &D_01203340, 0x20, D_01203F80, 4, 0, 0, nowait) < 0) {
        func_0019B130(sema);
        func_0019FC78();
        return -11;
    }
    r = *(int *)((unsigned int)D_01203F80 | 0x20000000);
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
