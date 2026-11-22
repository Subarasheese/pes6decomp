/* compiler: ee-gcc-2.9-G0 */
/* Cross-match with OpenRAC/rac-deadlocked-decomp, src/core/0013AEF8.c. See THIRD_PARTY.md. */
#include "types.h"
typedef struct {
    u8 reserved00[0x24];
    void *server;
} MultitapRpcClient;
extern MultitapRpcClient D_0050D780;
extern u8 D_0050D840[128];
extern char D_003C7278[], D_003C7290[], D_003C72B8[];
extern void sceSifInitRpc(s32 mode);
extern s32 sceSifBindRpc(MultitapRpcClient *, u32 service, s32 mode);
extern void func_00154C30(const char *message, ...);
extern void printf(const char *, ...);
extern s32 func_00155078(void);
extern s32 func_00154C58(void *buffer);
extern void *memset(void *, s32, u32);
s32 func_00154CB8(void) {
    s32 delay, version;
    sceSifInitRpc(0);
    for (;;) {
        if (sceSifBindRpc(&D_0050D780, 0x80000900, 0) < 0) {
            func_00154C30(D_003C7278);
            return 0;
        }
        if (D_0050D780.server)
            break;
        delay = 0x10000;
        while (--delay != -1) {
        }
    }
    version = func_00155078();
    if ((version >> 4) != 0x31) {
        printf(D_003C7290);
        printf(D_003C72B8, 3, 0x10, version >> 8, version & 0xff);
        return 0;
    }
    memset(D_0050D840, 0, sizeof(D_0050D840));
    func_00154C58(D_0050D840);
    return 1;
}
