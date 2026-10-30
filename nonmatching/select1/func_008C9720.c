/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002683E0(void);
M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_008C9720(void) {
    s32 temp_v0;

    temp_v0 = func_002683E0();
    func_001C48E8(temp_v0, 0, 0x50);
    M2C_FIELD(temp_v0, s32 *, 0x48) = 0;
    M2C_FIELD(temp_v0, s16 *, 0x4C) = 0xFFFF;
}
