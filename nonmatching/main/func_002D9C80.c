/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001094A8(void *);
s32 sceSifBindRpc(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
extern char D_003B31FC[];

s32 func_002D9C80(void) {
    s32 var_v0;
    s32 var_v0_2;

    if (M2C_FIELD(((void *)D_003B31FC), s32 *, 0) != 0) {
        return 0;
    }
loop_6:
    var_v0 = -1;
    if (sceSifBindRpc(0x5E5F00, 0x80001101, 1) >= 0) {
        do {

        } while (func_001094A8((void *)0x5E5F00) != 0);
        if (M2C_FIELD((void *)0x5E5F00, s32 *, 0x24) != 0) {
            var_v0 = 0;
            M2C_FIELD(((void *)D_003B31FC), s32 *, 0x31FC) = 1;
        } else {
            var_v0_2 = 0x10000;
            do {
                var_v0_2 -= 1;
            } while (var_v0_2 != -1);
            goto loop_6;
        }
    }
    return var_v0;
}
