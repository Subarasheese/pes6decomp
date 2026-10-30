/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B695D0(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
M2C_UNK func_009BEC00(M2C_UNK);                     /* extern */
M2C_UNK func_00B6A950(M2C_UNK);                     /* extern */
M2C_UNK func_00B6AE90(u8);                          /* extern */

s32 func_00B6A780(void) {
    s32 temp_v1;
    u32 temp_v0;

    temp_v0 = func_00B695D0();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 4) == 0) {
            temp_v1 = M2C_FIELD(temp_v0, s32 *, 0x3668);
            switch (temp_v1) {                      /* irregular */
            case 1:
                func_009BEC00(0);
                func_0026E840(0x84008401);
                M2C_FIELD(temp_v0, s32 *, 0x3668) = 0;
                func_00958000(5);
                break;
            case 0:
                M2C_FIELD(temp_v0, s32 *, 0x3668) = 2;
                func_00958000(4);
                func_0026E840(0x84008401);
                func_00B6A950(0);
                M2C_FIELD(temp_v0, u8 *, 4) = 1U;
                func_00B6AE90(M2C_FIELD(temp_v0, u8 *, 0x330D));
                break;
            }
        }
    }
    return 0;
}
