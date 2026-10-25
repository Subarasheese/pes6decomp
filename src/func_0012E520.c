/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 sceSifCallRpc(void *cd, s32 fno, s32 mode, void *send, s32 ssize, void *recv, s32 rsize, void *end, void *ea);
extern void WaitSema(s32);
extern void func_0012E450(void *);
extern s32 D_003FB680[];
extern u8 D_003FB6A0[];
extern s32 D_003E9798;

s32 func_0012E520(s32 a0, void *recv) {
    s32 ret;

    D_003FB680[0] = a0;
    WaitSema(D_003E9798);
    ret = sceSifCallRpc(D_003FB6A0, 2, 1, D_003FB680, 0x20, recv, 0x20, func_0012E450, 0);
    if (ret != 0) {
        return ret;
    }
    return 0;
}
