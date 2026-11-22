/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/dtx.c (DTX_Create). See THIRD_PARTY.md. */

typedef unsigned int size_t;
extern void *memset(void *, int, size_t);
typedef struct DtxObj DtxObj;
typedef void (*DtxCbf)(void *obj, void *buf, int size);
extern void func_001610B0(const char *format, ...);
extern void SyncDCache(void *start, void *end);
extern void InvalidDCache(void *start, void *end);
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData;
typedef struct DtxPeer {
    char pad0[60];
    int count;
} DtxPeer;
struct DtxObj {
    signed char used;
    signed char state;
    signed char flag;
    char rsv;
    int server;
    int count;
    char *eewk;
    int size;
    DtxPeer *peer;
    int iopwk;
    int wklen;
    DtxCbf recv;
    void *recv_obj;
    DtxCbf send;
    void *send_obj;
    sceSifDmaData dma;
    unsigned int dmaid;
};
extern DtxObj D_00385940[16];
extern char D_003CA470[];
extern char D_003CA490[];
extern char D_003CA4B0[];
extern char D_003CA4C8[];
extern char D_003CA4E0[];
extern int dtx_create_rmt(unsigned int id, char *eewk, int iopwk, int wklen);
extern void D_0016E280(void *obj, void *buf, int size);
extern void D_0016E298(void *obj, void *buf, int size);

DtxObj *func_0016E350(unsigned int id, char *eewk, int iopwk, int wklen) {
    DtxObj *dtx;
    int size;
    if (((int)eewk) & 63) {
        func_001610B0(D_003CA470);
        return 0;
    }
    if (iopwk & 31) {
        func_001610B0(D_003CA490);
        return 0;
    }
    if (wklen & 63) {
        func_001610B0(D_003CA4B0, wklen);
        return 0;
    }
    if (id >= 16) {
        func_001610B0(D_003CA4C8, id);
        return 0;
    }
    dtx = &D_00385940[id];
    if (dtx->used != 0) {
        return 0;
    }
    dtx->server = dtx_create_rmt(id, eewk, iopwk, wklen);
    if (dtx->server == 0) {
        func_001610B0(D_003CA4E0);
        return 0;
    }
    size = wklen - 64;
    dtx->size = size;
    dtx->wklen = wklen;
    dtx->iopwk = iopwk;
    dtx->peer = (DtxPeer *)(((int)(eewk + size)) | 0x20000000);
    dtx->count = 0;
    dtx->eewk = eewk;
    dtx->state = 0;
    memset(eewk, 0, size);
    SyncDCache(dtx->eewk, (dtx->eewk + dtx->size) + 63);
    InvalidDCache(dtx->eewk, (dtx->eewk + dtx->size) + 63);
    dtx->recv = D_0016E280;
    dtx->send = D_0016E298;
    dtx->recv_obj = 0;
    dtx->send_obj = 0;
    dtx->flag = 1;
    dtx->used = 1;
    return dtx;
}
