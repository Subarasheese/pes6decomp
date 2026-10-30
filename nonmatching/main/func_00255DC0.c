/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK FlushCache(M2C_UNK);                     /* extern */
M2C_UNK sceSifInitRpc(M2C_UNK);                     /* extern */
s32 sceSifBindRpc(M2C_UNK *, M2C_UNK, M2C_UNK);     /* extern */
extern char D_0058C690[];
extern char D_0058C6B4[];

void func_00255DC0(s32 arg0) {
    if (arg0 != 0) {

    } else {
        sceSifInitRpc(0);
loop_3:
        if (sceSifBindRpc(((void *)D_0058C690), 0x770, 0) < 0) {
loop_4:
            goto loop_4;
        }
        if ((*(s32 *)D_0058C6B4) != 0) {
            FlushCache(0);
            return;
        }
        goto loop_3;
    }
}
