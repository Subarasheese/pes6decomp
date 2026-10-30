/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B10D20(void);
s32 func_00230490();                                /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00AE8190(s32);                         /* extern */
M2C_UNK func_00AE8AE0(s32);                         /* extern */
extern void *D_003E77B0;

s32 func_00AEB7B0(void) {
    s32 temp_v0_2;
    s32 var_v1;
    u32 temp_v0;

    temp_v0 = func_00B10D20();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x9C) != 0) {
            if (M2C_FIELD(D_003E77B0, u32 *, 0x20) & 8) {
                var_v1 = 3;
            } else if (func_00230490() != 1) {
                var_v1 = 4;
            } else {
                var_v1 = 5;
            }
            if (M2C_FIELD(temp_v0, s32 *, 0x78) == 0) {
                if (M2C_FIELD(temp_v0, s8 *, 0x60) == 0) {
                    M2C_FIELD(temp_v0, s32 *, 0x5C) = (s32) M2C_FIELD(temp_v0, s32 *, 0x58);
                    temp_v0_2 = M2C_FIELD(temp_v0, s32 *, 0x58);
                    if (var_v1 != temp_v0_2) {
                        M2C_FIELD(temp_v0, s32 *, 0x58) = (s32) (temp_v0_2 + 1);
                    } else {
                        M2C_FIELD(temp_v0, s32 *, 0x58) = 0;
                    }
                    func_00AE8AE0(M2C_FIELD(temp_v0, s32 *, 0x58));
                    func_0026E840(0x8400F802);
                    goto block_28;
                }
            } else {
block_28:
                func_00AE8190(M2C_FIELD(temp_v0, s32 *, 0x58));
            }
        }
    }
    return 0;
}
