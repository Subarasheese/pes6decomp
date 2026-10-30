/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B77B10(void);
M2C_UNK func_009BECB0(u16, u16);                    /* extern */

void func_00B77CF0(void) {
    u32 temp_v0;
    void *temp_v0_2;

    temp_v0 = func_00B77B10();
    if (temp_v0 != 0) {
        temp_v0_2 = (M2C_FIELD(temp_v0, u8 *, 0x5B0) * 2) + temp_v0;
        func_009BECB0(M2C_FIELD(temp_v0_2, u16 *, 0x522), M2C_FIELD(temp_v0_2, u16 *, 0x562));
    }
}
