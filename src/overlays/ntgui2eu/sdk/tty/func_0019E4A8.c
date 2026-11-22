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
extern RpcData D_012032C0;
extern int D_005CAB5C;
extern int func_0019B530(unsigned int reg);
extern int func_0019B520(unsigned int reg, int val);
extern void func_001A4728(void);
extern void func_001A4778(void);
extern void D_0019E7A8(struct RpcPkt *req, struct RpcData *rd);
extern void D_0019E8B8(struct RpcPkt *req, struct RpcData *rd);
extern void D_0019EB80(struct RpcPkt *req, struct RpcData *rd);
extern void D_0019EDA0(struct RpcCallReq *req, struct RpcData *rd);
extern char D_01201AC0[];
extern char D_012022C0[];
extern char D_01202AC0[];
extern int func_0019DD00(int i);
extern void func_0019DD48(void);
extern void func_0019E030(int cid, void (*func)(void *, void *), void *cb_arg);
extern unsigned int func_0019E230(int cid, CmdPkt *pkt, int pktsize, void *src, void *dest,
                                  int size);

void func_0019E4A8(void) {
    RpcData *rd;
    CmdPkt *pkt;
    ((int (*)(void))func_001A4728)();
    if (D_005CAB5C) {
        func_001A4778();
    } else {
        D_005CAB5C = 1;
        func_001A4778();
        func_0019DD48();
        ((int (*)(void))func_001A4728)();
        rd = &D_012032C0;
        rd->pkt_table = (void *)(((unsigned int)D_01201AC0) | 0x20000000);
        rd->pkt_table_len = 32;
        rd->unk_0c = 0;
        rd->unk_10 = 0;
        rd->rdata_table = (void *)(((unsigned int)D_012022C0) | 0x20000000);
        rd->rdata_table_len = 32;
        rd->client_table = (void *)(((unsigned int)D_01202AC0) | 0x20000000);
        rd->client_table_len = 32;
        rd->rdata_table_idx = 0;
        D_012032C0.pid = 1;
        func_0019E030(0x80000008, D_0019E7A8, rd);
        func_0019E030(0x80000009, D_0019EB80, rd);
        func_0019E030(0x8000000a, D_0019EDA0, rd);
        func_0019E030(0x8000000c, D_0019E8B8, rd);
        func_001A4778();
        if (!func_0019B530(0x80000002)) {
            pkt = (CmdPkt *)(D_01201AC0 + 64);
            pkt->opt = 1;
            func_0019E230(0x80000002, pkt, 16, 0, 0, 0);
            while (!func_0019DD00(0))
                ;

            func_0019B520(0x80000002, 1);
        }
    }
}
