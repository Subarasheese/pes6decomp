/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002EBE90(s32, s32);                        /* extern */
M2C_UNK func_002ECB70(s32, M2C_UNK);                /* extern */
M2C_UNK func_00946980();                            /* extern */
extern s32 D_003EAC28;
extern char D_00967F20[];
extern char D_009680BC[];
extern char D_009680C1[];
extern char D_009680C2[];

void func_0094FD30(void) {
    s16 var_s3;
    s32 var_a1_2;
    s32 var_a2_2;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_a4;
    s32 var_a4_2;
    s32 var_a6;
    s32 var_s2;
    s8 *var_a1;
    s8 *var_a2;
    s8 *var_a3_3;
    s8 *var_a4_3;
    s8 *var_a5;
    s8 *var_s0;
    s8 *var_s1;

    switch ((*(s8 *)D_00967F20)) {                           /* irregular */
    case 1:
        var_a4 = 0;
        var_a2 = ((void *)D_00967F20);
        do {
            var_a3 = 0;
            var_a1 = var_a2;
loop_6:
            if (M2C_FIELD(var_a1, u16 *, 0x124C) != 0xFFFF) {
                M2C_FIELD(var_a1, u16 *, 0x124C) = 0x119U;
                M2C_FIELD(var_a1, s32 *, 0x1250) = 0;
            }
            var_a3 += 1;
            var_a1 += 8;
            if (var_a3 < 4) {
                goto loop_6;
            }
            var_a4 += 1;
            var_a2 += 0x20;
        } while (var_a4 < 8);
        break;
    case 2:
        var_a3_2 = 0;
        var_a6 = 0;
        do {
            var_a4_2 = 1;
            var_a5 = &(((void *)D_00967F20))[var_a6] + 0x50;
loop_13:
            if (M2C_FIELD(var_a5, u16 *, 0x164C) != 0xFFFF) {
                M2C_FIELD(var_a5, u16 *, 0x164C) = 0x119U;
                M2C_FIELD(var_a5, s32 *, 0x1650) = 0;
            }
            var_a4_2 -= 1;
            var_a5 -= 0x50;
            if (var_a4_2 >= 0) {
                goto loop_13;
            }
            var_a3_2 += 1;
            var_a6 += 8;
        } while (var_a3_2 < 0xA);
        break;
    case 0:
        var_a2_2 = 0;
        var_a4_3 = ((void *)D_00967F20);
        do {
            var_a1_2 = 0;
            var_a3_3 = var_a4_3;
loop_20:
            if (M2C_FIELD(var_a3_3, u16 *, 0x144C) != 0xFFFF) {
                M2C_FIELD(var_a3_3, u16 *, 0x144C) = 0x119U;
                M2C_FIELD(var_a3_3, s32 *, 0x1450) = 0;
            }
            var_a1_2 += 1;
            var_a3_3 += 8;
            if (var_a1_2 < 0x10) {
                goto loop_20;
            }
            var_a2_2 += 1;
            var_a4_3 += 0x80;
        } while (var_a2_2 < 2);
        break;
    }
    var_s1 = ((void *)D_00967F20);
    var_s2 = 0;
    var_s3 = 0;
    var_s0 = ((void *)D_00967F20);
    do {
        M2C_FIELD(var_s1, s16 *, 4) = 0xFFFF;
        if (func_002EBE90(D_003EAC28, var_s3 & 0xFFFF) == 1) {
            M2C_FIELD(var_s0, s16 *, 4) = var_s3;
            var_s2 += 1;
            var_s0 += 2;
        }
        var_s3 += 1;
        var_s1 += 2;
    } while (var_s3 < 0xCC);
    (*(s32 *)D_009680BC) = var_s2;
    func_00946980();
    func_002ECB70(D_003EAC28, 0);
    (*(s8 *)D_009680C1) = 0xFF;
    (*(s8 *)D_009680C2) = 0;
}
