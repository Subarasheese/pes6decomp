/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/dtx.c (DTX_Finish). See THIRD_PARTY.md. */

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
extern int D_0038593C;
extern DtxObj D_00385940[16];
extern void func_0016E4E8(DtxObj *dtx);

void func_0016E7D0(void) {
    DtxObj *dtx;
    int i;
    if ((--D_0038593C) == 0) {
        dtx = D_00385940;
        for (i = 0; i < 16; i++, dtx++) {
            if (dtx->used == 1) {
                func_0016E4E8(dtx);
            }
        }
    }
}
