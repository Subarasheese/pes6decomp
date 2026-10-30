/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00221500(u16);                             /* extern */
s32 func_00BC4DD0(u16, s32, M2C_UNK);               /* extern */
extern void *D_003E7DC0;
extern void *D_003E7DC8;
extern void *D_003E7DCC;

void func_00BDBE60(void) {
    s32 temp_a0;
    s32 var_a0;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_s0_5;
    s32 var_s0_6;
    s32 var_s0_7;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    s32 var_v1_6;
    s32 var_v1_7;
    s32 var_v1_8;

    var_s0 = 0;
    M2C_FIELD(D_003E7DC0, s32 *, 0xFC) = func_00221500(M2C_FIELD(D_003E7DC0, u16 *, 0xFA));
loop_1:
    if ((func_00BC4DD0(M2C_FIELD(D_003E7DC0, u16 *, 0xFA), var_s0, 0) & 0xFF) == 0xFF) {
        var_s0 = (var_s0 + 1) & 0xFFFF;
        if (var_s0 >= 0x39) {
            var_v0 = 0;
        } else {
            goto loop_1;
        }
    } else {
        var_v0 = 1;
    }
    if (var_v0 == 0) {
        var_s0_2 = 0x39;
loop_11:
        if ((func_00BC4DD0(M2C_FIELD(D_003E7DC0, u16 *, 0xFA), var_s0_2, 0) & 0xFF) == 0xFF) {
            var_s0_2 = (var_s0_2 + 1) & 0xFFFF;
            if (var_s0_2 >= 0x40) {
                var_v0_2 = 0;
            } else {
                goto loop_11;
            }
        } else {
            var_v0_2 = 1;
        }
        if (var_v0_2 == 0) {
            var_v1 = 0;
        } else {
            goto block_20;
        }
    } else {
block_20:
        var_v1 = 1;
    }
    var_s0_3 = 0x40;
    M2C_FIELD(D_003E7DC8, s32 *, 8) = var_v1;
loop_22:
    if ((func_00BC4DD0(M2C_FIELD(D_003E7DC0, u16 *, 0xFA), var_s0_3, 0) & 0xFF) == 0xFF) {
        var_s0_3 = (var_s0_3 + 1) & 0xFFFF;
        if (var_s0_3 >= 0xCC) {
            var_v1_2 = 0;
        } else {
            goto loop_22;
        }
    } else {
        var_v1_2 = 1;
    }
    M2C_FIELD(D_003E7DC8, s32 *, 0xC) = var_v1_2;
    if ((u32) (M2C_FIELD(D_003E7DC0, u16 *, 0xF8) - 0x11C) >= 2U) {
        M2C_FIELD(D_003E7DC8, s32 *, 0x10) = 0;
    } else {
        M2C_FIELD(D_003E7DC8, s32 *, 0x10) = (s32) ((M2C_FIELD(D_003E7DC0, s32 *, 0xFC) | (M2C_FIELD(D_003E7DC8, s32 *, 8) | M2C_FIELD(D_003E7DC8, s32 *, 0xC))) == 0);
    }
    var_s0_4 = 0;
loop_34:
    if ((func_00BC4DD0(M2C_FIELD(D_003E7DC0, u16 *, 0xFA), var_s0_4, 0) & 0xFF) == 0xFF) {
        var_s0_4 = (var_s0_4 + 1) & 0xFFFF;
        if (var_s0_4 >= 0x39) {
            var_v1_3 = 0;
        } else {
            goto loop_34;
        }
    } else {
        var_v1_3 = 1;
    }
    if (var_v1_3 == 0) {
        var_s0_5 = 0x39;
loop_44:
        if ((func_00BC4DD0(M2C_FIELD(D_003E7DC0, u16 *, 0xFA), var_s0_5, 0) & 0xFF) == 0xFF) {
            var_s0_5 = (var_s0_5 + 1) & 0xFFFF;
            if (var_s0_5 >= 0x40) {
                var_v1_4 = 0;
            } else {
                goto loop_44;
            }
        } else {
            var_v1_4 = 1;
        }
        if (var_v1_4 == 0) {
            var_v1_5 = 0;
        } else {
            goto block_53;
        }
    } else {
block_53:
        var_v1_5 = 1;
    }
    if (var_v1_5 == 0) {
        var_s0_6 = 0;
loop_58:
        if ((func_00BC4DD0(M2C_FIELD(D_003E7DC0, u16 *, 0xFA), var_s0_6, 1) & 0xFF) == 0xFF) {
            var_s0_6 = (var_s0_6 + 1) & 0xFFFF;
            if (var_s0_6 >= 0x39) {
                var_v1_6 = 0;
            } else {
                goto loop_58;
            }
        } else {
            var_v1_6 = 1;
        }
        if (var_v1_6 == 0) {
            var_s0_7 = 0x39;
loop_68:
            if ((func_00BC4DD0(M2C_FIELD(D_003E7DC0, u16 *, 0xFA), var_s0_7, 1) & 0xFF) == 0xFF) {
                var_s0_7 = (var_s0_7 + 1) & 0xFFFF;
                if (var_s0_7 >= 0x40) {
                    var_v1_7 = 0;
                } else {
                    goto loop_68;
                }
            } else {
                var_v1_7 = 1;
            }
            if (var_v1_7 == 0) {
                var_v1_8 = 0;
            } else {
                goto block_77;
            }
        } else {
block_77:
            var_v1_8 = 1;
        }
        if (var_v1_8 == 0) {
            var_a0 = 1;
        } else {
            goto block_81;
        }
    } else {
block_81:
        var_a0 = 0;
    }
    M2C_FIELD(D_003E7DCC, s32 *, 0x4C) = var_a0;
    temp_a0 = M2C_FIELD(M2C_FIELD(D_003E7DC0, void **, 0x70), u16 *, 0x70) & 0x1FF;
    if ((temp_a0 < 0) || (temp_a0 >= 0x39)) {
        if (temp_a0 != 0x69) {
            M2C_FIELD(D_003E7DC8, s32 *, 0x14) = 0;
            return;
        }
        goto block_87;
    }
block_87:
    M2C_FIELD(D_003E7DC8, s32 *, 0x14) = (s32) (M2C_FIELD(D_003E7DC8, s32 *, 8) == 0);
}
