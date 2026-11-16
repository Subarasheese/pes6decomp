/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_002AE670(s32);
s32 func_009A01D0(u8);                              /* extern */
extern char D_00591BC0[];
extern char D_00591BE4[];
extern char D_00591DCD[];
extern char D_00591E10[];
extern char D_005926E2[];

void func_009B2EB0(u32 arg0) {
    f32 temp_f20;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f0;
    f32 temp_f1;
    u32 temp_s0;
    u32 temp_v1;

    temp_s0 = (*(u8 *)D_00591BE4);
    temp_f20 = (f32) func_009A01D0((*(u8 *)D_00591DCD));
    temp_f2 = temp_f20 / (f32) func_002AE670(0x190);
    temp_f3 = ((f32) temp_s0 / 60.0f) * temp_f2;
    temp_f1 = ((f32) arg0 * (f32) temp_s0) / (f32) (s32) (*(u8 *)D_005926E2);
    temp_f0 = temp_f1 * temp_f3;
    temp_v1 = (*(u8 *)D_00591BC0);
    (*(s16 *)D_00591E10) += (s16) (temp_f0 / ((5.0f * (1.0f + (f32) temp_v1)) / 10.0f));
}
