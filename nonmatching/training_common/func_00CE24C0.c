/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00CD7A00(M2C_UNK, s32, void *, void *); /* extern */
s32 func_00CE4310();                                /* extern */
extern void *D_003E7E1C;
extern M2C_UNK func_00CE0CC0;

void func_00CE24C0(void) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_v1;
    s32 var_a0;

    temp_s0 = M2C_FIELD(D_003E7E1C, s32 *, 0x14C);
    if ((func_00CE4310() != 0) && (M2C_FIELD(D_003E7E1C, s32 *, 0x188) != &func_00CE0CC0)) {
        temp_a0 = M2C_FIELD(D_003E7E1C, s32 *, 0x150);
        temp_a1 = M2C_FIELD(D_003E7E1C, s32 *, 0x14C);
        if (temp_a0 == 2) {
            var_a0 = temp_a0 - 1;
            temp_v1 = temp_a1 + 1;
            if (var_a0 >= temp_v1) {
                var_a0 = temp_v1;
            }
        } else {
            var_a0 = (s32) (temp_a1 + 1) % temp_a0;
        }
        M2C_FIELD(D_003E7E1C, s32 *, 0x14C) = var_a0;
        if (var_a0 != temp_s0) {
            func_00CD7A00(1, temp_a1, D_003E7E1C + 0x14C, D_003E7E1C);
        }
    }
}
