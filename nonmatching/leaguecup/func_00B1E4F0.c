/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B1E100(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00B1ECA0(u8);                          /* extern */
M2C_UNK func_00B1ED10(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00B1EF80();                            /* extern */

s32 func_00B1E4F0(void) {
    s32 temp_a0;
    u32 temp_v0;

    temp_v0 = func_00B1E100();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s16 *, 0x324) == 0) {
            temp_a0 = M2C_FIELD(temp_v0, s32 *, 0x32C);
            switch (temp_a0) {                      /* irregular */
            case 2:
                M2C_FIELD(temp_v0, s32 *, 0x32C) = 1;
                func_00B1ED10(1, 0, 0, 0xFF, 0);
                func_0026E840(0x84008401);
                break;
            case 1:
                M2C_FIELD(temp_v0, s32 *, 0x32C) = 0;
                func_00B1ECA0(M2C_FIELD(temp_v0, u8 *, 0x31E));
                func_00B1EF80();
                func_0026E840(0x84008401);
                break;
            case 0:
                M2C_FIELD(temp_v0, s32 *, 0x32C) = 1;
                func_00B1ECA0(M2C_FIELD(temp_v0, u8 *, 0x31E));
                func_00B1EF80();
                func_0026E840(0x84008401);
                break;
            }
        }
    }
    return 0;
}
