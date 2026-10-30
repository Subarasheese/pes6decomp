/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_009B7F90(void);
extern void func_001D7D60(void *, s8);
M2C_UNK func_009B4840(M2C_UNK);                     /* extern */

void func_009B4980(void) {
    u32 temp_v0;
    u32 temp_v0_2;
    u32 temp_v0_3;

    temp_v0 = func_009B7F90();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s32 *, 0x400) == 0) {
            temp_v0_2 = func_009B7F90();
            if (temp_v0_2 != 0) {
                func_001D7D60(M2C_FIELD(temp_v0_2, void **, 4), 1);
                func_001D7D60(M2C_FIELD(temp_v0_2, void **, 0x28), 1);
                func_001D7D60(M2C_FIELD(temp_v0_2, void **, 0x34), 1);
            }
            func_009B4840(0);
            return;
        }
        temp_v0_3 = func_009B7F90();
        if (temp_v0_3 != 0) {
            func_001D7D60(M2C_FIELD(temp_v0_3, void **, 4), 0);
            func_001D7D60(M2C_FIELD(temp_v0_3, void **, 0x28), 0);
            func_001D7D60(M2C_FIELD(temp_v0_3, void **, 0x34), 0);
        }
        func_009B4840(1);
    }
}
