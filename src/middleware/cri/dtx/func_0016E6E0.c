/* compiler: ee-gcc-2.96-G0-g */
/* crowded-street/3s-decomp src/anniversary/cri/libadxe/dtx.c (DTX_Init). See THIRD_PARTY.md. */

typedef signed int Sint32;
extern void func_001610B0(const char *fmt, ...);
typedef struct _sif_rpc_data {
    void *paddr;
    unsigned int pid;
    int tid;
    unsigned int mode;
} sceSifRpcData;
typedef void (*sceSifEndFunc)(void *);
typedef struct _sif_client_data {
    struct _sif_rpc_data rpcd;
    unsigned int command;
    void *buff;
    void *gp;
    sceSifEndFunc func;
    void *para;
    struct _sif_serve_data *serve;
} sceSifClientData;
typedef void *(*sceSifRpcFunc)(unsigned int, void *, int);
typedef struct _sif_serve_data {
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
    struct _sif_serve_data *link;
    struct _sif_serve_data *next;
    struct _sif_queue_data *base;
} sceSifServeData;
typedef struct _sif_queue_data {
    int key;
    int active;
    struct _sif_serve_data *link;
    struct _sif_serve_data *start;
    struct _sif_serve_data *end;
    struct _sif_queue_data *next;
} sceSifQueueData;
extern int sceSifBindRpc(sceSifClientData *, unsigned int, unsigned int);
extern Sint32 D_00385924;
extern Sint32 D_0038593C;
extern sceSifClientData D_003861C0;

void func_0016E6E0() {
    Sint32 x;
    Sint32 y;
    if (D_0038593C == 0) {
        while (1) {
            if (sceSifBindRpc(&D_003861C0, D_00385924, 0) < 0) {
                func_001610B0("E0092101: DTX_Init bind errr\n");
                while (1) {
                }
            }
            if (D_003861C0.serve != 0) {
                break;
            }
            y = -1;
            x = 0xFFFF;
            while (x != y) {
                x -= 4;
            }
        }
    }
    D_0038593C += 1;
}
