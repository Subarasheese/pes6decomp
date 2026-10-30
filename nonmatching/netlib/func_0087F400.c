/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA40(void);
s64 func_00858B60(M2C_UNK *, M2C_UNK);              /* extern */
s32 func_0085E4C0(s64);                             /* extern */
extern char D_0058D7A0[];
extern char D_008B21C0[];

s8 func_0087F400(void) {
    s32 temp_s0;
    s64 var_s2;
    s8 var_s1;
    s8 var_v0;

    var_s2 = 1;
    var_s1 = 0;
    if (((s64) (func_00858B60(((void *)D_008B21C0), 1) << 0x38) >> 0x38) > 0) {
        do {
            temp_s0 = var_s2 - 1;
            if (func_0085E4C0((s64) (var_s2 << 0x30) >> 0x30) == 3) {
                if ((func_002DCA40() != 0) && (var_s2 == 1)) {
                    var_v0 = M2C_FIELD((((void *)D_0058D7A0) + temp_s0), s8 *, 0x28);
                } else {
                    var_v0 = M2C_FIELD((((void *)D_0058D7A0) + temp_s0), s8 *, 0x4C);
                }
                if ((var_v0 < 4) && (var_s1 < var_v0)) {
                    var_s1 = var_v0;
                }
            }
            var_s2 += 1;
        } while (((s64) (func_00858B60(((void *)D_008B21C0), 1) << 0x38) >> 0x38) >= var_s2);
    }
    return var_s1;
}
