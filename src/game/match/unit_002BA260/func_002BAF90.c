/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_00BBB8C0(s32);
extern u32 D_005E2FA8[];

s32 func_002BAF90(u8 *arg0) {
    s32 temp_s0;
    f32 t;

    temp_s0 = *(s32 *)(arg0 + 4);
    t = (f32) temp_s0 + ((f32) ((*(s32 *)(arg0 + 8) - temp_s0) * func_00BBB8C0(0x3E8)) / 1000.0f);
    D_005E2FA8[0] = (u32) ((f32) D_005E2FA8[0] + t);
    return 0;
}
