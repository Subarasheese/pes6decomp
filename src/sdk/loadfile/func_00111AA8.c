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
extern int D_003729D4;
extern char D_003C3FE8[];
extern char D_003C4018[];
extern RpcClient D_003F3200[2];
extern PadSlot D_003F3250[2][4];
extern int D_003F3340[2][4][8];
extern int D_003F3440[32];
extern int printf(const char *, ...);
extern void *memset(void *, int, unsigned int);
extern int sceSifCallRpc(void *, unsigned int, unsigned int, void *, int, void *, int,
                         void (*)(void *), void *);

int func_00111AA8(int port, int slot, void *addr) {
    int ret;
    int val;
    int i;
    char *p;
    int *q;
    if ((((unsigned int)addr) & 0x3F) != 0) {
        if (D_003729D4 != 0) {
            printf(D_003C3FE8, addr);
        }
        return 0;
    }
    if (D_003F3250[port][slot].opened == 1) {
        if (D_003729D4 != 0) {
            printf(D_003C4018, port, slot);
        }
        return 0;
    }
    p = (char *)addr;
    for (i = 0; i < 2; i++) {
        *((int *)(p + 0x58)) = 0;
        p[0x70] = 5;
        p[0x71] = 2;
        p[0x67] = 0;
        memset(p, 0xFF, 0x20);
        *((int *)(p + 0x60)) = 0;
        p += 0x80;
    }

    D_003F3440[0] = 1;
    D_003F3440[1] = port;
    D_003F3440[2] = slot;
    D_003F3440[4] = (int)addr;
    ret = sceSifCallRpc(&D_003F3200[0], 1, 0, D_003F3440, 0x80, D_003F3440, 0x80, 0, 0);
    if (ret < 0) {
        return 0;
    }
    q = D_003F3340[port][slot];
    val = (int)(*((void **)(&D_003F3440[5])));
    D_003F3250[port][slot].opened = 1;
    D_003F3250[port][slot].iopBuf = (int *)val;
    D_003F3250[port][slot].dmaArea = addr;
    D_003F3250[port][slot].cmdBuf = q;
    q[0] = 0;
    D_003F3250[port][slot].dmaId = 0;
    return D_003F3440[3];
}
