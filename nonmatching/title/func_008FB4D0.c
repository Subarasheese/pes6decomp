/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008FB4D0(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a5;
    s32 temp_a6;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_t1;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a2;
    void *temp_v1;
    void *temp_v1_2;
    void *var_a4;
    void *var_v0;
    void *var_v1;

    temp_a5 = M2C_FIELD(arg0, s32 *, 0x184);
    temp_a6 = M2C_FIELD(arg0, s32 *, 0x160);
    var_a4 = NULL;
    var_t1 = 0;
    if (temp_a6 == 3) {
        M2C_FIELD(arg0, void **, 0x1D0) = (void *) M2C_FIELD(arg0, void **, 0x1D4);
        M2C_FIELD(arg0, void **, 0x1E0) = (void *) M2C_FIELD(arg0, void **, 0x1E4);
        M2C_FIELD(arg0, void **, 0x1F0) = (void *) M2C_FIELD(arg0, void **, 0x1F4);
        if ((M2C_FIELD(arg0, s32 *, 0xB4) + M2C_FIELD(arg0, s32 *, 0xB8)) >= (((temp_a5 ^ 3) == 0) ? 2 : 4)) {
            M2C_FIELD(arg0, s32 *, 0xFC) = 0;
            M2C_FIELD(arg0, s32 *, 0x1B8) = 0;
            M2C_FIELD(arg0, s32 *, 0x1B4) = 0;
        }
        if (((M2C_FIELD(arg0, s32 *, 0xFC) != 0) || (M2C_FIELD(arg0, s32 *, 0x1B8) != 0)) && (M2C_FIELD(arg0, s32 *, 0x1B4) == 0)) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C8), s32 *, 0x28) = 0;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x1D8), s32 *, 0x28) = 0;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), s32 *, 0x28) = 0;
        }
        M2C_FIELD(arg0, s32 *, 0xFC) = 0;
        M2C_FIELD(arg0, s32 *, 0x1B8) = 0;
        if (M2C_FIELD(arg0, s32 *, 0x184) == 3) {
            var_a0 = 1;
            if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C8), s32 *, 0x28) == 1) {
                var_v1 = M2C_FIELD(arg0, void **, 0x1CC);
                goto block_18;
            }
            if (M2C_FIELD(arg0, s32 *, 0x1B4) != 0) {
                var_v1 = M2C_FIELD(arg0, void **, 0x1CC);
                goto block_18;
            }
        } else {
            temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x1D8), s32 *, 0x28);
            if (((temp_a0 == 1) && (M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), s32 *, 0x28) == temp_a0)) || (M2C_FIELD(arg0, s32 *, 0x1B4) != 0)) {
                var_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x1DC), s32 *, 0x28);
                if (var_a0 == 1) {
                    var_v1 = M2C_FIELD(arg0, void **, 0x1EC);
block_18:
                    var_t1 = ((M2C_FIELD(var_v1, s32 *, 0x28) ^ 1) != 0) ? 0 : var_a0;
                }
            }
        }
    } else {
        if (arg1 == 0) {
            temp_a0_2 = M2C_FIELD(arg0, void **, 0x1CC);
            M2C_FIELD(arg0, void **, 0x1CC) = (void *) M2C_FIELD(arg0, void **, 0x1C8);
            temp_v1 = M2C_FIELD(arg0, void **, 0x1DC);
            M2C_FIELD(arg0, void **, 0x1DC) = (void *) M2C_FIELD(arg0, void **, 0x1D8);
            temp_a2 = M2C_FIELD(arg0, void **, 0x1E8);
            M2C_FIELD(arg0, void **, 0x1C8) = temp_a0_2;
            M2C_FIELD(arg0, void **, 0x1D8) = temp_v1;
            M2C_FIELD(arg0, void **, 0x1E8) = (void *) M2C_FIELD(arg0, void **, 0x1EC);
            M2C_FIELD(arg0, void **, 0x1EC) = temp_a2;
        }
        temp_a0_3 = M2C_FIELD(arg0, void **, 0x1DC);
        temp_v1_2 = M2C_FIELD(arg0, void **, 0x1EC);
        M2C_FIELD(arg0, void **, 0x1D0) = (void *) M2C_FIELD(arg0, void **, 0x1CC);
        M2C_FIELD(arg0, void **, 0x1E0) = temp_a0_3;
        M2C_FIELD(arg0, void **, 0x1F0) = temp_v1_2;
        if (temp_a5 == 3) {
            if (temp_a6 == 2) {
                var_v0 = M2C_FIELD(arg0, void **, 0x1C8);
                var_a0_2 = 1;
                goto block_29;
            }
            goto block_30;
        }
        if ((temp_a6 == 2) && ((arg1 == 0) || (M2C_FIELD((((temp_a5 ^ 1) != 0) ? temp_a0_3 : temp_v1_2), s32 *, 0x28) != 1))) {
            var_a0_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x1D8), s32 *, 0x28);
            if (var_a0_2 == 1) {
                var_v0 = M2C_FIELD(arg0, void **, 0x1E8);
block_29:
                if (M2C_FIELD(var_v0, s32 *, 0x28) == var_a0_2) {
                    goto block_30;
                }
            }
        } else {
block_30:
            var_t1 = 1;
        }
    }
    switch (M2C_FIELD(arg0, s32 *, 0x184)) {        /* irregular */
    case 1:
        var_a4 = M2C_FIELD(arg0, void **, 0x1E0);
        break;
    case 3:
        var_a4 = M2C_FIELD(arg0, void **, 0x1D0);
        break;
    case 2:
        var_a4 = M2C_FIELD(arg0, void **, 0x1F0);
        break;
    }
    M2C_FIELD(var_a4, s32 *, 0x28) = 0;
    M2C_FIELD(var_a4, s64 *, 0x18) = (s64) M2C_FIELD(arg0, s64 *, 0x838);
    M2C_FIELD(var_a4, s32 *, 0x2C) = (s32) M2C_FIELD(arg0, s32 *, 0x160);
    M2C_FIELD(var_a4, s64 *, 0x20) = (s64) M2C_FIELD(arg0, s64 *, 0x840);
    M2C_FIELD(var_a4, s32 *, 0x30) = (s32) M2C_FIELD(arg0, s32 *, 0x184);
    M2C_FIELD(var_a4, s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x14C);
    M2C_FIELD(var_a4, s32 *, 0x38) = (s32) M2C_FIELD(arg0, s32 *, 0x198);
    M2C_FIELD(var_a4, s32 *, 0x3C) = (s32) M2C_FIELD(arg0, s32 *, 0x188);
    M2C_FIELD(var_a4, s32 *, 0x40) = (s32) M2C_FIELD(arg0, s32 *, 0x194);
    M2C_FIELD(var_a4, s32 *, 0x44) = (s32) M2C_FIELD(arg0, s32 *, 0x19C);
    M2C_FIELD(var_a4, s32 *, 0x48) = (s32) M2C_FIELD(arg0, s32 *, 0x1A0);
    M2C_FIELD(var_a4, s32 *, 0x4C) = (s32) M2C_FIELD(arg0, s32 *, 0x1A4);
    M2C_FIELD(var_a4, s32 *, 0x50) = (s32) M2C_FIELD(arg0, s32 *, 0x1A8);
    M2C_FIELD(var_a4, s32 *, 0x54) = (s32) M2C_FIELD(arg0, s32 *, 0x1AC);
    M2C_FIELD(var_a4, s32 *, 0x58) = (s32) M2C_FIELD(arg0, s32 *, 0x1B0);
    M2C_FIELD(var_a4, s32 *, 0x5C) = (s32) M2C_FIELD(arg0, s32 *, 0x158);
    M2C_FIELD(var_a4, s32 *, 0x60) = (s32) M2C_FIELD(arg0, s32 *, 0x15C);
    return var_t1;
}
