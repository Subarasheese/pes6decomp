/* Sony SDK / C runtime code; source adapted from crashwoc-decomp-ps2 (src/sdk/sce/sifrpc.c). */
/*
 * Unit: sdk/sce/sifrpc
 *
 * Functions:
 *   0x0027b368 sceSifInitRpc
 *   0x0027b508 sceSifExitRpc
 *   0x0027b530 _sceRpcGetPacket
 *   0x0027b5d8 _sceRpcFreePacket
 *   0x0027b5f8 _sceRpcGetFPacket
 *   0x0027b628 _sceRpcGetFPacket2
 *   0x0027b668 _request_end
 *   0x0027b720 _request_rdata
 *   0x0027b780 sceSifGetOtherData
 *   0x0027b8d8 _search_svdata
 *   0x0027b928 _request_bind
 *   0x0027b9d8 sceSifBindRpc
 *   0x0027bb18 _request_call
 *   0x0027bba8 sceSifCallRpc
 *   0x0027bd98 sceSifCheckStatRpc
 *   0x0027bdd8 sceSifSetRpcQueue
 *   0x0027be70 sceSifRegisterRpc
 *   0x0027bf40 sceSifRemoveRpc
 *   0x0027bfd8 sceSifRemoveRpcQueue
 *   0x0027c068 sceSifGetNextRequest
 *   0x0027c0c0 sceSifExecRequest
 *   0x0027c288 sceSifRpcLoop
 */

typedef struct SifCmdHeader {
    unsigned int psize : 8;
    unsigned int dsize : 24;
    unsigned int dest;
    int cid;
    unsigned int opt;
} SifCmdHeader;

typedef struct sceSifRpcHeader {
    void *pkt_addr;
    unsigned int rpc_id;
    int sema_id;
    unsigned int mode;
} sceSifRpcHeader;

typedef void (*sceSifEndFunc)(void *param);

typedef struct sceSifClientData {
    sceSifRpcHeader hdr;
    unsigned int command;
    void *buff;
    void *cbuff;
    sceSifEndFunc end_function;
    void *end_param;
    void *serve;
} sceSifClientData;

typedef struct sceSifReceiveData {
    sceSifRpcHeader hdr;
    void *src;
    void *dest;
    int size;
} sceSifReceiveData;

typedef void *(*sceSifRpcFunc)(unsigned int fno, void *data, int size);

typedef struct sceSifServeData {
    unsigned int command;
    sceSifRpcFunc func;
    void *buff;
    int size;
    sceSifRpcFunc cfunc;
    void *cbuff;
    int csize;
    sceSifClientData *client;
    void *paddr;
    unsigned int fno;
    void *receive;
    int rsize;
    int rmode;
    unsigned int rid;
    struct sceSifServeData *link;
    struct sceSifServeData *next;
    struct sceSifQueueData *base;
} sceSifServeData;

typedef struct sceSifQueueData {
    int key;
    int active;
    struct sceSifServeData *link;
    struct sceSifServeData *start;
    struct sceSifServeData *end;
    struct sceSifQueueData *next;
} sceSifQueueData;

typedef struct SifRpcPktHeader {
    SifCmdHeader sifcmd;
    unsigned int rec_id;
    unsigned int pkt_addr;
    unsigned int rpc_id;
} SifRpcPktHeader;

typedef struct SifRpcRendPkt {
    SifRpcPktHeader header;
    unsigned int client;
    unsigned int cid;
    void *server;
    void *buff;
    void *cbuff;
} SifRpcRendPkt;

typedef struct SifRpcBindPkt {
    SifRpcPktHeader header;
    unsigned int client;
    unsigned int sid;
} SifRpcBindPkt;

typedef struct SifRpcCallPkt {
    SifRpcPktHeader header;
    unsigned int client;
    unsigned int rpc_number;
    int send_size;
    void *receive;
    int rsize;
    int rmode;
    void *server;
} SifRpcCallPkt;

typedef struct SifRpcOtherDataPkt {
    SifRpcPktHeader header;
    sceSifReceiveData *receive;
    unsigned int src;
    unsigned int dest;
    int size;
} SifRpcOtherDataPkt;

typedef union SifRpcPacket {
    SifRpcPktHeader header;
    SifRpcRendPkt rend;
    SifRpcBindPkt bind;
    SifRpcCallPkt call;
    SifRpcOtherDataPkt other;
    unsigned char raw[64];
} SifRpcPacket;

typedef struct sceSifDmaData {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData;

typedef struct SemaParam {
    int currentCount;
    int maxCount;
    int initCount;
    int numWaitThreads;
    unsigned int attr;
    unsigned int option;
} SemaParam;

typedef struct SifRpcData {
    unsigned int pid;
    SifRpcPacket *pkt_table;
    int pkt_table_len;
    int unused1;
    int unused2;
    SifRpcPacket *rdata_table;
    int rdata_table_len;
    SifRpcPacket *client_table;
    int client_table_len;
    int rdata_table_idx;
    sceSifQueueData *active_queue;
} SifRpcData;

extern int D_00613378[];
extern SifRpcPacket D_00703940[];
extern SifRpcPacket D_00704140[];
extern SifRpcPacket D_00704940[];
extern SifRpcData D_00705140;

#define sif_rpc_initialized D_00613378
#define _packet_buffer D_00703940
#define _free_buffer D_00704140
#define _free_buffer2 D_00704940
#define _sif_rpc_data D_00705140

#define SIF_CMD_RPC_END   0x80000008
#define SIF_CMD_RPC_BIND  0x80000009
#define SIF_CMD_RPC_CALL  0x8000000A
#define SIF_CMD_RPC_RDATA 0x8000000C

#define SIF_CMD_INIT_CMD   0x80000002
#define SIF_SYSREG_RPCINIT 0x80000002
#define SIF_SREG_RPCINIT   0

#define SIF_RPC_M_NOWAIT 0x01
#define SIF_RPC_M_NOWBDC 0x02

#define PACKET_F_ALLOC 0x01
#define PACKET_F_CLIENT 0x04
#define PACKET_TABLE_LEN 32
#define UNCACHED(p) ((SifRpcPacket *)((unsigned int)(p) | 0x20000000))

extern int DIntr(void);
extern int EIntr(void);
extern int CreateSema(SemaParam *param);
extern int DeleteSema(int sema);
extern int WaitSema(int sema);
extern int iSignalSema(int sema);
extern void SleepThread(void);
typedef void (*SifCmdHandler)(void *packet, void *data);

extern void sceSifInitCmd(void);
extern void sceSifExitCmd(void);
extern void sceSifAddCmdHandler(int cid, SifCmdHandler handler, void *data);
extern unsigned int sceSifGetReg(unsigned int reg);
extern int sceSifSetReg(unsigned int reg, unsigned int value);
extern unsigned int sceSifGetSreg(int index);
extern void sceSifWriteBackDCache(void *ptr, int size);
extern unsigned int sceSifSetDma(sceSifDmaData *sdd, int len);
extern unsigned int sceSifSendCmd(int cid, void *packet, int packet_size,
                                  void *src, void *dest, int size);
extern unsigned int isceSifSendCmd(int cid, void *packet, int packet_size,
                                   void *src, void *dest, int size);

void _request_end(SifRpcRendPkt *request, void *data);
void _request_rdata(SifRpcOtherDataPkt *request, SifRpcData *rpc_data);
void _request_bind(SifRpcBindPkt *request, SifRpcData *rpc_data);
void _request_call(void *request, SifRpcData *rpc_data);void sceSifInitRpc(unsigned int mode);
void sceSifExitRpc(void);
SifRpcPacket *_sceRpcGetPacket(SifRpcData *rpc_data);



void _sceRpcFreePacket(SifRpcPacket *packet) {
    packet->header.rpc_id = 0;
    packet->header.rec_id &= ~PACKET_F_ALLOC;
}
SifRpcPacket *_sceRpcGetFPacket(SifRpcData *rpc_data);
SifRpcPacket *_sceRpcGetFPacket2(SifRpcData *rpc_data, int rid);
void _request_end(SifRpcRendPkt *request, void *data);
void _request_rdata(SifRpcOtherDataPkt *request, SifRpcData *rpc_data);
int sceSifGetOtherData(sceSifReceiveData *rd, void *src, void *dest, int size, unsigned int mode);
sceSifServeData *_search_svdata(unsigned int command, SifRpcData *rpc_data);
void _request_bind(SifRpcBindPkt *request, SifRpcData *rpc_data);
int sceSifBindRpc(sceSifClientData *cd, unsigned int request, unsigned int mode);
int sceSifCallRpc(sceSifClientData *cd, unsigned int fno, unsigned int mode, void *send, int ssize,
                  void *receive, int rsize, sceSifEndFunc end_func, void *end_param);
void sceSifSetRpcQueue(sceSifQueueData *qd, int key);
void sceSifRegisterRpc(sceSifServeData *sd, unsigned int command, sceSifRpcFunc func, void *buff,
                       sceSifRpcFunc cfunc, void *cbuff, sceSifQueueData *qd);
sceSifServeData *sceSifRemoveRpc(sceSifServeData *sd, sceSifQueueData *qd);
sceSifQueueData *sceSifRemoveRpcQueue(sceSifQueueData *qd);
sceSifServeData *sceSifGetNextRequest(sceSifQueueData *queue);
void sceSifExecRequest(sceSifServeData *sd);
void sceSifRpcLoop(sceSifQueueData *queue);
