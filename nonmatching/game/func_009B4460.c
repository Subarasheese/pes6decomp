/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003E758C;
extern char D_00CBAA02[];

void func_009B4460(s16 arg0) {
    s16 var_a0;

    var_a0 = arg0;
    if ((var_a0 & 0xFFFF) >= 0x12C) {
        var_a0 = 0;
    }
    if (M2C_FIELD((((var_a0 & 0xFFFF) * 0x354) + D_003E758C), s16 *, 0x348) == 0x7FFF) {
        do {
            if (!(var_a0 & 0xFFFF)) {
                var_a0 = 0x12B;
            } else {
                var_a0 = (var_a0 - 1) & 0xFFFF;
            }
        } while (M2C_FIELD((D_003E758C + ((var_a0 & 0xFFFF) * 0x354)), s16 *, 0x348) == 0x7FFF);
    }
    (*(s16 *)D_00CBAA02) = var_a0;
}
