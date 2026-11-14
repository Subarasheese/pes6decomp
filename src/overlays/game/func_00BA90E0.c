/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_009B3070(s32, s32);

void func_00BA90E0(void **arg0, s32 arg1, f32 fparg0) {
    s32 temp_s1;
    u16 v;
    u8 *a0;

    if (fparg0 == 0.0f) {
        fparg0 = 1.0f;
    }
    a0 = *arg0;
    temp_s1 = (((u8 *)*(void **)(a0 + 4))[0x2D] == 0) ? 1 : -1;
    v = (f32) (temp_s1 * (func_009B3070(*(u16 *)(a0 + 0x26), arg1) & 0xFFFF)) / fparg0;
    *(s16 *)((u8 *)*arg0 + 0x38) = v;
}
