/* compiler: ee-gcc-2.9-G0 */
/* Source: nathanialf/ico, sce/libkernl/sifrpc.c (sceSifRpcLoop). See LICENSES/ico-MIT.txt. */
extern int func_0019B040(void);
typedef void (*sceSifEndFunc)(void *param);
typedef void *(*sceSifRpcFunc)(int fno, void *buff, int size);
typedef struct sceSifRpcClientData {
    void *pkt;
    int pid;
    int sema;
    unsigned int mode;
    unsigned int command;
    unsigned int buff;
    unsigned int cbuff;
    sceSifEndFunc endFunc;
    void *endParam;
    unsigned int serve;
} sceSifRpcClientData;
typedef struct sceSifServeData {
    unsigned int command;
    sceSifRpcFunc func;
    void *buff;
    int size;
    sceSifRpcFunc cfunc;
    void *cbuff;
    int csize;
    sceSifRpcClientData *client;
    void *paddr;
    unsigned int fno;
    void *receive;
    int rsize;
    int rmode;
    unsigned int rid;
    struct sceSifServeData *link;
    struct sceSifServeData *next;
    struct sceSifQueueData *base;
} sceSifServeData;
typedef struct sceSifQueueData {
    int key;
    int active;
    struct sceSifServeData *link;
    struct sceSifServeData *start;
    struct sceSifServeData *end;
    struct sceSifQueueData *next;
} sceSifQueueData;
extern sceSifServeData *func_0019F300(sceSifQueueData *qd);
extern void func_0019F358(sceSifServeData *sd);

void func_0019F520(sceSifQueueData *qd) {
    sceSifServeData *item;
    for (;;) {
        while ((item = func_0019F300(qd)) != 0) {
            func_0019F358(item);
        }

        func_0019B040();
    }
}
