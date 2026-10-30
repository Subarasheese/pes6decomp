/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001CE6A0(u32);
s32 func_0017F9A0(s32, M2C_UNK *, s32 *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_0051FF58[];
extern char D_0051FF5C[];
extern char D_0051FF60[];
extern char D_0051FF90[];
extern char D_0051FF94[];
extern char D_0051FF98[];
extern char D_00520360[];
extern M2C_UNK func_001A28D0;

void func_001A27A0(s32 arg0) {
    s32 sp48;
    s32 sp4C;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;

    (*(s32 *)D_0051FF94) = 0;
    sp48 = arg0;
    (*(s32 *)D_0051FF90) = 0;
    (*(s32 *)D_0051FF98) = 0;
    temp_s2 = func_001CE6A0((*(u32 *)D_0051FF58));
    temp_s1 = func_001CE6A0((*(u32 *)D_0051FF5C));
    temp_s0 = func_001CE6A0((*(u32 *)D_0051FF60));
    sp4C = 1;
    if (temp_s2 == temp_s1) {
        sp4C = 1 | 2;
    }
    do {

    } while (func_0017F9A0(temp_s2, &func_001A28D0, &sp48, 8, ((void *)D_00520360)) != 1);
    if (temp_s2 != temp_s1) {
        sp4C = 2;
        do {

        } while (func_0017F9A0(temp_s1, &func_001A28D0, &sp48, 8, ((void *)D_00520360)) != 1);
    }
    sp4C = 4;
    do {

    } while (func_0017F9A0(temp_s0, &func_001A28D0, &sp48, 8, ((void *)D_00520360)) != 1);
}
