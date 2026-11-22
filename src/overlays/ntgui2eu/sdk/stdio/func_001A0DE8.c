/* compiler: ee-gcc-2.9-as210-G0 */
/* Komasia/sly2-decomp, src/lib/sceIoctl.c (sceIoctl). See THIRD_PARTY.md. */

/* libkernel fileio sceIoctl (Claude agent). Keys: `volatile` sema table D_002C49F8 (case-1 loop);
   the request dispatch is written as the switch's own decision tree (==2, <3, ==1, ==3) with the
   case-1 constant in a local `one` set at entry - that is what keeps 1 in $s5 from the prologue;
   arg->sema is stored before res/rsize (gcc rotates it into the jal delay slot). */
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
    char b[0x400];
} IoctlData;
typedef struct {
    int sema;
    int *res;
    int rsize;
    int fd;
    int req;
    IoctlData data;
    int x414;
    int x418;
    int size;
} IoctlArg;
typedef struct {
    char b[0x440];
} FsStat;
extern int D_005CABE4;
extern int D_005CABE0;
extern int D_005CABF4;
extern volatile int D_005CAB60[32];
extern void *D_01203308;
extern IoctlArg D_01203340;
extern FsStat D_01203FD0[];
extern char D_01204A40[];
extern int D_01203F80[];
extern char D_006005E8[];
struct iob *func_0019F7C8(int);
int func_0019FC48(int);
void func_0019FC78(void);
void func_0019FD70(void);
void func_0019E3F8(void *, int);
int func_0019B120(struct SemaParam *);
int func_0019B130(int);
int func_0019B140(int);
int func_0019B160(int);
int func_0019F6D8(void *, int, int, void *, int, void *, int, void *, void *, int);

int func_001A0DE8(int fd, int req, void *data) {
    struct SemaParam sp;
    int res;
    struct iob *io;
    IoctlArg *arg;
    int sema, r, i;
    int one = 1; /* case value held in a register from the prologue, as in the target */

    arg = &D_01203340;
    io = func_0019F7C8(fd);
    func_0019FC48(5);
    D_01203308 = data;
    if (D_005CABE4 == 0)
        func_0019FD70();
    if (io == 0 || io->flags == 0) {
        func_0019FC78();
        return -9;
    }
    arg->x414 = 0;
    arg->x418 = 0;
    if (req == 2)
        goto c2;
    if (req < 3) {
        if (req == one)
            goto c1;
        goto dflt;
    }
    if (req == 3)
        goto c3;
    goto dflt;
c1:
    {
        func_0019B160(D_005CABF4);
        for (i = 0; i < 32; i++) {
            if (D_005CAB60[i] != -1)
                break;
        }
        if (i == 32)
            *(int *)D_01203308 = 0;
        else
            *(int *)D_01203308 = 1;
        func_0019B140(D_005CABF4);
        func_0019FC78();
        return 0;
    }
c2:
    {
        *(int *)data = *(int *)((unsigned int)&D_01203FD0[D_005CABE0] | 0x20000000);
        func_0019FC78();
        return 0;
    }
c3:
    {
        *(long *)data = *(long *)((unsigned int)&D_01203FD0[D_005CABE0] | 0x20000000);
        func_0019FC78();
        return 0;
    }
dflt:
    arg->fd = io->fd;
    arg->req = req;
    if (data == 0) {
        arg->size = 0;
    } else {
        arg->size = 0x400;
        arg->data = *(IoctlData *)data;
    }
    sp.maxCount = 1;
    sp.option = (unsigned int)D_006005E8;
    sp.initCount = 0;
    sema = func_0019B120(&sp);
    arg->sema = sema;
    arg->res = &res;
    arg->rsize = 4;
    func_0019E3F8(&D_01203340, 0x420);
    if (func_0019F6D8(D_01204A40, 5, 0, &D_01203340, 0x420, D_01203F80, 4, 0, 0, 0) < 0) {
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
    func_0019B160(sema);
    func_0019B130(sema);
    return res;
}
