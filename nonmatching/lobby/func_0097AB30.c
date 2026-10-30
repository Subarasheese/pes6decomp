/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009DD6B0(s32, s32);
u8 func_0093E960();                                 /* extern */
s32 func_0093E9B0();                                /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */
extern s8 *D_00A68D88;
extern M2C_UNK func_0097A310;

s32 func_0097AB30(void) {
    s32 temp_v0;
    s8 var_a0;
    u8 temp_a0;

    func_0099D030(1);
    temp_v0 = func_0093E9B0();
    if (temp_v0 != 0) {
        func_0099D030(0);
        if (temp_v0 < 0) {
            var_a0 = 7;
            M2C_FIELD(D_00A68D88, s8 *, 3) = 2;
        } else {
            M2C_FIELD(D_00A68D88, u8 *, 4) = func_0093E960();
            temp_a0 = M2C_FIELD(D_00A68D88, u8 *, 4);
            if (temp_a0 == 0) {
                M2C_FIELD(D_00A68D88, s8 *, 1) = 6;
            } else {
                func_009DD6B0((s32) temp_a0, (s32) &func_0097A310);
                M2C_FIELD(D_00A68D88, s8 *, 1) = 2;
            }
            var_a0 = 1;
        }
        M2C_FIELD(D_00A68D88, s8 *, 0) = var_a0;
        return 0;
    }
    return 0;
}
