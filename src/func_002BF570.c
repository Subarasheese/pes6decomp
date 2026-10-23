/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_00C12C80(s32);
extern void *func_00C13280(s32);
extern s32 func_00C132B0(s32);
extern s32 func_00C132C0();
extern u8 D_003E9D50;

s32 func_002BF570(s32 index) {
    s32 result;

    result = 0;
    if (func_00C12C80(func_00C132C0()) != 0) {
        if ((M2C_FIELD(func_00C13280(index), u8 *, 5) & 3) == 3) {
            result = D_003E9D50 == (func_00C132B0(index) & 0xFF);
        }
    }
    return result;
}
