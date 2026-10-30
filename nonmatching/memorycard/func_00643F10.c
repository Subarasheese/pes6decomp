/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_0062E530(u32 *, u32);                  /* extern */
s32 func_0063A830();                                /* extern */

void func_00643F10(s32 arg0, void *arg1) {
    u32 sp6C;                                       /* compiler-managed */
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_v1;
    s32 var_s1;
    u32 temp_a1;
    u32 temp_s0;
    u8 var_s2;

    var_s2 = M2C_FIELD(arg1, u8 *, 9);
    var_s1 = (s32) var_s2 % 4;
    temp_s0 = (u32) (var_s2 & 0xFF) >> 2;
    sp6C = temp_s0;
    temp_v1 = func_0063A830() == 0;
    switch (arg0) {                                 /* irregular */
    case 0x1:
    case 0x10:
        if (temp_v1 != 1) {
            temp_a0 = sp6C - 1;
            sp6C = temp_a0;
            if (temp_a0 < 0) {
                sp6C = 0;
                var_s2 = 0x24;
            }
        } else if (var_s2 != 0x24) {
            if ((s32) var_s2 >= 4) {
                var_s2 = ((u32) ((var_s2 + 0x20) & 0xFF) % 36U) & 0xFF;
            } else {
                var_s2 = 0x24 & 0xFF;
            }
        } else {
            var_s2 = 0x23;
        }
        break;
    case 0x2:
    case 0x20:
        if (temp_v1 != 1) {
            if (var_s2 != 0x24) {
                temp_a0_2 = sp6C + 1;
                sp6C = temp_a0_2;
                if (temp_a0_2 >= 9) {
                    sp6C = 8;
                }
            } else {
                sp6C = 0;
                var_s1 = 0;
                var_s2 = 0;
            }
        } else if (var_s2 != 0x24) {
            temp_a0_3 = var_s2 + 4;
            if (temp_a0_3 < 0x24) {
                var_s2 = ((u32) (temp_a0_3 & 0xFF) % 36U) & 0xFF;
            } else {
                var_s2 = 0x24 & 0xFF;
            }
        } else {
            var_s2 = 0;
        }
        break;
    case 0x4:
    case 0x40:
        if (temp_v1 != 1) {
            if (var_s2 != 0x24) {
                var_s1 -= 1;
                if (var_s1 < 0) {
                    var_s1 = 3;
                }
            }
        } else if (var_s2 != 0x24) {
            var_s2 = (((var_s2 + 3) & 0xFF & 3) + ((temp_s0 * 4) & 0xFF)) & 0xFF;
        }
        break;
    case 0x8:
    case 0x80:
        if (temp_v1 != 1) {
            if (var_s2 != 0x24) {
                var_s1 += 1;
                if (var_s1 >= 4) {
                    var_s1 = 0;
                }
            }
        } else if (var_s2 != 0x24) {
            var_s2 = (((var_s2 + 1) & 0xFF & 3) + ((temp_s0 * 4) & 0xFF)) & 0xFF;
        }
        break;
    }
    temp_a1 = var_s2 & 0xFF;
    if (temp_a1 != 0x24) {
        if (temp_v1 != 1) {
            func_0062E530(&sp6C, temp_a1);
            M2C_FIELD(arg1, s8 *, 0x54) = (s8) sp6C;
            var_s2 = (var_s1 + (sp6C * 4)) & 0xFF;
        } else {
            M2C_FIELD(arg1, s8 *, 0x54) = (s8) (temp_a1 >> 2);
        }
    }
    if (M2C_FIELD(arg1, u8 *, 9) != (var_s2 & 0xFF)) {
        func_0026E840(0x8400F802);
    }
    M2C_FIELD(arg1, u8 *, 9) = var_s2;
}
