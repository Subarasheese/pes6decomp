/* compiler: ee-gcc-2.9 */
/* Sony SDK / C runtime code; source adapted from crashwoc-decomp-ps2 (src/sdk/sce/libpad.c). */

typedef struct sceSifClientData {
    unsigned char rpc_data[16];
    unsigned int command;
    void *buff;
    void *cbuff;
    void (*end_func)(void *);
    void *end_param;
    void *server;
} sceSifClientData;

typedef struct sceSifDmaData {
    void *data;
    void *addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData;

typedef struct PadDmaFrame {
    unsigned char data[32];
    unsigned int act_direct[2];
    unsigned int act_align[2];
    unsigned char act_info[4][4];
    unsigned char comb_info[4][4];
    unsigned short mode_table[4];
    int frame;
    int retries;
    int length;
    unsigned char mode_config;
    unsigned char mode_cur_id;
    unsigned char model;
    unsigned char data_ready;
    unsigned char mode_count;
    unsigned char mode_cur_offset;
    unsigned char act_count;
    unsigned char comb_count;
    unsigned char reserved_6c[4];
    unsigned char state;
    unsigned char req_state;
    unsigned char task;
    unsigned char reserved_73[6];
    unsigned char button_mask[4];
    unsigned char reserved_7d[3];
} PadDmaFrame;

typedef struct PadIopCommand {
    unsigned int sequence;
    int type;
    int size;
    unsigned char data[20];
} PadIopCommand;

typedef struct PadIopBuffer {
    PadIopCommand command;
    unsigned char reserved[32];
} PadIopBuffer;

typedef struct PadSlot {
    PadDmaFrame *dma;
    PadIopCommand *command;
    void *iop_addr;
    int dma_id;
    int opened;
    int reserved[2];
} PadSlot;

typedef struct PadVrefParam {
    unsigned char param[12];
} PadVrefParam;

typedef struct PadRpcBuffer {
    int command;
    union {
        struct {
            int port;
            int slot;
            int result;
            int param;
            void *iop_addr;
        } common;
        struct {
            int port;
            int slot;
            int mode;
            int lock;
            int result;
        } main_mode;
        struct {
            int port;
            int slot;
            unsigned char data[6];
            int result;
        } act_align;
        struct {
            int port;
            int slot;
            int info;
            int result;
        } button_info;
        struct {
            int port;
            int slot;
            PadVrefParam param;
            int reserved;
            int result;
        } vref;
        struct {
            int level;
            int result;
        } warning;
        unsigned char raw[124];
    } u;
} PadRpcBuffer;

extern sceSifClientData D_011FD4C0[2];
extern PadSlot D_011FD510[2][4];
extern PadIopBuffer D_006FFC00[2][4];
extern PadRpcBuffer D_011FD700;
extern int D_00610930[];
extern int D_00610934[];
extern char *D_00610938[];
extern char *D_00610958[];

#define pad_clients D_011FD4C0
#define pad_slots D_011FD510
#define pad_commands D_006FFC00
#define pad_rpc D_011FD700
#define pad_initialized D_00610930
#define pad_debug D_00610934
#define pad_state_names D_00610938
#define pad_req_names D_00610958

extern int func_0019EE30(sceSifClientData *client, unsigned int fno, unsigned int mode, void *send,
                         int ssize, void *receive, int rsize, void (*end_func)(void *),
                         void *end_param);
extern void SyncDCache(void *start, void *end);
extern void *memcpy(void *dest, const void *src, unsigned int n);
extern void *memset(void *dest, int c, unsigned int n);
extern char *strcpy(char *dest, const char *src);
extern int sceSifBindRpc(sceSifClientData *client, unsigned int request, unsigned int mode);
extern int sceSifDmaStat(unsigned int id);
extern unsigned int sceSifSetDma(sceSifDmaData *sdd, int len);
extern int printf(const char *fmt, ...);
extern int scePadGetModVersion(void);
void _send_to_iop(int port, int slot);
int scePadInit(int mode);
int scePadInit2(int mode);
int scePadEnd(void);
int scePadPortOpen(int port, int slot, void *addr);

int func_001948C0(int port, int slot) {
    if (pad_slots[port][slot].opened == 0) {
        return 0;
    }
    pad_rpc.command = 14;
    pad_rpc.u.common.port = port;
    pad_rpc.u.common.slot = slot;
    pad_rpc.u.common.param = 1;
    if (func_0019EE30(&pad_clients[0], 1, 0, &pad_rpc, 128, &pad_rpc, 128, 0, 0) < 0) {
        return 0;
    }
    pad_slots[port][slot].opened = 0;
    return pad_rpc.u.common.result;
}
PadDmaFrame *scePadGetDmaStr(int port, int slot);
int scePadGetFrameCount(int port, int slot);
int scePadRead(int port, int slot, unsigned char *rdata);
int scePadGetState(int port, int slot);
void scePadStateIntToStr(unsigned int state, char *str);
int scePadSetReqState(int port, int slot, int state);
int scePadGetReqState(int port, int slot);
void scePadReqIntToStr(unsigned int state, char *str);
int scePadInfoAct(int port, int slot, int actno, int term);
int scePadInfoComb(int port, int slot, int listno, int offs);
int scePadInfoMode(int port, int slot, int term, int offs);
int scePadSetMainMode(int port, int slot, int mode, int lock);
int scePadSetActDirect(int port, int slot, const unsigned char *data);
int scePadSetActAlign(int port, int slot, const unsigned char *data);
int scePadGetButtonMask(int port, int slot);
int scePadSetButtonInfo(int port, int slot, int info);
int scePadInfoPressMode(int port, int slot);
int scePadEnterPressMode(int port, int slot);
int scePadExitPressMode(int port, int slot);
int scePadSetVrefParam(int port, int slot, const PadVrefParam *param);
int scePadGetPortMax(void);
int scePadGetSlotMax(int port);
int scePadGetModVersion(void);
int scePadSetWarningLevel(int level);
