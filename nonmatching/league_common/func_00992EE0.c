/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00993A80(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0095ED20();                                /* extern */
M2C_UNK func_00991D50(M2C_UNK);                     /* extern */

s32 func_00992EE0(void) {
    s32 temp_v1;
    u32 temp_v0;

    temp_v0 = func_00993A80();
    if (temp_v0 == 0) {

    } else if (func_0095ED20() != 0) {
        temp_v1 = M2C_FIELD(temp_v0, s32 *, 0x258);
        switch (temp_v1) {                          /* irregular */
        case 1:
            func_00991D50(0);
            func_0026E840(0x84008401);
            M2C_FIELD(temp_v0, s32 *, 0x258) = 0;
            break;
        case 0:
            M2C_FIELD(temp_v0, s32 *, 0x258) = 2;
            func_0026E840(0x84008401);
            break;
        }
    }
    return 0;
}
