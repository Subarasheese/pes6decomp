/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AEFF50(void);
extern void func_00AF2100(s32);
extern void * func_001D5A10(s32);
M2C_UNK func_00956A80(s32, M2C_UNK);                /* extern */
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
M2C_UNK func_009737C0(s32, M2C_UNK);                /* extern */
M2C_UNK func_00AF1C90();                            /* extern */
M2C_UNK func_00AF2320(s32, u8, M2C_UNK);            /* extern */
M2C_UNK func_00AF2D40();                            /* extern */

void func_00AF3180(void) {
    u32 temp_v0;
    u32 temp_v0_2;

    temp_v0 = func_00AEFF50();
    if (temp_v0 != 0) {
        M2C_FIELD(temp_v0, void **, 0) = func_001D5A10(0x102B4);
        func_00AF2D40();
        func_00AF2320(M2C_FIELD(temp_v0, s32 *, 0x2330), M2C_FIELD(temp_v0, u8 *, 0x2085), 0);
        temp_v0_2 = func_00AEFF50();
        if (temp_v0_2 != 0) {
            func_00956A80(M2C_FIELD(temp_v0_2, s32 *, 0x1BEC), 0);
            func_009737C0(M2C_FIELD(temp_v0_2, s32 *, 0x1BE0), 0);
        }
        func_00AEFF50();
        func_00AF2100((s32) M2C_FIELD(temp_v0, u8 *, 0x2087));
        func_00AF1C90();
        func_00958000(0x80);
    }
}
