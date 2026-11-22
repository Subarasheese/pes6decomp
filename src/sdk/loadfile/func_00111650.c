/* compiler: ee-gcc-2.9-G0 */
/* scePadInit adapted from LucasPicoli/god-hand-decomp, src/cod/00397630.c. See THIRD_PARTY.md. */
extern int sceSifBindRpc(void *client, unsigned int server, int mode);
extern int func_001117E8(int mode);

typedef struct {
    unsigned char pad0[0x24];
    int server;
} SifRpcClientData;
extern SifRpcClientData D_003F3200[2];
extern int D_003729D0;
extern int D_003729D4;
extern char D_003C3F78[];
extern char D_003C3FA0[];
extern int scePadGetModVersion(void);
extern int printf(const char *fmt, ...);
int func_00111650(int mode) {
    int i;
    int ver;
    if (D_003729D0 == 0) {
        for (;;) {
            sceSifBindRpc(&D_003F3200[0], 0x80000100, 0);
            if (D_003F3200[0].server != 0)
                break;
            i = 0x10000;
            do {
                i--;
            } while (i != (-1));
        }

        for (;;) {
            sceSifBindRpc(&D_003F3200[1], 0x80000101, 0);
            if (D_003F3200[1].server != 0)
                break;
            i = 0x10000;
            do {
                i--;
            } while (i != (-1));
        }

        ver = scePadGetModVersion();
        if ((ver >> 8) != 4) {
            if (D_003729D4 != 0) {
                printf(D_003C3F78);
                printf(D_003C3FA0, 4, 0, ver >> 8, ver & 0xFF);
            }
            return 0;
        }
    }
    i = func_001117E8(mode);
    D_003729D0 = 1;
    return i;
}
