/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_002C7390(s32, s32);                        /* extern */
M2C_UNK func_008DC460(s32, s32, s8 *);              /* extern */
M2C_UNK func_008DC610(s32, s32);                    /* extern */

void func_008DCA20(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s8 sp68;
    s8 sp69;
    s8 sp6A;
    s8 sp6B;
    s8 sp6C;
    s8 sp6D;
    f32 temp_f0;
    s32 var_s1;
    s32 var_v1;
    s8 *var_s0;
    void *temp_a0;
    void *temp_v0;

    if ((arg0 != 0) && ((arg3 & 0xFF) < 2) && (((arg1 == 0) && (arg2 == 0)) || (temp_a0 = ((arg3 & 0xFF) * 4) + arg0, (M2C_FIELD(temp_a0, s32 *, 8) != arg1)) || (M2C_FIELD(temp_a0, s32 *, 0x10) != arg2))) {
        temp_v0 = ((arg3 & 0xFF) * 4) + arg0;
        M2C_FIELD(temp_v0, s32 *, 8) = arg1;
        M2C_FIELD(temp_v0, s32 *, 0x10) = arg2;
        if (arg1 != 0) {
            var_s1 = 0;
            var_s0 = &sp68;
            do {
                temp_f0 = func_002C7390(arg1, var_s1 & 0xFF);
                if (temp_f0 >= 2.1474836e9f) {
                    var_v1 = (s32) (temp_f0 - 2.1474836e9f) | 0x80000000;
                } else {
                    var_v1 = (s32) temp_f0;
                }
                var_s1 += 1;
                *var_s0 = var_v1 & 0xFF;
                var_s0 += 1;
            } while (var_s1 < 6);
        } else {
            sp68 = 0;
            sp69 = 0;
            sp6A = 0;
            sp6B = 0;
            sp6C = 0;
            sp6D = 0;
        }
        func_008DC460(arg0, arg3, &sp68);
        func_008DC610(arg0, arg3);
    }
}
