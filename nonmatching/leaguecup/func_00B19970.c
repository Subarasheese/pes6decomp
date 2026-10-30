/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B177C0(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */

s32 func_00B19970(void) {
    u32 temp_v0;

    temp_v0 = func_00B177C0();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x3CC) == 0) {
            M2C_FIELD(temp_v0, u8 *, 0x3CC) = 8U;
            func_0026E840(0x84028400);
        }
    }
    return 0;
}
