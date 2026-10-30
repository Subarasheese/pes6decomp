/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 Pes6Team_GetPlayerId(s32, s32, s32);
extern void * func_00228960(void);
M2C_UNK func_001C48E8(s16 *, M2C_UNK, M2C_UNK);     /* extern */
s32 func_00221500(s16);                             /* extern */
void *func_00223E00(s16);                           /* extern */
s32 func_00225680(s32);                             /* extern */
s32 func_00938F10(s16);                             /* extern */
s32 func_009492B0(s32, s32);                        /* extern */
s32 func_00956890(s16);                             /* extern */
s32 func_0096E440(s16);                             /* extern */
s32 func_0096F7A0(s16);                             /* extern */
s32 func_00970870(s16);                             /* extern */
s32 func_00AFE370(s16);                             /* extern */
s32 func_00B028D0(s16);                             /* extern */
s32 func_00B2B3E0(s16);                             /* extern */
extern char D_00B8C760[];

s32 func_00B24BE0(s32 arg0) {
    s16 *var_s1;
    s16 *var_s2_4;
    s16 *var_s3;
    s16 *var_s3_2;
    s16 *var_s3_3;
    s16 *var_s3_4;
    s16 temp_s2_2;
    s16 temp_s4;
    s16 temp_s4_2;
    s16 var_s1_2;
    s16 var_s2;
    s16 var_s2_2;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_4;
    s32 var_s0;
    s32 var_s1_3;
    s32 var_s2_3;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_s5;
    void *temp_v0_3;

    if (func_00228960() == NULL) {
        return 0;
    }
    func_001C48E8(((void *)D_00B8C760), 0, 0x2714);
    temp_s2 = arg0 & 0xFFFF;
    var_s0 = 0;
    switch (temp_s2) {                              /* irregular */
    case 0x11A:
        var_s2 = 1;
        var_s1 = ((void *)D_00B8C760);
        do {
            temp_v0 = var_s2 & 0xFFFF;
            if ((temp_v0 >= 0x12B1) && (temp_v0 < 0x7000)) {
                var_s2 = 0x7000;
            }
            temp_s3 = func_00970870(var_s2);
            if ((func_00B2B3E0(var_s2) != 0) && ((func_00B028D0(var_s2) & 0xFF) != 1) && (temp_s3 != 0) && (func_00221500(var_s2) != 1) && (func_00AFE370(var_s2) != 0) && (func_0096E440(var_s2) != 0)) {
                *var_s1 = var_s2;
                var_s0 += 1;
                var_s1 += 2;
            }
            var_s2 = (var_s2 + 1) & 0xFFFF;
        } while (var_s2 < 0x7020);
        break;
    case 0x11B:
        var_s2_2 = 1;
        var_s3 = ((void *)D_00B8C760);
        do {
            temp_v0_2 = var_s2_2 & 0xFFFF;
            if ((temp_v0_2 >= 0x12B1) && (temp_v0_2 < 0x7000)) {
                var_s2_2 = 0x7000;
            }
            temp_s1 = func_00970870(var_s2_2);
            if (((func_00938F10(var_s2_2) & 0xFF) == 0xFF) && (func_00B2B3E0(var_s2_2) != 1) && (temp_s1 != 0) && (func_00221500(var_s2_2) != 1) && (func_00AFE370(var_s2_2) != 0) && (func_0096E440(var_s2_2) != 0) && ((func_0096F7A0(var_s2_2) != 1) || (temp_v0_3 = func_00223E00(var_s2_2), (temp_v0_3 == NULL)) || (M2C_FIELD(temp_v0_3, u8 *, 6) & 0x3F))) {
                *var_s3 = var_s2_2;
                var_s3 += 2;
                var_s0 += 1;
            }
            var_s2_2 = (var_s2_2 + 1) & 0xFFFF;
        } while (var_s2_2 < 0x7020);
        break;
    case 0x11C:
        var_s4 = 0;
        var_s3_2 = ((void *)D_00B8C760);
        do {
            temp_s2_2 = (var_s4 + 0x7000) & 0xFFFF;
            if (((func_00956890(temp_s2_2) & 0xFF) != 0xFF) && (func_00AFE370(temp_s2_2) != 0)) {
                *var_s3_2 = temp_s2_2;
                var_s0 += 1;
                var_s3_2 += 2;
            }
            var_s4 += 1;
        } while (var_s4 < 0xB8);
        var_s2_3 = 0;
        var_s3_3 = &(((void *)D_00B8C760))[var_s0];
        do {
            temp_s4 = Pes6Team_GetPlayerId(arg0, var_s2_3 & 0xFF, 0) & 0xFFFF;
            if ((temp_s4 != 0) && (func_00970870(temp_s4) != 0) && (func_00221500(temp_s4) != 1) && (func_00AFE370(temp_s4) != 0)) {
                *var_s3_3 = temp_s4;
                var_s0 += 1;
                var_s3_3 += 2;
            }
            var_s2_3 += 1;
        } while (var_s2_3 < 0xB8);
        break;
    case 0x121:
        var_s1_2 = 1;
        var_s2_4 = ((void *)D_00B8C760);
        do {
            temp_v0_4 = var_s1_2 & 0xFFFF;
            if ((temp_v0_4 >= 0x12B1) && (temp_v0_4 < 0x7000)) {
                var_s1_2 = 0x7000;
            }
            temp_s3_2 = func_00970870(var_s1_2);
            if ((func_00B028D0(var_s1_2) & 0xFF) && (temp_s3_2 != 0) && (func_00221500(var_s1_2) != 1) && (func_00AFE370(var_s1_2) != 0) && (func_0096E440(var_s1_2) != 0)) {
                *var_s2_4 = var_s1_2;
                var_s0 += 1;
                var_s2_4 += 2;
            }
            var_s1_2 = (var_s1_2 + 1) & 0xFFFF;
        } while (var_s1_2 < 0x7020);
        break;
    default:
        var_s1_3 = 0;
        var_s3_4 = (s16 *)0xB8C760;
        do {
            var_s4_2 = 0xFF;
            var_s5 = 0;
loop_63:
            if (temp_s2 == (func_00225680(var_s5 & 0xFF) & 0xFFFF)) {
                var_s4_2 = var_s5 & 0xFF;
            } else {
                var_s5 += 1;
                if (var_s5 < 0x48) {
                    goto loop_63;
                }
            }
            if ((var_s4_2 & 0xFF) != 0xFF) {
                temp_s4_2 = func_009492B0(var_s4_2, var_s1_3 & 0xFF) & 0xFFFF;
                if ((temp_s4_2 != 0) && (func_00970870(temp_s4_2) != 0) && (func_00221500(temp_s4_2) != 1) && (func_00AFE370(temp_s4_2) != 0) && (func_0096E440(temp_s4_2) != 0)) {
                    *var_s3_4 = temp_s4_2;
                    var_s0 += 1;
                    var_s3_4 += 2;
                }
            }
            var_s1_3 += 1;
        } while (var_s1_3 < 0x20);
        break;
    }
    return var_s0;
}
