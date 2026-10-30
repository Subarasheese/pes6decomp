/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00D11BE0(s32, M2C_UNK);                /* extern */

s32 func_00D11B40(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    if (arg0 == NULL) {
        return 2;
    }
    if (M2C_FIELD(arg0, s32 *, 0xDB0) != 1) {
        func_00D11BE0(0, 0x19);
    } else if (M2C_FIELD(arg0, s32 *, 0xD94) != 0) {
        M2C_FIELD(arg0, s32 *, 0xD90) = (s32) (M2C_FIELD(arg0, s32 *, 0xD90) + 1);
        temp_v1 = M2C_FIELD(arg0, s32 *, 0xD94) + 1;
        M2C_FIELD(arg0, s32 *, 0xD94) = temp_v1;
        temp_v0 = M2C_FIELD(arg0, s32 *, 0xD90);
        if (temp_v1 >= temp_v0) {
            M2C_FIELD(arg0, s32 *, 0xD94) = (s32) (temp_v0 - 1);
        }
        if (arg0 != NULL) {
            func_00D11BE0(M2C_FIELD(arg0, s32 *, 0xD9C) + 1, 5);
        }
    }
    return 0;
}
