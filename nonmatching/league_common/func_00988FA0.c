/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00989410(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00949340(void *, M2C_UNK, s64, void *); /* extern */
s32 func_0095ED20();                                /* extern */
M2C_UNK func_00987300(s32, s16);                    /* extern */

s32 func_00988FA0(void) {
    s16 temp_a1;
    s16 temp_s0;
    s16 temp_v0_4;
    s32 temp_a0;
    s32 temp_s2;
    s32 temp_v1;
    s32 var_s4;
    u32 temp_v0;
    u8 temp_v0_3;
    u8 temp_v1_2;
    void *temp_a3;
    void *temp_v0_2;

    var_s4 = 0;
    temp_v0 = func_00989410();
    if (temp_v0 == 0) {

    } else if (func_0095ED20() == 0) {

    } else {
        temp_v1 = M2C_FIELD(temp_v0, s32 *, 0x488);
        switch (temp_v1) {                          /* irregular */
        case 2:
            break;
        case 1:
            var_s4 = 1 & 0xFF;
            /* fallthrough */
        default:
        case 0:
            temp_a0 = var_s4 & 0xFF;
            temp_s2 = temp_a0 * 2;
            temp_a3 = temp_s2 + temp_v0;
            if (M2C_FIELD(temp_a3, s16 *, 0x45E) != 0) {

            } else {
                temp_v1_2 = M2C_FIELD((M2C_FIELD(temp_v0, u8 *, 0x472) + ((temp_a0 * 4) + temp_v0)), u8 *, 0x46A);
                if ((s32) temp_v1_2 < 9) {

                } else {
                    temp_v0_2 = temp_a0 + temp_v0;
                    temp_v0_3 = M2C_FIELD(temp_v0_2, u8 *, 0x466);
                    if ((s32) temp_v0_3 < (temp_v1_2 - 8)) {
                        M2C_FIELD(temp_v0_2, u8 *, 0x466) = (u8) (temp_v0_3 + 1);
                        M2C_FIELD(temp_a3, s16 *, 0x45E) = (s16) M2C_FIELD(temp_v0, s16 *, 0x458);
                        temp_v0_4 = -M2C_FIELD(temp_v0, s16 *, 0x468);
                        M2C_FIELD(temp_a3, s16 *, 0x45A) = temp_v0_4;
                        temp_s0 = M2C_FIELD(temp_a3, s16 *, 0x45E);
                        func_00949340(temp_a3 + 0x45E, 0, (s64) ((s64) temp_v0_4 << 0x30) >> 0x30, temp_a3);
                        temp_a1 = M2C_FIELD(temp_a3, s16 *, 0x45E);
                        M2C_FIELD((temp_s2 + temp_v0), s16 *, 0x462) = (s16) (temp_a1 - ((s64) ((s64) temp_s0 << 0x30) >> 0x30));
                        func_00987300(var_s4, temp_a1);
                        func_0026E840(0x8400F802);
                    }
                }
            }
            break;
        }
    }
    return 0;
}
