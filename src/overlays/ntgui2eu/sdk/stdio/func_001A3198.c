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

extern sceSifClientData D_01204B40;
extern int D_005CABFC;

int func_0019EC50(sceSifClientData *client, unsigned int request, unsigned int mode);

int func_001A3198(void)
{
    int wait;

    while (1) {
        if (func_0019EC50(&D_01204B40, 0x80000003, 0) < 0)
            return -1;
        if (D_01204B40.server != 0) {
            D_005CABFC = 0;
            break;
        }
        wait = 0x100000;
        while (wait--) {
        }
    }
    return 0;
}
