/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK code; source adapted from crashwoc-decomp-ps2 (src/sdk/sce/iopheap.c). */
typedef struct sceSifClientData {
    unsigned char rpc_data[16];
    unsigned int command;
    void *buff;
    void *cbuff;
    void (*end_func)(void *);
    void *end_param;
    void *server;
} sceSifClientData;

extern sceSifClientData D_003EF500;
extern int D_003713A8;

int sceSifBindRpc(sceSifClientData *client, unsigned int request, unsigned int mode);

int sceSifInitIopHeap(void)
{
    int wait;

    while (1) {
        if (sceSifBindRpc(&D_003EF500, 0x80000003, 0) < 0)
            return -1;
        if (D_003EF500.server != 0) {
            D_003713A8 = 0;
            break;
        }
        wait = 0x100000;
        while (wait--) {
        }
    }
    return 0;
}
