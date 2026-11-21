/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_00A7DDA8[];

u8 func_009CC480(s32 arg0) {
    if (D_00A7DDA8[0] == 0) {
        return 0U;
    }
    return M2C_FIELD((arg0 + D_00A7DDA8[0]), u8 *, 0xC);
}
