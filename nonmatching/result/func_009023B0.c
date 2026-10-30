/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA40(void);
s64 func_00858B60(M2C_UNK *, M2C_UNK);              /* extern */
s32 func_0087F500(s32);                             /* extern */
extern char D_0058D7A0[];
extern char D_008B21C0[];
extern char D_00924000[];

s32 func_009023B0(s32 arg0) {
    s32 var_s0;
    s32 var_v1;

    var_s0 = 1;
    if (((s64) (func_00858B60(((void *)D_008B21C0), 1) << 0x38) >> 0x38) > 0) {
loop_1:
        if ((func_002DCA40() != 0) && (var_s0 == 1)) {
            var_v1 = (*(s32 *)D_00924000);
        } else {
            var_v1 = (s32) M2C_FIELD((((void *)D_0058D7A0) + (var_s0 - 1)), s8 *, 0x48);
        }
        if ((var_v1 != -1) && (func_0087F500(M2C_FIELD(&(((void *)D_00924000))[var_v1], s32 *, 0x30)) != arg0)) {
            return 0;
        }
        var_s0 += 1;
        if (((s64) (func_00858B60(((void *)D_008B21C0), 1) << 0x38) >> 0x38) < var_s0) {
            goto block_11;
        }
        goto loop_1;
    }
block_11:
    return 1;
}
