/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00173858(void *);
M2C_UNK func_00173B00(void *);                      /* extern */
M2C_UNK func_00173FF0(void *);                      /* extern */
s32 func_001741C0(void *, M2C_UNK, M2C_UNK);        /* extern */
M2C_UNK func_00174380(void *);                      /* extern */
M2C_UNK func_00174470(void *);                      /* extern */
M2C_UNK func_001744B8(void *);                      /* extern */

s32 func_00170BB0(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s32 *, 0xD10) != 0) {
            if (M2C_FIELD(arg0, s32 *, 0xB94) < M2C_FIELD(arg0, s32 *, 0xB8C)) {
                func_001744B8(arg0);
            }
            if (M2C_FIELD(arg0, s32 *, 0xB8C) > 0) {
                M2C_FIELD(arg0, s32 *, 0xD0C) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0C) + func_001741C0(arg0, 1, 1));
                func_00174380(arg0);
                goto block_17;
            }
            goto block_15;
        }
        if (M2C_FIELD(arg0, s32 *, 0xD0C) <= 0) {
            if (M2C_FIELD(arg0, s32 *, 0xB8C) > 0) {
                func_001741C0(arg0, 0, 1);
                func_00173858(arg0);
                func_00174380(arg0);
                func_00173B00(arg0);
                var_v0 = 0;
                goto block_18;
            }
block_15:
            return 0;
        }
        func_00173FF0(arg0);
        func_00173858(arg0);
        func_00174470(arg0);
block_17:
        func_00173B00(arg0);
        var_v0 = 1;
block_18:
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
        /* Duplicate return node #19. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
