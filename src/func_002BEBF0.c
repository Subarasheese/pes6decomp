/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_00C12B00(s32);
extern s32 func_00C132B0(s32);
extern s32 func_00C132C0();
extern u8 D_003E9D50;
extern u8 D_003E9D53;

s32 func_002BEBF0(s32 index) {
    s32 result;
    u8 selection;

    result = 0;
    if (func_00C12B00(func_00C132C0()) != 0) {
        selection = func_00C132B0(index) & 0xFF;
        if (selection != D_003E9D53) {
            D_003E9D53 = selection;
            result = selection == D_003E9D50;
        }
    }
    return result;
}
