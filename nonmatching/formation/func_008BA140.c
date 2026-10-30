/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F2410(void *);
M2C_UNK func_001EE890(s32, void *);                 /* extern */
M2C_UNK func_001EEAC0(s32, s32);                    /* extern */
M2C_UNK func_001EF370(s32, f32 *);                  /* extern */

s32 func_008BA140(void *arg0, void *arg1, void *arg2, s32 arg3, s32 arg4, void *arg5) {
    f32 sp70;
    f32 sp74;
    f32 sp78;
    f32 sp7C;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 var_f0;
    f32 var_f0_2;
    s32 temp_s0;
    u16 var_v0;
    u16 var_v1;

    if (arg0 == NULL) {
        return 0;
    }
    if (arg1 == NULL) {
        return 0;
    }
    temp_s0 = func_001F2410(arg0);
    var_v0 = M2C_FIELD(arg1, u16 *, 0x16);
    var_v1 = M2C_FIELD(arg1, u16 *, 0x14);
    if (arg5 != NULL) {
        var_v1 = (u16) (s32) ((f32) var_v1 * M2C_FIELD(arg5, f32 *, 0));
        var_v0 = (u16) (s32) ((f32) var_v0 * M2C_FIELD(arg5, f32 *, 4));
    }
    if (arg2 != NULL) {
        sp70 = M2C_FIELD(arg2, f32 *, 0);
        sp74 = M2C_FIELD(arg2, f32 *, 4);
        sp78 = M2C_FIELD(arg2, f32 *, 8);
        sp7C = M2C_FIELD(arg2, f32 *, 0xC);
        temp_f1 = M2C_FIELD(arg2, f32 *, 8);
        if ((temp_f1 == 0.0f) || ((f32) var_v1 < temp_f1)) {
            sp78 = (f32) var_v1;
        }
        temp_f1_2 = M2C_FIELD(arg2, f32 *, 0xC);
        if ((temp_f1_2 == 0.0f) || ((f32) var_v0 < temp_f1_2)) {
            sp7C = (f32) var_v0;
        }
        temp_f3 = M2C_FIELD(arg2, f32 *, 8);
        if (temp_f3 != 0.0f) {
            switch (arg3) {                         /* switch 1; irregular */
            case 0:                                 /* switch 1 */
                break;
            case 2:                                 /* switch 1 */
                var_f0 = sp70 + (temp_f3 - sp78);
block_24:
                sp70 = var_f0;
                break;
            case 1:                                 /* switch 1 */
                var_f0 = sp70 + ((temp_f3 - sp78) / 2.0f);
                goto block_24;
            }
        }
        temp_f3_2 = M2C_FIELD(arg2, f32 *, 0xC);
        if (temp_f3_2 != 0.0f) {
            switch (arg4) {                         /* switch 2; irregular */
            case 0:                                 /* switch 2 */
                break;
            case 2:                                 /* switch 2 */
                var_f0_2 = sp7C + (temp_f3_2 - sp7C);
                goto block_37;
            case 1:                                 /* switch 2 */
                sp74 += (temp_f3_2 - sp7C) / 2.0f;
                break;
            }
        }
    } else {
        sp70 = 0.0f;
        sp74 = 0.0f;
        sp78 = (f32) var_v1;
        var_f0_2 = (f32) var_v0;
block_37:
        sp7C = var_f0_2;
    }
    func_001EF370(temp_s0, &sp70);
    func_001EEAC0(temp_s0, M2C_FIELD(arg1, s32 *, 0xC));
    func_001EE890(temp_s0, arg1 + 0x1C);
    return temp_s0;
}
