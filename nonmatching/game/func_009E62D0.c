/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBDFD[];

s32 func_009E62D0(s64 arg0, s64 arg1) {
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;

    if ((*(u8 *)D_00CBBDFD) != 5) {
        if ((*(u8 *)D_00CBBDFD) != 6) {
            if ((*(u8 *)D_00CBBDFD) != 7) {
                if ((*(u8 *)D_00CBBDFD) == 8) {
                    if (((s64) (arg0 << 0x30) >> 0x30) < ((s64) (arg1 << 0x30) >> 0x30)) {
                        return 1;
                    }
                    goto block_9;
                }
                if ((s32) (*(u8 *)D_00CBBDFD) >= 5) {
                    var_v0 = ((*(u8 *)D_00CBBDFD) & 1) == 1;
                    if (var_v0 != 0) {
                        var_v0 = ((s64) (arg0 << 0x30) >> 0x30) != ((s64) (arg1 << 0x30) >> 0x30);
                    }
                    return var_v0 & 0xFF;
                }
                return 0;
            }
block_9:
            var_v0_2 = ((s64) (arg0 << 0x30) >> 0x30) - ((s64) (arg1 << 0x30) >> 0x30);
            if (var_v0_2 <= 0) {
                var_v0_2 = -var_v0_2;
            }
            if (var_v0_2 >= 2) {
                return 1;
            }
            goto block_13;
        }
block_13:
        if ((((s64) (arg1 << 0x30) >> 0x30) - ((s64) (arg0 << 0x30) >> 0x30)) >= 2) {
            return 1;
        }
        goto block_15;
    }
block_15:
    var_v0_3 = ((s64) (arg0 << 0x30) >> 0x30) - ((s64) (arg1 << 0x30) >> 0x30);
    if (var_v0_3 <= 0) {
        var_v0_3 = -var_v0_3;
    }
    if (var_v0_3 < 3) {
        return 0;
    }
    return 1;
}
