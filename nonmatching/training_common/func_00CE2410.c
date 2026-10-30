/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00CD7A00(M2C_UNK, void *);             /* extern */
s32 func_00CE4310();                                /* extern */
extern void *D_003E7E1C;
extern M2C_UNK func_00CE0CC0;

void func_00CE2410(void) {
    s32 temp_s0;
    s32 temp_s1;
    s32 var_v1;

    temp_s0 = M2C_FIELD(D_003E7E1C, s32 *, 0x14C);
    temp_s1 = M2C_FIELD(D_003E7E1C, s32 *, 0x150);
    if ((func_00CE4310() != 0) && (M2C_FIELD(D_003E7E1C, s32 *, 0x188) != &func_00CE0CC0)) {
        if (temp_s1 != 2) {
            var_v1 = (s32) ((temp_s1 + M2C_FIELD(D_003E7E1C, s32 *, 0x14C)) - 1) % temp_s1;
            M2C_FIELD(D_003E7E1C, s32 *, 0x14C) = var_v1;
        } else {
            var_v1 = M2C_FIELD(D_003E7E1C, s32 *, 0x14C) - 1;
            if (var_v1 > 0) {

            } else {
                var_v1 = 0;
            }
            M2C_FIELD(D_003E7E1C, s32 *, 0x14C) = var_v1;
        }
        if (temp_s0 != var_v1) {
            func_00CD7A00(1, D_003E7E1C);
        }
    }
}
