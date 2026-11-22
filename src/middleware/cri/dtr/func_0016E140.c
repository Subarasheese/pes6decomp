/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/dtx.c (dtx_svr_proc). See THIRD_PARTY.md. */

extern int func_00105250(void);
typedef void *(*sceSifRpcFunc)(unsigned int fno, void *data, int size);
typedef void (*sceSifEndFunc)(void *param);
typedef struct {
    void *paddr;
    unsigned int pid;
    int tid;
    unsigned int mode;
} sceSifRpcData;
typedef struct _sif_client_data {
    sceSifRpcData rpcd;
    unsigned int command;
    void *buff;
    void *gp;
    sceSifEndFunc func;
    void *para;
    struct _sif_serve_data *serve;
} sceSifClientData;
typedef struct _sif_serve_data {
    unsigned int command;
    sceSifRpcFunc func;
    char *buff;
    int size;
    sceSifRpcFunc cfunc;
    char *cbuff;
    int csize;
    sceSifClientData *client;
    unsigned int paddr;
    unsigned int fno;
    unsigned int receive;
    int rsize;
    int rmode;
    unsigned int rid;
    void *link;
    void *next;
    struct _sif_queue_data *base;
} sceSifServeData;
typedef struct _sif_queue_data {
    int key;
    int active;
    void *link;
    sceSifServeData *start;
    void *end;
    struct _sif_queue_data *next;
} sceSifQueueData;
extern void sceSifSetRpcQueue(sceSifQueueData *queue, int key);
extern void sceSifRegisterRpc(sceSifServeData *serve, unsigned int command, sceSifRpcFunc func,
                              void *buff, sceSifRpcFunc cfunc, void *cbuff, sceSifQueueData *queue);
extern void func_00109998(sceSifQueueData *queue);
extern volatile int D_00385928;
extern int D_00385924;
extern sceSifServeData D_003861E8;
extern sceSifQueueData D_00386230;
extern char D_00386250[];
extern void *D_0016E090(unsigned int command, void *buf, int size);

int func_0016E140(void) {
    sceSifSetRpcQueue(&D_00386230, func_00105250());
    sceSifRegisterRpc(&D_003861E8, D_00385924, D_0016E090, D_00386250, 0, 0, &D_00386230);
    D_00385928 = 1;
    func_00109998(&D_00386230);
    return 0;
}
