/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_00C132B0(s32);
extern s32 func_00C132C0();
extern u8 D_003E9D50;

s32 func_002BEC70(s32 index) {
    s32 kind;
    s32 result;

    result = 0;
    kind = func_00C132C0() & 0xFF;
    if ((kind == 0xC) || (kind == 0x11)) {
        result = D_003E9D50 == (func_00C132B0(index) & 0xFF);
    }
    return result;
}
