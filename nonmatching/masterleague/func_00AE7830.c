/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AE3240(void);
extern void func_001D7D60(void *, s8);
M2C_UNK func_00972040(s32, s32, M2C_UNK);           /* extern */

void func_00AE7830(void) {
    u32 temp_v0;
    u32 temp_v0_2;

    temp_v0 = func_00AE3240();
    if (temp_v0 != 0) {
        func_00972040(M2C_FIELD(temp_v0, s32 *, 0x140), M2C_FIELD(temp_v0, s32 *, 0x3DBC) - M2C_FIELD(temp_v0, u8 *, 0x184), 0);
        temp_v0_2 = func_00AE3240();
        if (temp_v0_2 != 0) {
            func_001D7D60(M2C_FIELD(temp_v0_2, void **, 0x44), 1);
            func_001D7D60(M2C_FIELD(temp_v0_2, void **, 0x48), 1);
            if (M2C_FIELD(temp_v0_2, s32 *, 0x3DBC) == 0) {
                func_001D7D60(M2C_FIELD(temp_v0_2, void **, 0x44), 0);
            }
            if (M2C_FIELD(temp_v0_2, s32 *, 0x3DBC) == (M2C_FIELD(temp_v0_2, u8 *, 0x3DC4) - 1)) {
                func_001D7D60(M2C_FIELD(temp_v0_2, void **, 0x48), 0);
            }
        }
    }
}
