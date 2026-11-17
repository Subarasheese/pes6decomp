/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern u32 func_00208310(s32);
extern char *D_003E74CC;

void func_00209A00(char *arg0, u16 arg1, u32 arg2) {
    f32 temp_f1;
    u16 temp_a1;

    if (*(u16 *)(arg0 + 0x30) != arg1) {
        *(s8 *)(arg0 + 0x50) = 1;
    }
    *(f32 *)(arg0 + 0x28) = *(f32 *)D_003E74CC;
    *(u16 *)(arg0 + 0x30) = arg1;
    *(f32 *)(arg0 + 0x38) = (f32) arg2;
    *(s16 *)(arg0 + 0x34) = 0;
    *(u32 *)(arg0 + 4) = func_00208310(arg1);
    temp_a1 = *(u16 *)(arg0 + 0x30);
    if (temp_a1 >= 0x59A) {
        if (*(s32 *)(D_003E74CC + arg1 * 4 + 0x178C) == 0) {
            return;
        }
    }
    temp_f1 = *(f32 *)(arg0 + 0x38);
    if (!(temp_f1 <= (f32) *(s32 *)(D_003E74CC + temp_a1 * 4 + 0x2FD8)) || (temp_f1 < 0.0f)) {
        *(s32 *)(arg0 + 0x38) = 0;
    }
}
