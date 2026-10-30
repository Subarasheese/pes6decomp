/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00110E58(unsigned long long, void *, void *);
extern void func_00151FC0(s32, s32);
u64 func_001105C8(s8);                              /* extern */
s32 func_00151D80(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
s32 func_00825640(M2C_UNK, s32 *);                  /* extern */
M2C_UNK func_00842670(s8);                          /* extern */
M2C_UNK func_00842680(s8);                          /* extern */
M2C_UNK func_00842690(s8);                          /* extern */
s32 func_00862110(s32, M2C_UNK);                    /* extern */
s32 func_00D0BAF0();                                /* extern */
extern char D_008A5CB0[];

s32 func_008415A0(s8 arg0, s8 arg1, s8 arg2, s8 arg3, s8 arg4, s8 arg5, s8 arg6, s8 arg7, s8 arg_sp0, s8 arg_sp8, s8 arg_sp10, s8 arg_sp18) {
    s32 spA0;
    s32 spA4;
    s8 spA8;
    s8 spA9;
    s8 spAA;
    s8 spAB;
    s8 spAC;
    s8 spAD;
    s8 spAE;
    s8 spAF;
    s8 spB0;
    s8 spB1;
    s8 spB2;
    s8 spB3;
    s8 spB4;
    s8 spB5;
    s8 spB6;
    u32 spE8;
    s32 spEC;
    M2C_UNK *var_a0;
    M2C_UNK var_s5;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_v1;
    s64 var_v0;
    s8 temp_s0;
    s8 temp_s2;
    s8 var_s1;

    temp_v0 = func_00D0BAF0();
    if (temp_v0 == 0) {
        return 2;
    }
    if (func_00D0BAF0() == 0) {
        var_v0 = 0;
    } else {
        if (func_00D0BAF0() == 0) {
            var_a0 = NULL;
        } else {
            var_a0 = ((void *)D_008A5CB0);
        }
        if (var_a0 != NULL) {
            temp_v1 = M2C_FIELD(var_a0, s32 *, 0x230);
            if (temp_v1 < 0) {
                var_v1 = 0;
            } else if (temp_v1 < 4) {
                if (temp_v1 != M2C_FIELD(var_a0, s32 *, 0x22C)) {
                    var_v1 = 0;
                } else {
                    var_v1 = 1;
                }
            } else {
                var_v1 = 0;
            }
        } else {
            var_v1 = 0;
        }
        if (var_v1 != 1) {
            var_v0 = 0;
        } else {
            var_v0 = (s64) (1 << 0x38) >> 0x38;
        }
    }
    if (((s64) (var_v0 << 0x38) >> 0x38) == 1) {
        if (func_00862110(temp_v0, 3) != 1) {
            if (func_00862110(temp_v0, 4) != 1) {
                if (func_00862110(temp_v0, 5) != 1) {
                    return 2;
                }
                var_s5 = 5;
                goto block_42;
            }
            var_s5 = 4;
            goto block_42;
        }
        var_s5 = 3;
block_42:
        func_001C48E8(&spA0, 0, 0x48);
        spA0 = 0x103;
        spA4 = 0xF;
        spB0 = arg_sp0;
        spB1 = arg_sp8;
        spB2 = arg_sp10;
        spA8 = arg0;
        spA9 = arg1;
        spB3 = arg_sp18;
        spAA = arg2;
        spAB = arg3;
        spAC = arg4;
        spAD = arg5;
        spAE = arg6;
        spAF = arg7;
        func_00110E58(func_001105C8(arg_sp0), &spEC, &spE8);
        func_00151FC0(0, (spE8 / 1000U) + (spEC * 0x3E8));
        temp_s2 = func_00151D80(0, 0xFF) & 0xFF;
        var_s1 = func_00151D80(0, 0xFF) & 0xFF;
        if (var_s1 == 0) {
            var_s1 = (var_s1 + 1) & 0xFF;
        }
        temp_s0 = func_00151D80(0, 0xFF) & 0xFF;
        func_00842690(temp_s2);
        func_00842680(var_s1);
        func_00842670(temp_s0);
        spB4 = temp_s2;
        spB5 = var_s1;
        spB6 = temp_s0;
        return func_00825640(var_s5, &spA0);
    }
    return 4;
}
