/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/dtx.c (dtx_rpc_func). See THIRD_PARTY.md. */

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
extern void (*D_00386350[64])(int object, int *data, unsigned int words);
extern int D_00386450[64];
extern DtxObj *func_0016E350(unsigned int id, char *eewk, int iopwk, int wklen);
extern void func_0016E4E8(DtxObj *dtx);

void *func_0016E090(unsigned int command, void *buf, int size) {
    int *data = buf;
    switch (command) {
    case 0:

    case 1:
        break;

    case 2:
        data[0] = (int)func_0016E350(data[0], (char *)data[1], data[2], data[3]);
        break;

    case 3:
        func_0016E4E8((DtxObj *)data[0]);
        break;

    default:
        if (((command - 0x400) < 64) && (D_00386350[command - 0x400] != 0)) {
            D_00386350[command - 0x400](D_00386450[command - 0x400], data,
                                        ((unsigned int)size) / 4);
        }
        break;
    }

    return data;
}
