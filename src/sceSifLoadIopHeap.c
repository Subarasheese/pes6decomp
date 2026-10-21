/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK code; source adapted from crashwoc-decomp-ps2 (src/sdk/sce/iopheap.c). */
typedef struct IopLoadArg {
    void *addr;
    char path[252];
} IopLoadArg;

extern char D_003EF500[];
extern int D_003EF540[];
extern IopLoadArg D_003EF5C0;
extern int D_003713A8;

int sceSifCallRpc(void *client, unsigned int fno, unsigned int mode, void *send, int ssize,
                  void *receive, int rsize, void (*end_func)(void *), void *end_param);

int sceSifLoadIopHeap(const char *path, void *addr)
{
    int len;

    if (D_003713A8 < 0)
        return 0;
    for (len = 0; len < 252; len++) {
        if ((D_003EF5C0.path[len] = path[len]) == 0)
            break;
    }
    if (len == 252) {
        len = 251;
        D_003EF5C0.path[len] = 0;
    }
    D_003EF5C0.addr = addr;
    D_003EF5C0.path[251] = 0;
    if (sceSifCallRpc(D_003EF500, 3, 0, &D_003EF5C0, len + 5, D_003EF540, 4, 0, 0) < 0)
        return -1;
    return D_003EF540[0];
}
