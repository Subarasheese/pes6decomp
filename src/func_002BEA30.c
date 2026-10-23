/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void *func_00C13280(s32);
extern s32 func_00C132C0();
extern u8 D_003E9D50;

s32 func_002BEA30(s32 index) {
    s32 result;
    void *record;

    result = 0;
    if ((func_00C132C0() & 0xFF) == 0x1D) {
        record = func_00C13280(index);
        if ((((s32) M2C_FIELD(record, u8 *, 1) >> 5) & 1) == (((s32) D_003E9D50 >> 5) & 1)) {
            result = (M2C_FIELD(record, u8 *, 2) & 0x1F) == (D_003E9D50 & 0x1F);
        }
    }
    return result;
}
