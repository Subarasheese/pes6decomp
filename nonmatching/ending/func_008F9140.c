/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D10(void *);
s32 func_008F9220(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

s32 func_008F9140(void *arg0) {
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0x16);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (func_00207D10(M2C_FIELD(arg0, void **, 4)) != 0) {
            M2C_FIELD(arg0, u8 *, 0x16) = (u8) (M2C_FIELD(arg0, u8 *, 0x16) + 1);
        case 1:
            return func_008F9220(arg0, 0x44C, 0x4EC, 0);
        }
    default:
        return 1;
    }
}
