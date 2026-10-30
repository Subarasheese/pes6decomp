/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00291DD0(s32, s32);
extern s32 func_00292BF0(void);
extern s32 func_00292B90(void);
extern u8 func_00292AA0(void);
extern u8 func_00292800(s32);
extern u8 func_00292B10(void);
s32 func_00292BB0();                                /* extern */
s32 func_009A0270();                                /* extern */
s32 func_00C2EB10(void *, u8);                      /* extern */
extern char D_00591F13[];

s32 func_00C2E7B0(u8 *arg0, void *arg1) {
    s32 temp_s0;
    s32 temp_s1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    u8 temp_s2;
    u8 temp_v1;
    u8 var_s2;

    temp_s2 = *arg0;
    temp_s1 = 0x5A - (func_009A0270() & 0xFF);
    temp_s0 = func_00C2EB10(arg1, temp_s2);
    if (((*(u8 *)D_00591F13) != 0) && (temp_s0 >= 0)) {
        return 0;
    }
    if (temp_s0 != 0x7FFF) {
        var_s2 = func_00291DD0((s32) temp_s2, func_00292800((s32) temp_s2) & 0xFF);
        if (func_00292B90() != 0) {
            if (func_00292B10() == 0) {
                var_s2 = 1;
            } else if (func_00292AA0() != 0) {
                var_s2 = 1;
            }
        }
        if (temp_s0 < 5) {
            if (temp_s0 < 3) {
                if (temp_s0 >= 2) {
                    if (temp_s1 >= 0x14) {
                        if (temp_s1 < 0x26) {
                            var_v0_5 = 1;
                        } else {
                            var_v0_5 = 0;
                        }
                        return var_v0_5;
                    }
                    if (((s32) M2C_FIELD(arg1, u8 *, 0) < 2) && (var_s2 == 0) && (func_00292BF0() == 0)) {
                        return 1;
                    }
                    return (func_00292BB0() == 0) ? 1 : 3;
                }
                if (temp_s0 > 0) {
                    if (temp_s1 >= 0x1F) {
                        return 0;
                    }
                    if (temp_s1 < 0xF) {
                        if (var_s2 != 0) {
                            goto block_88;
                        }
                        if (func_00292BF0() == 0) {
                            goto block_91;
                        }
block_88:
                        if ((s32) M2C_FIELD(arg1, u8 *, 0) >= 2) {
                            return 3;
                        }
                        goto block_91;
                    }
block_91:
                    return 1;
                }
                if (temp_s0 < 0) {
                    if (temp_s0 < -3) {
                        if ((s32) M2C_FIELD(arg1, u8 *, 0) < 4) {
                            return 0;
                        }
                        return 1;
                    }
                    return 0;
                }
                if ((s32) M2C_FIELD(arg1, u8 *, 0) >= 3) {
                    if ((temp_s1 >= 0xA) && (temp_s1 < 0x2E)) {
                        return 1;
                    }
                    goto block_38;
                }
block_38:
                temp_v1 = M2C_FIELD(arg1, u8 *, 1);
                if ((s32) temp_v1 < 4) {
                    if (temp_s1 >= 0xA) {
                        return 0;
                    }
                    if ((s32) temp_v1 < 3) {
                        var_v0_4 = 2;
                    } else {
                        var_v0_4 = 4;
                    }
                    return var_v0_4;
                }
                if (temp_s1 >= 0xA) {
                    var_v0_3 = 2;
                } else {
                    var_v0_3 = 4;
                }
                return var_v0_3;
            }
            if ((var_s2 == 0) && ((s32) M2C_FIELD(arg1, u8 *, 0) < 4) && (func_00292BF0() == 0)) {
                if ((temp_s1 < 0xF) && ((s32) M2C_FIELD(arg1, u8 *, 0) >= 2) && (func_00292BB0() != 0)) {
                    return 3;
                }
                return 1;
            }
            if (temp_s0 != 3) {
                var_v0_6 = 0x2D;
            } else {
                var_v0_6 = 0x23;
            }
            if (temp_s1 < var_v0_6) {
                return 3;
            }
            return 1;
        }
        if (((s32) M2C_FIELD(arg1, u8 *, 1) >= 3) && ((s32) M2C_FIELD(arg1, u8 *, 0) < 2) && (var_s2 == 0) && (func_00292BF0() == 0)) {
            return 2;
        }
        if (temp_s1 >= 0x3C) {
            var_v0_2 = 1;
        } else {
            var_v0_2 = 3;
        }
        return var_v0_2;
    }
    if (temp_s1 >= 0xF) {
        var_v0 = 1;
    } else {
        var_v0 = 3;
    }
    return var_v0;
}
