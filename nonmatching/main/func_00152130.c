/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

void func_0013B6A0(f32);
void func_0013B720(s32, s32, s32, s32, s32);
extern char D_0050D480[];
extern char D_0050D484[];
extern char D_0050D488[];
extern char D_0050D48A[];

s32 func_00152130(s32 arg0, s8 arg1) {
    s32 r = 0;
    *(s8 *)D_0050D48A = arg1;
    if (*(s32 *)D_0050D480 != arg0) {
        *(s32 *)D_0050D484 = 0;
    }
    if (*(s32 *)D_0050D484 == 2) {
        r = 1;
    } else if (*(s32 *)D_0050D484 == 1) {
    } else if (*(s32 *)D_0050D484 == 0) {
        *(s32 *)D_0050D480 = arg0;
        *(s32 *)D_0050D484 = 1;
        func_0013B720(1, 0, 0, 0, 0);
        if (arg0 == 1) {
            *(s16 *)D_0050D488 = 0;
            func_0013B6A0(128.0f);
        } else if (arg0 == 0) {
            *(s16 *)D_0050D488 = 0xFF;
            func_0013B6A0(0.0f);
        }
    }
    return r;
}
