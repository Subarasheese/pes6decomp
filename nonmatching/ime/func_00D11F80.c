/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0081E450();                                /* extern */
s32 func_0081E490();                                /* extern */
s32 func_0081E4D0();                                /* extern */
s32 func_0081E510();                                /* extern */
s32 func_0081E550(M2C_UNK);                         /* extern */
M2C_UNK func_00D11950(void *, s32, s32);            /* extern */
M2C_UNK func_00D11A00(void *, s32, s32);            /* extern */
M2C_UNK func_00D11AB0(void *, s32);                 /* extern */
M2C_UNK func_00D11BE0(void *, s32, M2C_UNK);        /* extern */

s32 func_00D11F80(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_v0;
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s64 var_s4;

    var_s4 = 0;
    var_s0 = 0;
    if (arg0 == NULL) {
        return 2;
    }
    temp_s3 = func_0081E510() & 0xFF;
    temp_s2 = func_0081E4D0() & 0xFF;
    temp_s1 = func_0081E490();
    temp_v0 = func_0081E450();
    if (M2C_FIELD(arg0, s8 *, 0xDB4) != 0) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0xDA8);
        switch (temp_a0) {                          /* irregular */
        case 2:
            break;
        case 4:
        case 3:
            temp_a0_2 = temp_s3 & 0xFF;
            if ((temp_a0_2 == 0) && !(temp_s2 & 0xFF)) {
                if (func_0081E550(0x10) == 0) {
                    if (func_0081E550(0x40) != 0) {
                        if (arg0 != NULL) {
                            temp_s0 = M2C_FIELD(arg0, s32 *, 0xD9C);
                            if (arg0 != NULL) {
                                if (arg0 != NULL) {
                                    func_00D11BE0(arg0, temp_s0 - 1, 5);
                                }
                                func_00D11AB0(arg0, M2C_FIELD(arg0, s32 *, 0xD9C) - 1);
                            }
                            if (arg0 != NULL) {
                                var_v0 = M2C_FIELD(arg0, s32 *, 0xDB8);
                            } else {
                                var_v0 = 0;
                            }
                            M2C_FIELD(arg0, s32 *, 0xDB8) = var_v0;
                            if (temp_s0 != M2C_FIELD(arg0, s32 *, 0xD9C)) {
                                func_0026E840(0x8400F802);
                            }
                            var_s0 = 0;
                        } else {
                            var_s0 = 2;
                        }
                        goto block_71;
                    }
                } else {
                    if (arg0 != NULL) {
                        temp_s0_2 = M2C_FIELD(arg0, s32 *, 0xD9C);
                        if (arg0 != NULL) {
                            if (arg0 != NULL) {
                                func_00D11BE0(arg0, temp_s0_2 + 1, 5);
                            }
                            func_00D11AB0(arg0, M2C_FIELD(arg0, s32 *, 0xD9C) + 1);
                        }
                        if (arg0 != NULL) {
                            var_v0_2 = M2C_FIELD(arg0, s32 *, 0xDB8);
                        } else {
                            var_v0_2 = 0;
                        }
                        M2C_FIELD(arg0, s32 *, 0xDB8) = var_v0_2;
                        if (temp_s0_2 != M2C_FIELD(arg0, s32 *, 0xD9C)) {
                            func_0026E840(0x8400F802);
                        }
                        var_s0 = 0;
                    } else {
                        var_s0 = 2;
                    }
                    goto block_71;
                }
            } else if (temp_a0_2 == 0) {
                if (temp_s2 & 0xFF) {
                    if (arg0 != NULL) {
                        func_00D11A00(arg0, temp_s2, temp_v0);
                        if (arg0 != NULL) {
                            var_v0_3 = M2C_FIELD(arg0, s32 *, 0xDB8);
                        } else {
                            var_v0_3 = 0;
                        }
                        M2C_FIELD(arg0, s32 *, 0xDB8) = var_v0_3;
                        var_s0 = 0;
                    } else {
                        var_s0 = 2;
                    }
                    goto block_71;
                }
            } else {
                if (arg0 != NULL) {
                    func_00D11950(arg0, temp_s3, temp_s1);
                    if (arg0 != NULL) {
                        var_v0_4 = M2C_FIELD(arg0, s32 *, 0xDB8);
                    } else {
                        var_v0_4 = 0;
                    }
                    M2C_FIELD(arg0, s32 *, 0xDB8) = var_v0_4;
                    var_s0 = 0;
                } else {
                    var_s0 = 2;
                }
block_71:
                var_s4 = 1;
            }
            break;
        }
        if (((s64) (var_s4 << 0x38) >> 0x38) == 1) {
            if (arg0 != NULL) {
                M2C_FIELD(arg0, s8 *, 0xDB5) = 1;
            }
        } else if (arg0 != NULL) {
            M2C_FIELD(arg0, s8 *, 0xDB5) = 0;
        }
        return var_s0;
    }
    M2C_FIELD(arg0, s8 *, 0xDB5) = 0;
    return 0;
}
