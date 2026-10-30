/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002075B0(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_00BB8810(void *arg0) {
    s32 temp_a1;
    void *temp_a2;

    temp_a2 = M2C_FIELD(arg0, void **, 0);
    temp_a1 = M2C_FIELD(temp_a2, u16 *, 0x26) - M2C_FIELD(temp_a2, u16 *, 0x2C);
    if (temp_a1 != 0) {
        M2C_FIELD(M2C_FIELD(temp_a2, void **, 4), s8 *, 0x2D) = (s8) (((temp_a1 + 0x10000) & 0xFFFF) < 0x8001);
    }
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C) == 0x22) {
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x447, 0, 8);
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0x74;
}
