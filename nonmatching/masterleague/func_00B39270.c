/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B3D3D0(void);
extern void func_001D7D80(void *, s16);
M2C_UNK func_00973C70(void *, s32);                 /* extern */
extern void *D_003E77B0;

void func_00B39270(s64 arg0) {
    u32 temp_v0;

    temp_v0 = func_00B3D3D0();
    if (temp_v0 != 0) {
        func_00973C70(M2C_FIELD(temp_v0, void **, 0xC), temp_v0 + (arg0 * 0x10) + 0x60);
        if (M2C_FIELD(D_003E77B0, u32 *, 0x20) & 8) {
            func_001D7D80(M2C_FIELD(temp_v0, void **, 0xC), 1);
        } else if (arg0 != 0) {
            func_001D7D80(M2C_FIELD(temp_v0, void **, 0xC), 1);
        } else {
            func_001D7D80(M2C_FIELD(temp_v0, void **, 0xC), 0);
        }
        func_001D7D80(M2C_FIELD(temp_v0, void **, 0x18), (s16) ((s64) (arg0 << 0x30) >> 0x30));
    }
}
