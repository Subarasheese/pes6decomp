/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B035D0(void);
M2C_UNK func_009737E0(s32, M2C_UNK, s32);           /* extern */

void func_00AFB650(void) {
    u32 temp_v0;

    temp_v0 = func_00B035D0();
    if (temp_v0 != 0) {
        func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x74C), 1, M2C_FIELD(temp_v0, s32 *, 0x73C));
        func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x750), 2, M2C_FIELD(temp_v0, s32 *, 0x740));
        func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x754), 3, M2C_FIELD(temp_v0, s32 *, 0x744));
        func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x758), 4, M2C_FIELD(temp_v0, s32 *, 0x748));
    }
}
