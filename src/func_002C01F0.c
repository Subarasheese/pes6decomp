/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void *func_00C13280(s32);
extern s32 func_00C132C0();
extern u8 D_003E9D51;

s32 func_002C01F0(s32 index) {
    s32 first_match;
    s32 second_match;
    s32 result;

    first_match = 0;
    if ((func_00C132C0() & 0xFF) == 0x1E) {
        first_match = D_003E9D51 == M2C_FIELD(func_00C13280(index), u8 *, 1);
    }
    result = first_match != 0;
    if (result == 0) {
        second_match = 0;
        if ((func_00C132C0(index) & 0xFF) == 0x1F) {
            second_match = D_003E9D51 == M2C_FIELD(func_00C13280(index), u8 *, 1);
        }
        result = second_match != 0;
    }
    return result;
}
