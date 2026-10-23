/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void *func_00C13280(s32);
extern s32 func_00C132B0(s32);
extern s32 func_00C132C0();
extern u8 D_003E9D50;

s32 func_002BE500(s32 index) {
    s32 result;
    u8 selection;

    result = 0;
    if ((func_00C132C0() & 0xFF) == 0xF) {
        selection = D_003E9D50;
        if (selection == (func_00C132B0(index) & 0xFF)) {
            result = (M2C_FIELD(func_00C13280(index), u8 *, 4) & 0x10) != 0;
        }
    }
    return result;
}
