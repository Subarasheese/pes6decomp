/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern u32 func_00B28900(void);
extern void func_001D7D80(void *, s16);
void func_00B27A50(s32 arg0) {
    u32 temp_v0;

    temp_v0 = func_00B28900();
    if (temp_v0 != 0) {
        if (arg0 == 2) {
            func_001D7D80(M2C_FIELD(temp_v0, void **, 0x178), (s16) M2C_FIELD(temp_v0, u8 *, 0x18C));
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0x178), 1);
            return;
        }
        func_001D7D60(M2C_FIELD(temp_v0, void **, 0x178), 0);
    }
}
