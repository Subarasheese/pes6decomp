/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
typedef int s32;
struct Pkt { int p0; int p4; int p8; int pc; int p10; struct Pkt *self; int p18; struct Cl *cl; int rpc; int ssize; int recv; int rsize; int flag; int cmd34; };
struct Cl { struct Pkt *pkt; int pid; int sema; int pc; int p10; int cmd; int gp; void *endfunc; void *edata; int c24; };
struct Sema { int a; int max; int init; int d; int e; const char *opt; };
extern char D_003EDC80[];
extern char D_003C3BC8[];
extern int func_00105360(struct Sema *);
extern int func_00105370(int);
extern int WaitSema(int);
extern s32 sceSifSendCmd(s32, struct Pkt *, s32, s32, s32, s32);
extern void sceSifWriteBackDCache(void *, int);
extern struct Pkt *_sceRpcGetPacket(int);
extern void _sceRpcFreePacket(struct Pkt *);

int sceSifCallRpc(struct Cl *cl, int rpc, unsigned int mode, void *send, int ssize, void *recv, int rsize, void *endfunc, void *edata) {
    struct Pkt *pkt;
    struct Sema sp;
    int r;
    pkt = _sceRpcGetPacket((int)D_003EDC80);
    if (pkt == 0) return -1;
    cl->edata = edata;
    cl->pid = pkt->p18;
    cl->pkt = pkt;
    cl->endfunc = endfunc;
    { int gp; __asm__ volatile("daddu %0, $28, $0" : "=r" (gp)); cl->gp = gp; }
    pkt->rpc = rpc;
    pkt->ssize = ssize;
    pkt->recv = (int)recv;
    pkt->rsize = rsize;
    pkt->self = pkt;
    pkt->cl = (struct Cl *)cl;
    pkt->cmd34 = cl->c24;
    if (!(mode & 2)) {
        if (send == recv) {
            sceSifWriteBackDCache(send, ssize >= rsize ? ssize : rsize);
        } else {
            if (ssize > 0) sceSifWriteBackDCache(send, ssize);
            if (rsize > 0) sceSifWriteBackDCache(recv, rsize);
        }
    }
    if (mode & 1) {
        if (endfunc == 0) pkt->flag = 0; else pkt->flag = 1;
        cl->sema = -1;
        if (sceSifSendCmd(0x8000000A, pkt, 0x40, (s32)send, cl->cmd, ssize) != 0) return 0;
        _sceRpcFreePacket(pkt);
        return -2;
    }
    sp.init = 0;
    sp.max = 1;
    sp.opt = D_003C3BC8;
    cl->sema = func_00105360(&sp);
    if (cl->sema < 0) {
        _sceRpcFreePacket(pkt);
        return -3;
    }
    pkt->flag = 1;
    if (sceSifSendCmd(0x8000000A, pkt, 0x40, (s32)send, cl->cmd, ssize) == 0) {
        func_00105370(cl->sema);
        _sceRpcFreePacket(pkt);
        return -2;
    }
    WaitSema(cl->sema);
    func_00105370(cl->sema);
    return 0;
}
