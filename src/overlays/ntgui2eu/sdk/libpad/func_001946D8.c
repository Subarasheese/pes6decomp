/* compiler: ee-gcc-2.9-G0 */
/* Source: g-guthrie/mvc2-port-and-decomp, src/r15_06_a.c (func_0010D5C0). See LICENSES/ggx-CC0.txt.
 */
typedef struct {
    void *dmaArea;
    int *cmdBuf;
    int *iopBuf;
    int dmaId;
    int opened;
    int pad14;
    int pad18;
} PadSlot;
typedef struct {
    unsigned char b[0x50];
} RpcClient;
extern int D_005CA9E4;
extern char D_005FF1C8[];
extern char D_005FF1F8[];
extern RpcClient D_011FD4C0[2];
extern PadSlot D_011FD510[2][4];
extern int D_011FD600[2][4][8];
extern int D_011FD700[32];
extern int func_0019DBD0(const char *, ...);
extern void *func_001AE7D8(void *, int, unsigned int);
extern int func_0019EE30(void *, unsigned int, unsigned int, void *, int, void *, int,
                         void (*)(void *), void *);

int func_001946D8(int port, int slot, void *addr) {
    int ret;
    int val;
    int i;
    char *p;
    int *q;
    if ((((unsigned int)addr) & 0x3F) != 0) {
        if (D_005CA9E4 != 0) {
            func_0019DBD0(D_005FF1C8, addr);
        }
        return 0;
    }
    if (D_011FD510[port][slot].opened == 1) {
        if (D_005CA9E4 != 0) {
            func_0019DBD0(D_005FF1F8, port, slot);
        }
        return 0;
    }
    p = (char *)addr;
    for (i = 0; i < 2; i++) {
        *((int *)(p + 0x58)) = 0;
        p[0x70] = 5;
        p[0x71] = 2;
        p[0x67] = 0;
        func_001AE7D8(p, 0xFF, 0x20);
        *((int *)(p + 0x60)) = 0;
        p += 0x80;
    }

    D_011FD700[0] = 1;
    D_011FD700[1] = port;
    D_011FD700[2] = slot;
    D_011FD700[4] = (int)addr;
    ret = func_0019EE30(&D_011FD4C0[0], 1, 0, D_011FD700, 0x80, D_011FD700, 0x80, 0, 0);
    if (ret < 0) {
        return 0;
    }
    q = D_011FD600[port][slot];
    val = (int)(*((void **)(&D_011FD700[5])));
    D_011FD510[port][slot].opened = 1;
    D_011FD510[port][slot].iopBuf = (int *)val;
    D_011FD510[port][slot].dmaArea = addr;
    D_011FD510[port][slot].cmdBuf = q;
    q[0] = 0;
    D_011FD510[port][slot].dmaId = 0;
    return D_011FD700[3];
}
