/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 func_009B3070(u16, s32);                        /* extern */
s32 func_009F4DC0(s32, f32);                        /* extern */
extern s32 D_003E74CC;

s32 func_00A9DF20(char *arg0, s32 arg1) {
    s32 temp_s0;
    char *a;

    a = *(char **)(arg0 + 4);
    if (func_009F4DC0(*(s32 *)((char *)(*(u16 *)(a + 0x30) * 4) + D_003E74CC + 0x2FD8) - (s32) *(f32 *)(a + 0x38), *(f32 *)(a + 0x28)) == 0) {
        return func_009B3070(*(u16 *)(arg0 + 0x26), arg1) & 0xFFFF;
    }
    a = *(char **)(arg0 + 4);
    temp_s0 = func_009F4DC0(*(s32 *)((char *)(*(u16 *)(a + 0x30) * 4) + D_003E74CC + 0x2FD8) - (s32) *(f32 *)(a + 0x38), *(f32 *)(a + 0x28));
    return (s32) (func_009B3070(*(u16 *)(arg0 + 0x26), arg1) & 0xFFFF) / temp_s0;
}
