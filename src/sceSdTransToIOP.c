/* Sony SDK / C runtime code; source adapted from crashwoc-decomp-ps2 (src/sdk/sce/sdr_main.c). */
/*
 * Unit: sdk/sce/sdr_main
 *
 * Functions:
 *   0x0026d008 sceSdRemoteInit
 *   0x0026d0b0 sceSdTransToIOP
 *   0x0026d138 sceSdCallBack
 *   0x0026d148 sceSdRemote
 */

#define SD_RPC_SERVER 0x80000701
#define SD_BIND_WAIT 10000

#define SD_SPU2_PROC_BATCH 0x8130
#define SD_SPU2_PROC_BATCH_EX 0x8140
#define SD_SET_TRANS_INTR_HANDLER 0x8160
#define SD_SET_SPU2_INTR_HANDLER 0x8170

#define SIF_RPCM_NOWAIT 1

typedef char *va_list;
#define va_start(ap, last) ((ap) = (va_list)__builtin_next_arg(last) - (__builtin_args_info(2) < 8 ? (8 - __builtin_args_info(2)) * 8 : 0))
#define va_arg(ap, type) (*(type *)(((ap) += 8) - 8))
#define va_end(ap)

typedef int (*sceSdSpu2IntrHandler)(int core, void *common);
typedef int (*sceSdTransIntrHandler)(int channel, void *common);

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
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData;

extern sceSdTransIntrHandler _sce_sdr_transIntr0Hdr;
extern sceSdTransIntrHandler _sce_sdr_transIntr1Hdr;
extern sceSdSpu2IntrHandler _sce_sdr_spu2IntrHdr;
extern void *_sce_sdr_transIntr0Arg;
extern void *_sce_sdr_transIntr1Arg;
extern void *_sce_sdr_spu2IntrArg;
extern sceSifDmaData D_003F3500;
extern int D_00701880[];
extern sceSifClientData D_007018C0;

#define sd_dma D_003F3500
#define sd_sbuff D_00701880
#define sd_client D_007018C0

extern int printf(const char *fmt, ...);
extern void FlushCache(int mode);
extern void sceSifInitRpc(unsigned int mode);
extern int sceSifBindRpc(sceSifClientData *client, unsigned int request,
                         unsigned int mode);
extern int sceSifCallRpc(sceSifClientData *client, unsigned int fno,
                         unsigned int mode, void *send, int ssize,
                         void *receive, int rsize, void (*end_func)(void *),
                         void *end_param);
extern unsigned int sceSifSetDma(sceSifDmaData *sdd, int len);
extern int sceSifDmaStat(unsigned int id);extern char __ps2_libinfo__[16];
extern sceSdSpu2IntrHandler sceSd_gEnd_func;
int sceSdRemoteInit(void);



int sceSdTransToIOP(void *buff, unsigned int sendAddr, unsigned int size, unsigned int isBlock)
{
    unsigned int did;

    if (isBlock == 0) {
        return -1;
    }
    sd_dma.data = (unsigned int)buff;
    sd_dma.addr = sendAddr;
    sd_dma.size = size;
    sd_dma.mode = 0;
    did = sceSifSetDma(&sd_dma, 1);
    if (did == 0) {
        return -1;
    }
    if (isBlock == 1) {
        while (sceSifDmaStat(did) >= 0) {
        }
    }
    return 0;
}
/* Install the SPU2 interrupt callback; returns the previous one. */
sceSdSpu2IntrHandler sceSdCallBack(sceSdSpu2IntrHandler func);
int sceSdRemote(int arg, ...);
