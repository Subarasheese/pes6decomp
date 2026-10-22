/* Sony SDK code; source adapted from crashwoc-decomp-ps2 (src/sdk/sce/libpad.c). */
/*
 * Unit: sdk/sce/libpad
 *
 * Functions:
 *   0x002645a8 D_00111810
 *   0x002646d8 D_00111940
 *   0x00264818 D_00111A80
 *   0x002648b8 D_00111B20
 *   0x00264938 D_00111BA0
 *   0x00264b20 D_00111D88
 *   0x00264bd8 D_00111E40
 *   0x00264c38 func_00111EA0
 *   0x00264c88 D_00111EF0
 *   0x00264d08 func_00111F70
 *   0x00264d80 scePadStateIntToStr
 *   0x00264db8 func_00112020
 *   0x00264e20 D_00112088
 *   0x00264e70 func_001120D8
 *   0x00264ea8 D_00112110
 *   0x00264fc8 D_00112230
 *   0x002650e8 D_00112350
 *   0x00265220 D_00112488
 *   0x002652d8 D_00112540
 *   0x00265390 D_001125F8
 *   0x00265468 D_001126D0
 *   0x00265520 D_00112788
 *   0x002655d0 D_00112838
 *   0x00265630 D_00112898
 *   0x00265688 D_001128F0
 *   0x002656e0 scePadSetVrefParam
 *   0x002657b0 D_00112A18
 *   0x00265818 D_00112A80
 *   0x00265880 D_00112AE8
 *   0x002658e8 D_00112B50
 */

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

extern sceSifClientData D_003F3200[2];
extern PadSlot D_006FFB10[2][4];
extern PadIopBuffer D_006FFC00[2][4];
extern PadRpcBuffer D_003F3440;
extern int D_00610930[];
extern int D_00610934[];
extern char *D_00610938[];
extern char *D_00610958[];

#define pad_clients     D_003F3200
#define pad_slots       D_006FFB10
#define pad_commands    D_006FFC00
#define pad_rpc         D_003F3440
#define pad_initialized D_00610930
#define pad_debug       D_00610934
#define pad_state_names D_00610938
#define pad_req_names   D_00610958

extern int sceSifCallRpc(sceSifClientData *client, unsigned int fno,
                         unsigned int mode, void *send, int ssize,
                         void *receive, int rsize, void (*end_func)(void *),
                         void *end_param);
extern void SyncDCache(void *start, void *end);
extern void *memcpy(void *dest, const void *src, unsigned int n);
extern void *memset(void *dest, int c, unsigned int n);
extern char *strcpy(char *dest, const char *src);
extern int sceSifBindRpc(sceSifClientData *client, unsigned int request,
                         unsigned int mode);
extern int sceSifDmaStat(unsigned int id);
extern unsigned int sceSifSetDma(sceSifDmaData *sdd, int len);
extern int printf(const char *fmt, ...);
extern int D_00112AE8(void);void D_00111810(int port, int slot);
int D_00111940(int mode);
int D_00111A80(int mode);
int D_00111B20(void);
int D_00111BA0(int port, int slot, void *addr);
int D_00111D88(int port, int slot);
PadDmaFrame *D_00111E40(int port, int slot);
int func_00111EA0(int port, int slot);
int D_00111EF0(int port, int slot, unsigned char *rdata);
int func_00111F70(int port, int slot);
void scePadStateIntToStr(unsigned int state, char *str);
int func_00112020(int port, int slot, int state);
int D_00112088(int port, int slot);
void func_001120D8(unsigned int state, char *str);
int D_00112110(int port, int slot, int actno, int term);
int D_00112230(int port, int slot, int listno, int offs);
int D_00112350(int port, int slot, int term, int offs);
int D_00112488(int port, int slot, int mode, int lock);
int D_00112540(int port, int slot, const unsigned char *data);
int D_001125F8(int port, int slot, const unsigned char *data);
int D_001126D0(int port, int slot);
int D_00112788(int port, int slot, int info);
int D_00112838(int port, int slot);
int D_00112898(int port, int slot);
int D_001128F0(int port, int slot);



int scePadSetVrefParam(int port, int slot, const PadVrefParam *param) {
    pad_rpc.command = 11;
    pad_rpc.u.vref.port = port;
    pad_rpc.u.vref.slot = slot;
    pad_rpc.u.vref.param = *param;
    if (sceSifCallRpc(&pad_clients[0], 1, 0, &pad_rpc, 128, &pad_rpc, 128, 0, 0) < 0) {
        return 0;
    }
    if (pad_rpc.u.vref.result == 1) {
        func_00112020(port, slot, 2);
    }
    return pad_rpc.u.vref.result;
}
int D_00112A18(void);
int D_00112A80(int port);
int D_00112AE8(void);
int D_00112B50(int level);
