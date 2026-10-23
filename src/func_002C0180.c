/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void *func_00C13280(s32);
extern s32 func_00C132C0();
extern u8 D_003E9D51;

s32 func_002C0180(s32 index) {
    s32 result;

    result = 0;
    if ((func_00C132C0() & 0xFF) == 0x20) {
        result = D_003E9D51 == M2C_FIELD(func_00C13280(index), u8 *, 1);
    }
    return result;
}
