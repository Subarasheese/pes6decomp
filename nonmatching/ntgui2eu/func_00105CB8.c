/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u32 func_001059F8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern s32 D_006025F4;
extern u32 D_006025F8;
extern u32 D_006025FC;
extern u32 D_00602600;

s32 func_00105CB8(u32 arg0, u32 arg1) {
    s32 temp_a1;
    s32 var_a2;
    s32 var_v0;
    u32 temp_v0;
    u32 var_a0;
    u32 var_v0_2;

    var_v0 = -1;
    if ((arg0 < 0x30U) && (arg1 < 0x30U) && ((s32) arg1 >= (s32) arg0)) {
        D_006025F4 = 0;
        D_006025FC = func_001059F8(0x22000035, 0, 0, 0);
        temp_v0 = func_001059F8(0x22000036, 0, 0, 0);
        var_a0 = arg0;
        D_00602600 = temp_v0;
        D_006025F8 = var_a0;
        var_a2 = D_006025F4;
        do {
            if ((s32) var_a0 >= 0x18) {
                var_v0_2 = temp_v0 >> (var_a0 - 0x18);
            } else {
                var_v0_2 = (u32) D_006025FC >> var_a0;
            }
            var_a2 |= var_v0_2 & 1;
            temp_a1 = var_a0 + 1;
            var_a0 = (u32) temp_a1;
        } while ((s32) arg1 >= temp_a1);
        D_006025F8 = (u32) temp_a1;
        var_v0 = var_a2;
        D_006025F4 = var_a2;
    }
    return var_v0;
}
