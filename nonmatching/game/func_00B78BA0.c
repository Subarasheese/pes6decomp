/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s16 func_002928B0(s32);
extern u8 func_00292A30(void);
extern char D_005922E8[];
extern char D_005922E9[];
extern void *D_00CB3300;

s32 func_00B78BA0(void) {
    u8 sp44;
    u8 sp45;
    u8 sp48;
    u8 sp49;
    u8 sp4C;
    u8 sp4D;
    s16 temp_a0;
    s16 var_v0_4;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    u8 *var_v1;
    u8 *var_v1_2;
    u8 *var_v1_3;
    u8 temp_v1;
    u8 temp_v1_2;

    var_v0 = 2;
    var_v1 = &sp4C;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    var_v1_2 = &sp48;
    var_v0_2 = 2;
    if (var_v1_2 != NULL) {
        do {
            *var_v1_2 = 0;
            var_v0_2 -= 1;
            var_v1_2 += 1;
        } while (var_v0_2 != 0);
    }
    var_v1_3 = &sp44;
    var_v0_3 = 2;
    if (var_v1_3 != NULL) {
        do {
            *var_v1_3 = 0;
            var_v0_3 -= 1;
            var_v1_3 += 1;
        } while (var_v0_3 != 0);
    }
    if ((*(u8 *)D_005922E8) == 0) {
        sp48 = func_002928B0(0);
        sp49 = func_002928B0(1);
        temp_a0 = M2C_FIELD(D_00CB3300, s16 *, 8);
        sp44 = (u8) temp_a0;
        sp45 = (u8) M2C_FIELD(D_00CB3300, s16 *, 0x2FC);
        sp4C = sp48 + temp_a0;
        sp4D = sp49 + sp45;
        if (func_00292A30() == 0) {
            if (sp4C == sp4D) {
                var_v0_4 = M2C_FIELD(D_00CB3300, s16 *, 0x300);
                sp4C = (u8) M2C_FIELD(D_00CB3300, s16 *, 0xC);
                goto block_18;
            }
        } else if (sp4C == sp4D) {
            sp4D = sp49 + (sp45 * 2);
            temp_v1 = sp44 + (sp48 * 2);
            sp4C = temp_v1;
            if (temp_v1 == sp4D) {
                var_v0_4 = M2C_FIELD(D_00CB3300, s16 *, 0x300);
                sp4C = (u8) M2C_FIELD(D_00CB3300, s16 *, 0xC);
block_18:
                sp4D = (u8) var_v0_4;
            }
        }
        temp_v1_2 = sp4D;
        if ((s32) temp_v1_2 < (s32) sp4C) {
            return 0;
        }
        if ((s32) sp4C >= (s32) temp_v1_2) {
            return 2;
        }
        return 1;
    }
    return ((*(u8 *)D_005922E9) != 0) ? 0 : 1;
}
