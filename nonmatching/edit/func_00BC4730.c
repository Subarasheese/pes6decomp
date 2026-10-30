/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00220A70(M2C_UNK);                     /* extern */
s32 func_00221500(s32);                             /* extern */
s32 func_002218E0(s32);                             /* extern */
s32 func_00221D10(s32, s32, s32);                   /* extern */
void *Pes6Player_GetParams(s32);                           /* extern */
s32 func_00BC6700(s32, s32);                        /* extern */
extern char D_00510FD0[];

void func_00BC4730(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_s0_5;
    s32 var_s0_6;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    void *temp_v0;

    var_s0 = 0;
loop_1:
    if (func_002218E0(var_s0 & 0xFFFF) == 0) {
        var_s0 += 1;
        if (var_s0 >= 0x12B1) {
            var_s0_2 = 0;
loop_7:
            temp_v0 = Pes6Player_GetParams(var_s0_2 & 0xFFFF);
            if (((u64) ((s64) M2C_FIELD(temp_v0, u8 *, 0x23) << 0x3B) >> 0x3F) == 0) {
                if (((u64) ((s64) M2C_FIELD(temp_v0, u8 *, 0x3D) << 0x39) >> 0x3F) == 0) {
                    var_s0_2 += 1;
                    if (var_s0_2 >= 0x12B0) {
                        var_s1 = 0;
loop_15:
                        var_s2 = 0;
loop_16:
                        temp_a0 = var_s1 & 0xFFFF;
                        if ((temp_a0 >= 0x40) && (temp_a0 < 0xCC)) {
                            var_v1 = 3;
                        } else if (temp_a0 == 0x126) {
                            var_v1 = 3;
                        } else if ((temp_a0 >= 0xDD) && (temp_a0 < 0xFE)) {
                            var_v1 = 3;
                        } else {
                            var_v1 = 0;
                        }
                        if (var_v1 != 3) {
                            var_v0 = 0;
                        } else if ((*(s32 *)D_00510FD0) == 6) {
                            var_v0 = 1;
                        } else {
                            var_v0 = 0;
                        }
                        temp_s0 = func_00221D10(temp_a0, var_s2 & 0xFF, var_v0 & 0xFF) & 0xFF;
                        var_a0 = var_s1 & 0xFFFF;
                        if ((var_a0 >= 0x40) && (var_a0 < 0xCC)) {
                            var_v1_2 = 3;
                        } else if (var_a0 == 0x126) {
                            var_v1_2 = 3;
                        } else if ((var_a0 >= 0xDD) && (var_a0 < 0xFE)) {
                            var_v1_2 = 3;
                        } else {
                            var_v1_2 = 0;
                        }
                        if (var_v1_2 != 3) {
                            goto block_52;
                        }
                        if ((*(s32 *)D_00510FD0) == 6) {
                            var_v0_2 = 2;
                        } else {
                            var_a0 = 0x112;
block_52:
                            var_v0_2 = 1;
                        }
                        if ((temp_s0 & 0xFF) == (func_00221D10(var_a0, var_s2 & 0xFF, var_v0_2 & 0xFF) & 0xFF)) {
                            var_s2 += 1;
                            if (var_s2 >= 0x17) {
                                var_s1 += 1;
                                if (var_s1 >= 0x40) {
                                    var_s3 = 0;
loop_60:
                                    var_s2_2 = 0;
loop_61:
                                    temp_s1 = var_s3 + 0x40;
                                    temp_a0_2 = temp_s1 & 0xFFFF;
                                    if ((temp_a0_2 >= 0x40) && (temp_a0_2 < 0xCC)) {
                                        var_v1_3 = 3;
                                    } else if (temp_a0_2 == 0x126) {
                                        var_v1_3 = 3;
                                    } else if ((temp_a0_2 >= 0xDD) && (temp_a0_2 < 0xFE)) {
                                        var_v1_3 = 3;
                                    } else {
                                        var_v1_3 = 0;
                                    }
                                    if (var_v1_3 != 3) {
                                        var_v0_3 = 0;
                                    } else if ((*(s32 *)D_00510FD0) == 6) {
                                        var_v0_3 = 1;
                                    } else {
                                        var_v0_3 = 0;
                                    }
                                    temp_s0_2 = func_00221D10(temp_a0_2, var_s2_2 & 0xFF, var_v0_3 & 0xFF) & 0xFF;
                                    var_a0_2 = temp_s1 & 0xFFFF;
                                    if ((var_a0_2 >= 0x40) && (var_a0_2 < 0xCC)) {
                                        var_v1_4 = 3;
                                    } else if (var_a0_2 == 0x126) {
                                        var_v1_4 = 3;
                                    } else if ((var_a0_2 >= 0xDD) && (var_a0_2 < 0xFE)) {
                                        var_v1_4 = 3;
                                    } else {
                                        var_v1_4 = 0;
                                    }
                                    if (var_v1_4 != 3) {
                                        goto block_96;
                                    }
                                    if ((*(s32 *)D_00510FD0) == 6) {
                                        var_v0_4 = 2;
                                    } else {
                                        var_a0_2 = 0x112;
block_96:
                                        var_v0_4 = 1;
                                    }
                                    if ((temp_s0_2 & 0xFF) == (func_00221D10(var_a0_2, var_s2_2 & 0xFF, var_v0_4 & 0xFF) & 0xFF)) {
                                        var_s2_2 += 1;
                                        if (var_s2_2 >= 0x20) {
                                            var_s3 += 1;
                                            if (var_s3 >= 0x8C) {
                                                var_s1_2 = 0;
loop_104:
                                                var_s0_3 = 0;
loop_105:
                                                if (func_00BC6700(var_s1_2 & 0xFFFF, var_s0_3 & 0xFF) != 0) {
                                                    var_s0_3 += 1;
                                                    if (var_s0_3 >= 0x17) {
                                                        var_s1_2 += 1;
                                                        if (var_s1_2 >= 0x40) {
                                                            var_s0_4 = 0;
loop_112:
                                                            if (func_00BC6700(0x11C, var_s0_4 & 0xFF) != 0) {
                                                                var_s0_4 += 1;
                                                                if (var_s0_4 >= 0xB8) {
                                                                    var_s1_3 = 0;
loop_118:
                                                                    var_s0_5 = 0;
loop_119:
                                                                    if (func_00BC6700((var_s1_3 + 0x40) & 0xFFFF, var_s0_5 & 0xFF) != 0) {
                                                                        var_s0_5 += 1;
                                                                        if (var_s0_5 >= 0x20) {
                                                                            var_s1_3 += 1;
                                                                            if (var_s1_3 >= 0x8C) {
                                                                                var_s0_6 = 0;
loop_126:
                                                                                if (func_00221500((var_s0_6 + 0x7FFF + 1) & 0xFFFF) != 0) {
                                                                                    var_s0_6 += 1;
                                                                                    if (var_s0_6 >= 0xB8) {
                                                                                        func_00220A70(0);
                                                                                        return;
                                                                                    }
                                                                                    goto loop_126;
                                                                                }
                                                                                func_00220A70(1);
                                                                                return;
                                                                            }
                                                                            goto loop_118;
                                                                        }
                                                                        goto loop_119;
                                                                    }
                                                                    func_00220A70(1);
                                                                    return;
                                                                }
                                                                goto loop_112;
                                                            }
                                                            func_00220A70(1);
                                                            return;
                                                        }
                                                        goto loop_104;
                                                    }
                                                    goto loop_105;
                                                }
                                                func_00220A70(1);
                                                return;
                                            }
                                            goto loop_60;
                                        }
                                        goto loop_61;
                                    }
                                    func_00220A70(1);
                                    return;
                                }
                                goto loop_15;
                            }
                            goto loop_16;
                        }
                        func_00220A70(1);
                        return;
                    }
                    goto loop_7;
                }
                goto block_12;
            }
block_12:
            func_00220A70(1);
            return;
        }
        goto loop_1;
    }
    func_00220A70(1);
}
