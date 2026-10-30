/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_009B7C90(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_009B5A10(s8);                          /* extern */

s32 func_009B6CB0(void) {
    s32 temp_a0;
    u32 temp_v0;

    temp_v0 = func_009B7C90();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, s32 *, 0x238);
        switch (temp_a0) {                          /* irregular */
        case 1:
            M2C_FIELD(temp_v0, s32 *, 0x238) = 0;
            func_009B5A10(M2C_FIELD(temp_v0, s8 *, 0x22C));
            break;
        case 0:
            M2C_FIELD(temp_v0, s32 *, 0x238) = 2;
            break;
        }
        func_0026E840(0x84008401);
    }
    return 0;
}
