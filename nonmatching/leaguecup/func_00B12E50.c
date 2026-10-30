/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B14800(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00B12510(u8);                          /* extern */

s32 func_00B12E50(void) {
    u32 temp_v0;
    u8 temp_v1;

    temp_v0 = func_00B14800();
    if (temp_v0 != 0) {
        temp_v1 = M2C_FIELD(temp_v0, u8 *, 0xBD0);
        switch (temp_v1) {                          /* irregular */
        case 2:
            func_0026E840(0x84008401);
            return 1;
        case 1:
            func_0026E840(0x8400F803);
            func_00B12510(M2C_FIELD(temp_v0, u8 *, 0x75E));
            M2C_FIELD(temp_v0, u8 *, 0xBD0) = 0U;
            /* fallthrough */
        default:
            return 0;
        }
    } else {
        return 1;
    }
}
