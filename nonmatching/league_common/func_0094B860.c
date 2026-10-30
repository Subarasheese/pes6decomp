/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00931150(void *);
extern s64 func_00230410(void);
extern void * func_002260A0(void);
extern s32 func_00226710(void);
M2C_UNK func_00986580(s32, s32);                    /* extern */
M2C_UNK func_00986830(s32, s32);                    /* extern */
M2C_UNK func_00986B90(void *, s32);                 /* extern */

s32 func_0094B860(s32 arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2;
    u8 temp_v1_2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v1;
    void *var_s0;

    var_s2 = 1;
    temp_v0 = func_002260A0();
    if (temp_v0 != NULL) {
        temp_s0 = (arg0 & 0xFFFF) * 0x1A;
        temp_v1 = temp_s0 + temp_v0;
        if ((M2C_FIELD(temp_v1, u8 *, 0x19B28) == 0) && (M2C_FIELD(temp_v1, u8 *, 0x19B29) == 0)) {
            func_00931150(temp_v1 + 0x19B24);
        } else {
            var_s2 = 0;
        }
        var_s0 = temp_v0 + temp_s0;
        var_s1 = 0;
        do {
            temp_v1_2 = M2C_FIELD(var_s0, u8 *, 0x19B2A);
            if (!(temp_v1_2 & 1) && (((u64) ((s64) temp_v1_2 << 0x38) >> 0x3C) == 0) && (((u64) ((s64) temp_v1_2 << 0x3C) >> 0x3D) == 0) && (M2C_FIELD(var_s0, u8 *, 0x19B2C) == 0) && !(M2C_FIELD(var_s0, u8 *, 0x19B2D) & 0x3F)) {
                func_00986B90(var_s0 + 0x19B2A, func_00226710());
            } else {
                var_s2 = 0;
            }
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 4);
        if (var_s2 == 1) {
            temp_v0_2 = func_002260A0();
            if (temp_v0_2 != NULL) {
                temp_v0_3 = ((arg0 & 0xFF) * 0x1A) + temp_v0_2;
                M2C_FIELD(temp_v0_3, s16 *, 0x19B20) = 0;
                M2C_FIELD(temp_v0_3, s8 *, 0x19B22) = 0xFF;
                func_00931150(temp_v0_3 + 0x19B24);
                temp_s0_2 = arg0 & 0xFF;
                var_s1_2 = 0;
                do {
                    if (func_00230410() == 1) {
                        func_00986830(var_s1_2 & 0xFF, temp_s0_2);
                    } else {
                        func_00986580(var_s1_2 & 0xFF, temp_s0_2);
                    }
                    var_s1_2 += 1;
                } while (var_s1_2 < 4);
            }
        }
        return var_s2;
    }
    return 0;
}
