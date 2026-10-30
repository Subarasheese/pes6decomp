/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0016E170(void *, s32, s8 *, s32);      /* extern */
s8 *func_001896B8(s32);                             /* extern */

void func_0016E038(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 var_a1;
    s32 var_s1_2;
    s8 *var_a2;
    s8 *var_s1;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x924);
    if (temp_a0 == 0) {
        M2C_FIELD(arg0, s8 **, 0x918) = NULL;
    } else {
        M2C_FIELD(arg0, s8 **, 0x918) = func_001896B8(temp_a0);
    }
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x928);
    M2C_FIELD(arg0, s32 *, 0x924) = 0;
    if (temp_a0_2 != 0) {
        M2C_FIELD(arg0, s8 **, 0x91C) = func_001896B8(temp_a0_2);
    } else {
        M2C_FIELD(arg0, s8 **, 0x91C) = NULL;
    }
    var_a2 = M2C_FIELD(arg0, s8 **, 0x918);
    M2C_FIELD(arg0, s32 *, 0x928) = 0;
    M2C_FIELD(arg0, s32 *, 0x4D0) = 0;
    M2C_FIELD(arg0, s32 *, 0x914) = 0;
    if (var_a2 != NULL) {
        var_s1 = var_a2;
        if (*var_a2 != 0) {
loop_9:
            if (*var_s1 == 0xA) {
                func_0016E170(arg0, M2C_FIELD(arg0, s32 *, 0x914), var_a2, var_s1 - var_a2);
                var_a2 = var_s1 + 1;
                M2C_FIELD(arg0, s32 *, 0x914) = (s32) (M2C_FIELD(arg0, s32 *, 0x914) + 1);
            }
            var_s1 += 1;
            if ((*var_s1 != 0) && (M2C_FIELD(arg0, s32 *, 0x914) < 0x28)) {
                goto loop_9;
            }
        }
        temp_a1 = M2C_FIELD(arg0, s32 *, 0x914);
        if ((temp_a1 < 0x28) && (var_s1 != var_a2)) {
            func_0016E170(arg0, temp_a1, var_a2, var_s1 - var_a2);
            M2C_FIELD(arg0, s32 *, 0x914) = (s32) (M2C_FIELD(arg0, s32 *, 0x914) + 1);
        }
    }
    var_s1_2 = M2C_FIELD(arg0, s32 *, 0x914);
    if (var_s1_2 < 0x28) {
        var_a1 = var_s1_2;
        do {
            func_0016E170(arg0, var_a1, NULL, 0);
            var_s1_2 += 1;
            var_a1 = var_s1_2;
        } while (var_s1_2 < 0x28);
    }
}
