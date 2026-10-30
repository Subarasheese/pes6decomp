/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B526C0(void);
extern void func_001D7D80(void *, s16);
M2C_UNK func_00973940(s32, M2C_UNK, M2C_UNK, f32 *); /* extern */
M2C_UNK func_00973C70(void *, f32 *);               /* extern */

void func_00B50D40(void *arg0, f32 *arg1, s32 arg2) {
    f32 sp50;
    f32 *var_a0;
    s32 var_v1;
    s64 var_v0;
    u32 temp_v0;

    var_v1 = 0x10;
    var_a0 = &sp50;
    if (var_a0 != NULL) {
        do {
            *var_a0 = 0;
            var_v1 -= 1;
            var_a0 += 1;
        } while (var_v1 != 0);
    }
    if ((arg0 != NULL) && (arg1 != NULL)) {
        temp_v0 = func_00B526C0();
        if (temp_v0 != 0) {
            func_00973C70(arg0, arg1);
            if (arg2 & 0xFF) {
                func_00973940(M2C_FIELD(temp_v0, s32 *, 0), 0xB, 0x2A, &sp50);
                if (!((M2C_FIELD(temp_v0, f32 *, 0x61C) + *arg1) <= sp50)) {
                    var_v0 = 1;
                } else {
                    goto block_13;
                }
            } else {
                func_00973940(M2C_FIELD(temp_v0, s32 *, 0), 0xB, 0x29, &sp50);
                if (!((M2C_FIELD(temp_v0, f32 *, 0x61C) + *arg1) < sp50)) {
                    var_v0 = 1;
                } else {
block_13:
                    var_v0 = 0;
                }
            }
            func_001D7D80(arg0, (s16) ((s64) (var_v0 << 0x30) >> 0x30));
        }
    }
}
