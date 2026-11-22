/* compiler: ee-gcc-2.9-G0 */
/* new-coke/rez-decomp, src/sce/libkernl_sifcmd.c (sceSifInitRpc). See THIRD_PARTY.md. */

typedef struct CmdPkt {
    unsigned int psize : 8;
    unsigned int dsize : 24;
    void *dest;
    int cid;
    unsigned int opt;
    void *addr;
} CmdPkt;
typedef struct RpcData {
    int pid;
    void *pkt_table;
    int pkt_table_len;
    int unk_0c;
    int unk_10;
    void *rdata_table;
    int rdata_table_len;
    void *client_table;
    int client_table_len;
    int rdata_table_idx;
    struct RpcQueue *queue;
} RpcData;
typedef struct RpcPkt {
    void *cur_pkt;
    int cur_pkt_id;
    int sema;
    char pad_0c[4];
    unsigned int rid;
    void *pkt_addr;
    int pkt_id;
    struct RpcPkt *client;
    void *cmd;
    void *server;
    void *buff;
    void *cbuff;
    void *rmode;
    char pad_34[12];
} RpcPkt;
typedef struct RpcServer {
    unsigned int rpc_number;
    void *func;
    void *buff;
    int size;
    void *cfunc;
    void *cbuff;
    char pad_18[4];
    int client;
    void *pkt_addr;
    int fno;
    int receive;
    int rsize;
    int rmode;
    int rid;
    struct RpcServer *link;
    struct RpcServer *next;
    struct RpcQueue *base;
} RpcServer;
typedef struct RpcCallReq {
    char pad_00[16];
    int rid;
    void *pkt_addr;
    char pad_18[4];
    int client;
    int fno;
    int size;
    int receive;
    int rsize;
    int rmode;
    struct RpcServer *server;
} RpcCallReq;
typedef struct RpcQueue {
    int thread_id;
    int active;
    RpcServer *link;
    RpcServer *start;
    RpcServer *end;
    struct RpcQueue *next;
} RpcQueue;
extern RpcData D_003EDC80;
extern int D_00371300;
extern int func_00105770(unsigned int reg);
extern int func_00105760(unsigned int reg, int val);
extern void DIntr(void);
extern void EIntr(void);
extern void D_00108C20(struct RpcPkt *req, struct RpcData *rd);
extern void D_00108D30(struct RpcPkt *req, struct RpcData *rd);
extern void D_00108FF8(struct RpcPkt *req, struct RpcData *rd);
extern void D_00109218(struct RpcCallReq *req, struct RpcData *rd);
extern char D_003EC480[];
extern char D_003ECC80[];
extern char D_003ED480[];
extern int sceSifGetSreg(int i);
extern void func_001081C0(void);
extern void func_001084A8(int cid, void (*func)(void *, void *), void *cb_arg);
extern unsigned int sceSifSendCmd(int cid, CmdPkt *pkt, int pktsize, void *src, void *dest,
                                  int size);

void sceSifInitRpc(void) {
    RpcData *rd;
    CmdPkt *pkt;
    ((int (*)(void))DIntr)();
    if (D_00371300) {
        EIntr();
    } else {
        D_00371300 = 1;
        EIntr();
        func_001081C0();
        ((int (*)(void))DIntr)();
        rd = &D_003EDC80;
        rd->pkt_table = (void *)(((unsigned int)D_003EC480) | 0x20000000);
        rd->pkt_table_len = 32;
        rd->unk_0c = 0;
        rd->unk_10 = 0;
        rd->rdata_table = (void *)(((unsigned int)D_003ECC80) | 0x20000000);
        rd->rdata_table_len = 32;
        rd->client_table = (void *)(((unsigned int)D_003ED480) | 0x20000000);
        rd->client_table_len = 32;
        rd->rdata_table_idx = 0;
        D_003EDC80.pid = 1;
        func_001084A8(0x80000008, D_00108C20, rd);
        func_001084A8(0x80000009, D_00108FF8, rd);
        func_001084A8(0x8000000a, D_00109218, rd);
        func_001084A8(0x8000000c, D_00108D30, rd);
        EIntr();
        if (!func_00105770(0x80000002)) {
            pkt = (CmdPkt *)(D_003EC480 + 64);
            pkt->opt = 1;
            sceSifSendCmd(0x80000002, pkt, 16, 0, 0, 0);
            while (!sceSifGetSreg(0))
                ;

            func_00105760(0x80000002, 1);
        }
    }
}
