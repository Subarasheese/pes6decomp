/* compiler: mwcc-3.0.1b151 */
#include "types.h"
extern s32 D_0050D480[], D_0050D484[];
extern s16 D_0050D488[];
extern u8 D_0050D48A[];
extern void func_0013B6A0(f32), func_0013B720(s32, s32, s32, s32, s32);
s32 func_00152130(s32 mode, u8 step) {
    s32 done = 0;
    D_0050D48A[0] = step;
    if (D_0050D480[0] != mode)
        D_0050D484[0] = 0;
    switch (D_0050D484[0]) {
    case 0:
        D_0050D480[0] = mode;
        D_0050D484[0] = 1;
        func_0013B720(1, 0, 0, 0, 0);
        switch (mode) {
        case 0:
            D_0050D488[0] = 255;
            func_0013B6A0(0.0f);
            break;
        case 1:
            D_0050D488[0] = 0;
            func_0013B6A0(128.0f);
            break;
        }
        break;
    case 1:
        break;
    case 2:
        done = 1;
        break;
    }
    return done;
}
