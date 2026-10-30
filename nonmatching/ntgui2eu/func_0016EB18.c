/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00135018(s8 *);                        /* extern */
M2C_UNK func_0016E3A8(void *, s32, s8 *, s32);      /* extern */
s8 *func_001896B8(s32);                             /* extern */
extern s32 (*D_005C14A0)();

s32 func_0016EB18(void *arg0, void *arg1, void *arg2) {
    s32 temp_a1;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a1;
    s32 var_s0_2;
    s32 var_v0;
    s8 *temp_a0;
    s8 *temp_a0_2;
    s8 *temp_v0;
    s8 *var_a2;
    s8 *var_s0;

    var_a0 = D_005C14A0();
    temp_v1 = M2C_FIELD(arg1, s32 *, 0x924);
    if ((temp_v1 != M2C_FIELD(arg2, s32 *, 0x924)) && (temp_v1 != 0)) {
        temp_a0 = M2C_FIELD(arg0, s8 **, 0x918);
        if (temp_a0 != NULL) {
            func_00135018(temp_a0);
        }
        temp_v0 = func_001896B8(M2C_FIELD(arg1, s32 *, 0x924));
        M2C_FIELD(arg0, s32 *, 0x914) = 0;
        M2C_FIELD(arg0, s8 **, 0x918) = temp_v0;
        if (temp_v0 != NULL) {
            var_a2 = temp_v0;
            var_s0 = var_a2;
            if (*var_a2 != 0) {
loop_6:
                if (*var_s0 == 0xA) {
                    func_0016E3A8(arg0, M2C_FIELD(arg0, s32 *, 0x914), var_a2, var_s0 - var_a2);
                    var_a2 = var_s0 + 1;
                    M2C_FIELD(arg0, s32 *, 0x914) = (s32) (M2C_FIELD(arg0, s32 *, 0x914) + 1);
                }
                var_s0 += 1;
                if ((*var_s0 != 0) && (M2C_FIELD(arg0, s32 *, 0x914) < 0x28)) {
                    goto loop_6;
                }
            }
            temp_a1 = M2C_FIELD(arg0, s32 *, 0x914);
            if ((temp_a1 < 0x28) && (var_s0 != var_a2)) {
                func_0016E3A8(arg0, temp_a1, var_a2, var_s0 - var_a2);
                M2C_FIELD(arg0, s32 *, 0x914) = (s32) (M2C_FIELD(arg0, s32 *, 0x914) + 1);
            }
        }
        var_s0_2 = M2C_FIELD(arg0, s32 *, 0x914);
        if (var_s0_2 < 0x28) {
            var_a1 = var_s0_2;
            do {
                func_0016E3A8(arg0, var_a1, NULL, 0);
                var_s0_2 += 1;
                var_a1 = var_s0_2;
            } while (var_s0_2 < 0x28);
        }
        var_a0 = 1;
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
    }
    temp_v1_2 = M2C_FIELD(arg1, s32 *, 0x928);
    if (temp_v1_2 != M2C_FIELD(arg2, s32 *, 0x928)) {
        var_v0 = var_a0;
        if (temp_v1_2 != 0) {
            temp_a0_2 = M2C_FIELD(arg0, s8 **, 0x91C);
            if (temp_a0_2 != NULL) {
                func_00135018(temp_a0_2);
            }
            M2C_FIELD(arg0, s8 **, 0x91C) = func_001896B8(M2C_FIELD(arg1, s32 *, 0x928));
            M2C_FIELD(arg0, s32 *, 0x98) = 2;
            var_a0 = 1;
            goto block_23;
        }
    } else {
block_23:
        var_v0 = var_a0;
    }
    return var_v0;
}
