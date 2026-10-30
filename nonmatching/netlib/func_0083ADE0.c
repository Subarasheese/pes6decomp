/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00827450(s32);                             /* extern */
M2C_UNK func_0082B4C0(s32);                         /* extern */
s32 func_00862110(s32, s32);                        /* extern */
s32 func_008765B0(s32, s64);                        /* extern */
s32 func_00D0BAF0();                                /* extern */
extern char D_008A5CB0[];
extern char D_008AA100[];
extern char D_008AAF58[];
extern char D_008AAFD0[];

s32 func_0083ADE0(s32 arg0, s64 arg1, s64 arg2) {
    M2C_UNK *var_a0;
    s32 temp_s0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_4;
    s32 temp_v1_6;
    s32 temp_v1_8;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_4;
    s32 var_v1;
    s64 var_v0_3;
    u8 *temp_v1_3;
    u8 *temp_v1_5;
    u8 *temp_v1_7;
    u8 *temp_v1_9;

    temp_s0 = func_00D0BAF0();
    func_0082B4C0(arg0);
    if (func_00D0BAF0() == 0) {
        var_v0_3 = 0;
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
            var_v0_3 = 0;
        } else {
            var_v0_3 = (s64) (1 << 0x38) >> 0x38;
        }
    }
    if (((s64) (var_v0_3 << 0x38) >> 0x38) != 1) {
        if (((s64) (arg1 << 0x38) >> 0x38) == 0) {
            temp_v1_2 = arg2 & 0xFFFF;
            if (temp_v1_2 >= 0x28) {
                return 4;
            }
            temp_v1_3 = ((void *)D_008AAFD0) + temp_v1_2;
            *temp_v1_3 += 1;
            return 4;
        }
        goto block_37;
    }
    if (((s64) (arg1 << 0x38) >> 0x38) == 1) {
        temp_v1_4 = arg2 & 0xFFFF;
        if (temp_v1_4 >= 0x28) {
            return 4;
        }
        temp_v1_5 = ((void *)D_008AAFD0) + temp_v1_4;
        *temp_v1_5 += 1;
        return 4;
    }
block_37:
    if (temp_s0 == 0) {
        return 2;
    }
    if (arg0 < 0) {
        return 2;
    }
    if (arg0 < 9) {
        if (func_00862110(temp_s0, arg0) != 1) {
            if (func_00827450(arg0) != 1) {
                return 2;
            }
            return 3;
        }
        if ((*(s8 *)D_008AA100) == 4) {
            var_v0_4 = func_008765B0(temp_s0 + (arg0 * 0x24), -1);
        } else {
            var_v0_4 = func_008765B0(temp_s0 + (arg0 * 0x24), (s64) (arg2 << 0x38) >> 0x38);
        }
        if (var_v0_4 == 0) {
            if ((*(s8 *)D_008AA100) != 4) {
                temp_v1_6 = arg2 & 0xFFFF;
                if (temp_v1_6 < 0x28) {
                    temp_v1_7 = ((void *)D_008AAF58) + temp_v1_6;
                    *temp_v1_7 += 1;
                }
            }
            if (func_00827450(arg0) != 1) {
                var_v0_2 = 4;
            } else {
                var_v0_2 = 3;
            }
            return var_v0_2;
        }
        if ((*(s8 *)D_008AA100) != 4) {
            temp_v1_8 = arg2 & 0xFFFF;
            if (temp_v1_8 < 0x28) {
                temp_v1_9 = ((void *)D_008AAF58) + temp_v1_8;
                *temp_v1_9 += 1;
            }
        }
        if (func_00827450(arg0) != 1) {
            var_v0 = 2;
        } else {
            var_v0 = 3;
        }
        return var_v0;
    }
    return 2;
}
