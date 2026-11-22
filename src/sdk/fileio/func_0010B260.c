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
extern int D_0037138C;
extern int D_00371388;
extern int D_0037139C;
extern volatile int D_00371308[32];
extern void *D_003EDCC8;
extern IoctlArg D_003EDD00;
extern FsStat D_003EE990[];
extern char D_003EF400[];
extern int D_003EE940[];
extern char D_003C3CF8[];
struct iob *func_00109C40(int);
int func_0010A0C0(int);
void func_0010A0F0(void);
void func_0010A1E8(void);
void sceSifWriteBackDCache(void *, int);
int func_00105360(struct SemaParam *);
int func_00105370(int);
int func_00105380(int);
int WaitSema(int);
int func_00109B50(void *, int, int, void *, int, void *, int, void *, void *, int);

int func_0010B260(int fd, int req, void *data) {
    struct SemaParam sp;
    int res;
    struct iob *io;
    IoctlArg *arg;
    int sema, r, i;
    int one = 1; /* case value held in a register from the prologue, as in the target */

    arg = &D_003EDD00;
    io = func_00109C40(fd);
    func_0010A0C0(5);
    D_003EDCC8 = data;
    if (D_0037138C == 0)
        func_0010A1E8();
    if (io == 0 || io->flags == 0) {
        func_0010A0F0();
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
        WaitSema(D_0037139C);
        for (i = 0; i < 32; i++) {
            if (D_00371308[i] != -1)
                break;
        }
        if (i == 32)
            *(int *)D_003EDCC8 = 0;
        else
            *(int *)D_003EDCC8 = 1;
        func_00105380(D_0037139C);
        func_0010A0F0();
        return 0;
    }
c2:
    {
        *(int *)data = *(int *)((unsigned int)&D_003EE990[D_00371388] | 0x20000000);
        func_0010A0F0();
        return 0;
    }
c3:
    {
        *(long *)data = *(long *)((unsigned int)&D_003EE990[D_00371388] | 0x20000000);
        func_0010A0F0();
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
    sp.option = (unsigned int)D_003C3CF8;
    sp.initCount = 0;
    sema = func_00105360(&sp);
    arg->sema = sema;
    arg->res = &res;
    arg->rsize = 4;
    sceSifWriteBackDCache(&D_003EDD00, 0x420);
    if (func_00109B50(D_003EF400, 5, 0, &D_003EDD00, 0x420, D_003EE940, 4, 0, 0, 0) < 0) {
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
    WaitSema(sema);
    func_00105370(sema);
    return res;
}
