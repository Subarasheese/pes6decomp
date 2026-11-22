/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/dtx.c (DTX_Open). See THIRD_PARTY.md. */

typedef struct DtxObj DtxObj;
typedef void (*DtxCbf)(void *obj, void *buf, int size);
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

DtxObj *func_0016E308(unsigned int id) {
    if (id >= 16) {
        return 0;
    }
    return &D_00385940[id];
}
