/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_009A84E0(void);
M2C_UNK func_009A7880(s32);                         /* extern */

void func_009A4CD0(s32 arg0) {
    M2C_UNK *temp_s0;
    u32 temp_v0;
    u8 temp_v1;

    temp_v0 = func_009A84E0();
    if (temp_v0 != 0) {
        temp_s0 = *M2C_FIELD(temp_v0, M2C_UNK **, 8);
        func_009A7880(arg0);
        M2C_FIELD(temp_v0, M2C_UNK **, 8) = temp_s0;
        if (temp_s0 == NULL) {
            M2C_FIELD(temp_v0, s32 *, 4) = 0;
        }
        temp_v1 = M2C_FIELD(temp_v0, u8 *, 0);
        if ((s32) temp_v1 > 0) {
            M2C_FIELD(temp_v0, u8 *, 0) = (u8) (temp_v1 - 1);
        }
    }
}
