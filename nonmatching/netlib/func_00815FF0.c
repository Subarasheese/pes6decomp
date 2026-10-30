/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00804460(M2C_UNK);                     /* extern */
M2C_UNK func_00805950(M2C_UNK);                     /* extern */
M2C_UNK func_00807260(M2C_UNK);                     /* extern */
M2C_UNK func_00816690(void *, M2C_UNK);             /* extern */
M2C_UNK func_00D0F4F0(M2C_UNK);                     /* extern */

s32 func_00815FF0(void *arg0) {
    s32 (*temp_v0_2)(M2C_UNK);
    s32 temp_v1;
    s32 var_a0;
    s32 var_s1;
    s32 var_s2;
    s32 var_v1;
    s32 var_v1_2;
    void *temp_v0;

    if (arg0 == NULL) {
        return 1;
    }
    if (arg0 != NULL) {
        var_v1 = M2C_FIELD(arg0, s32 *, 4);
    } else {
        var_v1 = 0;
    }
    switch (var_v1) {                               /* switch 1; irregular */
    case 2:                                         /* switch 1 */
        temp_v1 = M2C_FIELD(arg0, s32 *, 8);
        switch (temp_v1) {                          /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            func_00D0F4F0(2);
            break;
        case 1:                                     /* switch 2 */
            func_00804460(2);
            break;
        case 2:                                     /* switch 2 */
            func_00807260(2);
            break;
        case 3:                                     /* switch 2 */
            func_00805950(2);
            break;
        }
        func_00816690(arg0, 5);
        break;
    case 1:                                         /* switch 1 */
        var_s2 = 0;
        var_s1 = 0;
        do {
            temp_v0 = arg0 + var_s1;
            if (M2C_FIELD(temp_v0, s8 *, 0x410) != 1) {
                temp_v0_2 = M2C_FIELD((arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + (var_s1 * 8)), s32 (**)(M2C_UNK), 0x10);
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
                M2C_FIELD(arg0, s32 *, 4) = 2;
            }
            var_v1_2 = 0;
            do {
                M2C_FIELD((arg0 + var_v1_2), s8 *, 0x410) = 0;
                var_v1_2 += 1;
            } while (var_v1_2 < 8);
        }
        break;
    case 0:                                         /* switch 1 */
        if (arg0 != NULL) {
            M2C_FIELD(arg0, s32 *, 4) = 1;
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
