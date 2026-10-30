/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00804450(M2C_UNK);                     /* extern */
M2C_UNK func_00805940(M2C_UNK);                     /* extern */
M2C_UNK func_00807250(M2C_UNK);                     /* extern */
M2C_UNK func_00816690(void *, M2C_UNK);             /* extern */
M2C_UNK func_0081EF20();                            /* extern */
M2C_UNK func_00D0F680(M2C_UNK);                     /* extern */

s32 func_00815E00(void *arg0) {
    s32 (*temp_v0_2)(M2C_UNK);
    s32 temp_v1;
    s32 var_a0;
    s32 var_s1;
    s32 var_s2;
    s32 var_v0;
    s32 var_v1;
    void *temp_v0;

    if (arg0 == NULL) {
        return 1;
    }
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 4);
    } else {
        var_v0 = 0;
    }
    switch (var_v0) {                               /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        temp_v1 = M2C_FIELD(arg0, s32 *, 8);
        switch (temp_v1) {                          /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            break;
        case 1:                                     /* switch 2 */
            func_00804450(1);
            break;
        case 2:                                     /* switch 2 */
            func_00807250(1);
            break;
        case 3:                                     /* switch 2 */
            func_00805940(1);
            break;
        }
        M2C_FIELD(arg0, s32 *, 8) = 4;
        func_0081EF20();
        if (M2C_FIELD(arg0, s8 *, 0x418) == 1) {
            func_00D0F680(1);
        }
        func_00816690(arg0, 2);
        break;
    case 0:                                         /* switch 1 */
        var_s2 = 0;
        var_s1 = 0;
        do {
            temp_v0 = arg0 + var_s1;
            if (M2C_FIELD(temp_v0, s8 *, 0x410) != 1) {
                temp_v0_2 = M2C_FIELD((arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + (var_s1 * 8)), s32 (**)(M2C_UNK), 0x14);
                if (temp_v0_2 == NULL) {
                    M2C_FIELD(temp_v0, s8 *, 0x410) = 1;
                } else if (temp_v0_2(1) == 1) {
                    M2C_FIELD(temp_v0, s8 *, 0x410) = 1;
                }
            }
            var_s1 += 1;
        } while (var_s1 < 8);
        var_a0 = 0;
        do {
            if (M2C_FIELD((arg0 + var_a0), s8 *, 0x410) == 1) {
                var_s2 = 1;
            }
            var_a0 += 1;
        } while (var_a0 < 8);
        if (var_s2 == 1) {
            if (arg0 != NULL) {
                M2C_FIELD(arg0, s32 *, 4) = 1;
            }
            var_v1 = 0;
            do {
                M2C_FIELD((arg0 + var_v1), s8 *, 0x410) = 0;
                var_v1 += 1;
            } while (var_v1 < 8);
        }
        break;
    default:                                        /* switch 1 */
        if (arg0 != NULL) {
            M2C_FIELD(arg0, s32 *, 4) = 0;
        }
        break;
    }
    return 0;
}
