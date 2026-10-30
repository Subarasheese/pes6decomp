/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001656D0(s32, s32, s32);               /* extern */
M2C_UNK func_00165778(s32, s32, s32);               /* extern */

void func_0016C1E8(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x5D4);
    func_001656D0(M2C_FIELD(arg0, s32 *, 0x910), M2C_FIELD(arg0, s32 *, 0x5A0) + temp_v0, M2C_FIELD(arg0, s32 *, 0x5A4) + temp_v0);
    func_00165778(M2C_FIELD(arg0, s32 *, 0x910), M2C_FIELD(arg0, s32 *, 0x5AC), M2C_FIELD(arg0, s32 *, 0x5B0));
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x5D4);
    func_001656D0(M2C_FIELD(arg0, s32 *, 0x914), M2C_FIELD(arg0, s32 *, 0x5A0) + temp_v0_2, M2C_FIELD(arg0, s32 *, 0x5A4) + temp_v0_2);
    func_00165778(M2C_FIELD(arg0, s32 *, 0x914), M2C_FIELD(arg0, s32 *, 0x5AC), M2C_FIELD(arg0, s32 *, 0x5B0));
    temp_v0_3 = M2C_FIELD(arg0, s32 *, 0x5D4);
    func_001656D0(M2C_FIELD(arg0, s32 *, 0x918), M2C_FIELD(arg0, s32 *, 0x5A0) + temp_v0_3, M2C_FIELD(arg0, s32 *, 0x5A4) + temp_v0_3);
    func_00165778(M2C_FIELD(arg0, s32 *, 0x918), M2C_FIELD(arg0, s32 *, 0x5AC), M2C_FIELD(arg0, s32 *, 0x5B0));
}
