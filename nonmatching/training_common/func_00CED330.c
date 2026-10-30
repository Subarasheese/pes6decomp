/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

f32 func_001DE1A0(s32, s32, f32);                   /* extern */
f32 func_001DE2F0(s32, s32);                        /* extern */
M2C_UNK func_001DEF30(s32, M2C_UNK);                /* extern */
M2C_UNK func_001DF4F0(s32, M2C_UNK);                /* extern */
M2C_UNK func_001DF510(s32, f32, f32);               /* extern */
M2C_UNK func_001DF750(s32, f32, f32);               /* extern */
s32 func_001DFA30(s32, f32 *, s32);                 /* extern */

void func_00CED330(void *arg0, s32 arg1, void *arg2, s32 arg3) {
    f32 sp60;
    f32 sp64;
    f32 *var_a0;
    f32 temp_f0;
    f32 temp_f20;
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0xC;
    var_a0 = &sp60;
    if (var_a0 != NULL) {
        do {
            *var_a0 = 0;
            var_v1 -= 1;
            var_a0 += 1;
        } while (var_v1 != 0);
    }
    if ((arg0 != NULL) && (arg2 != NULL)) {
        if (arg3 == 0) {
            return;
        }
        if (arg1 >= 0) {
            if (arg1 >= 0x20) {
                return;
            }
            sp60 = M2C_FIELD(arg2, f32 *, 0);
            sp64 = M2C_FIELD(arg2, f32 *, 4);
            temp_v0 = func_001DFA30(arg1, &sp60, arg3);
            M2C_FIELD(arg0, s32 *, 0x10) = temp_v0;
            if (temp_v0 != 0) {
                func_001DF4F0(temp_v0, 1);
                temp_f0 = func_001DE2F0(arg3, arg1);
                temp_f20 = func_001DE1A0(arg3, arg1, temp_f0);
                func_001DF750(M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg2, f32 *, 0), M2C_FIELD(arg2, f32 *, 4));
                func_001DF510(M2C_FIELD(arg0, s32 *, 0x10), temp_f0, temp_f20);
                func_001DEF30(M2C_FIELD(arg0, s32 *, 0x10), 0);
            }
        }
    }
}
