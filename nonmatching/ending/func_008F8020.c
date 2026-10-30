/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_008F86F0(s32);
s32 func_008F8810(s32);                             /* extern */
s32 func_008FCDC0(M2C_UNK);                         /* extern */
s32 func_008FCE70(M2C_UNK);                         /* extern */
s32 func_008FCF00(M2C_UNK);                         /* extern */
extern char D_00908380[];
extern char D_009083B0[];
extern char D_009083B1[];
extern char D_009083B2[];
extern char D_009083B4[];
extern char D_009083B8[];
extern char D_009083BC[];
extern char D_009083C0[];

s32 func_008F8020(void) {
    s32 temp_a0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s1_2;
    u8 var_s0_3;
    void *var_s2;

    switch ((*(u8 *)D_009083B1)) {                           /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        var_s0 = 0 | 0x1E000;
        if ((var_s0 & 0x8000) && (func_008FCE70(0) == 0)) {
            var_s0 &= 0xFFFF7FFF;
        }
        if ((var_s0 & 0x10000) && (func_008FCDC0(0) == 0)) {
            var_s0 &= 0xFFFEFFFF;
        }
        if ((var_s0 & 0x2000) && (func_008FCF00(0) == 0)) {
            var_s0 &= ~0x2000;
        }
        (*(s32 *)D_009083C0) = var_s0;
        (*(u8 *)D_009083B1) += 1;
        /* fallthrough */
    case 1:                                         /* switch 1 */
        (*(s32 *)D_009083B8) = 0;
        temp_v1 = (*(s32 *)D_009083C0) & ~(*(s32 *)D_009083BC);
        (*(s32 *)D_009083C0) = temp_v1;
        if (temp_v1 != 0) {
            var_s1 = 0;
loop_18:
            var_s0_2 = 1 << var_s1;
            if ((*(s32 *)D_009083C0) & var_s0_2) {
                if (var_s0_2 & 0x3F) {
                    var_s0_2 = (*(s32 *)D_009083C0) & 0x3F;
                }
                temp_v1_2 = func_008F8810(var_s0_2) & 0xFF;
                switch (temp_v1_2) {                /* switch 2; irregular */
                case 1:                             /* switch 2 */
                    break;
                case 0:                             /* switch 2 */
                    (*(s32 *)D_009083B8) = var_s0_2;
                    (*(s32 *)D_009083C0) &= ~var_s0_2;
                    break;
                case 2:                             /* switch 2 */
                    (*(s32 *)D_009083BC) |= var_s0_2;
                    (*(s32 *)D_009083C0) &= ~var_s0_2;
                    break;
                }
            }
            if ((*(s32 *)D_009083B8) == 0) {
                var_s1 += 1;
                if (var_s1 >= 0x11) {

                } else {
                    goto loop_18;
                }
            }
        } else {
            (*(u8 *)D_009083B0) |= 1;
        }
        var_s1_2 = 0;
        if ((*(s32 *)D_009083B8) == 0) {
            var_s0_3 = (*(u8 *)D_009083B4);
            if ((s32) var_s0_3 < 0x11) {
                var_s2 = ((void *)D_00908380) + (var_s0_3 * 4);
loop_36:
                if (var_s1_2 == 0) {
                    (*(u8 *)D_009083B4) = var_s0_3 + 1;
                }
                temp_a0 = M2C_FIELD(var_s2, s32 *, 0x44);
                if (temp_a0 != 0) {
                    if (temp_a0 & (*(s32 *)D_009083BC)) {
                        M2C_FIELD(var_s2, s32 *, 0x44) = 0;
                        goto block_51;
                    }
                    temp_v1_3 = func_008F8810(temp_a0) & 0xFF;
                    switch (temp_v1_3) {            /* switch 3; irregular */
                    case 0:                         /* switch 3 */
                        (*(s32 *)D_009083B8) = M2C_FIELD(var_s2, s32 *, 0x44);
                        M2C_FIELD(var_s2, s32 *, 0x44) = 0;
                        break;
                    case 1:                         /* switch 3 */
                        var_s1_2 = 1;
                        break;
                    case 2:                         /* switch 3 */
                        (*(s32 *)D_009083BC) |= M2C_FIELD(var_s2, s32 *, 0x44);
                        M2C_FIELD(var_s2, s32 *, 0x44) = 0;
                        break;
                    }
                    if ((*(s32 *)D_009083B8) == 0) {
                        goto block_51;
                    }
                } else {
block_51:
                    var_s0_3 += 1;
                    var_s2 += 4;
                    if ((s32) var_s0_3 < 0x11) {
                        goto loop_36;
                    }
                }
            }
            if ((var_s1_2 == 0) && ((s32) var_s0_3 >= 0x11)) {
                (*(u8 *)D_009083B0) |= 2;
            }
        }
        (*(s8 *)D_009083B2) = 0;
        (*(u8 *)D_009083B1) += 1;
        /* fallthrough */
    case 2:                                         /* switch 1 */
        if (func_008F86F0((*(s32 *)D_009083B8)) != 0) {
            (*(u8 *)D_009083B1) = 1;
            (*(s32 *)D_009083BC) |= (*(s32 *)D_009083B8);
        }
        break;
    }
    return 1;
}
