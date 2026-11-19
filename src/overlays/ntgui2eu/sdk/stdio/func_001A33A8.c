/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK code; source adapted from crashwoc-decomp-ps2 (src/sdk/sce/iopheap.c). */
typedef struct IopLoadArg {
    void *addr;
    char path[252];
} IopLoadArg;

extern char D_01204B40[];
extern int D_01204B80[];
extern IopLoadArg D_01204C00;
extern int D_005CABFC;

int func_0019EE30(void *client, unsigned int fno, unsigned int mode, void *send, int ssize,
                  void *receive, int rsize, void (*end_func)(void *), void *end_param);

int func_001A33A8(const char *path, void *addr)
{
    int len;

    if (D_005CABFC < 0)
        return 0;
    for (len = 0; len < 252; len++) {
        if ((D_01204C00.path[len] = path[len]) == 0)
            break;
    }
    if (len == 252) {
        len = 251;
        D_01204C00.path[len] = 0;
    }
    D_01204C00.addr = addr;
    D_01204C00.path[251] = 0;
    if (func_0019EE30(D_01204B40, 3, 0, &D_01204C00, len + 5, D_01204B80, 4, 0, 0) < 0)
        return -1;
    return D_01204B80[0];
}
