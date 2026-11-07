/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void *func_00C13280(s32);
extern s32 func_00C132B0(s32);
extern s32 func_00C132C0();
extern u8 D_003E9D50;

s32 func_002BE980(s32 index) {
    s32 kind;
    s32 result;
    u8 selection;

    result = 0;
    kind = func_00C132C0() & 0xFF;
    if (kind == 0x1D) {
        result = D_003E9D50 == (func_00C132B0(index) & 0xFF);
    } else if ((u32) (kind - 7) < 2U) {
        selection = D_003E9D50;
        if (selection == (func_00C132B0(index) & 0xFF)) {
            result = (M2C_FIELD(func_00C13280(index), u8 *, 5) & 4) != 0;
        }
    }
    return result;
}
