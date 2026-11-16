/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern s32 func_001CE6A0(u32);
extern s32 func_0017F9A0(s32, void *, s32 *, s32, void *);
extern u32 D_0051FF58;
extern u32 D_0051FF5C;
extern u32 D_0051FF60;
extern s32 D_0051FF90;
extern s32 D_0051FF94;
extern s32 D_0051FF98;
extern char D_00520360[];
extern M2C_UNK func_001A28D0;

void func_001A27A0(s32 arg0) {
    s32 sp[2];
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;

    D_0051FF94 = 0;
    sp[0] = arg0;
    D_0051FF90 = 0;
    D_0051FF98 = 0;
    temp_s2 = func_001CE6A0(D_0051FF58);
    temp_s1 = func_001CE6A0(D_0051FF5C);
    temp_s0 = func_001CE6A0(D_0051FF60);
    sp[1] = 1;
    if (temp_s2 == temp_s1) {
        sp[1] = 3;
    }
    while (func_0017F9A0(temp_s2, &func_001A28D0, sp, 8, D_00520360) != 1) {
    }
    if (temp_s2 != temp_s1) {
        sp[1] = 2;
        while (func_0017F9A0(temp_s1, &func_001A28D0, sp, 8, D_00520360) != 1) {
        }
    }
    sp[1] = 4;
    while (func_0017F9A0(temp_s0, &func_001A28D0, sp, 8, D_00520360) != 1) {
    }
}
