/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001CE780(void);
extern int func_001CE700(void);
extern int func_001CE760(void);
extern int func_001CE770(void);
extern s32 func_001515E0(s32, s32, s32, s32, s32);
extern int func_001CE720(void);
M2C_UNK func_00145750(s32);                         /* extern */
s32 func_0017F9A0(s32, M2C_UNK *, s32 *, M2C_UNK, M2C_UNK *); /* extern */
s32 func_0017FA00(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_001A27A0(M2C_UNK);                     /* extern */
M2C_UNK func_001A2B30(M2C_UNK);                     /* extern */
s32 func_001CE6E0();                                /* extern */
extern char D_0051FF64[];
extern char D_0051FF68[];
extern char D_0051FF6C[];
extern char D_0051FF70[];
extern char D_0051FF74[];
extern char D_0051FF78[];
extern char D_0051FF7C[];
extern char D_0051FF80[];
extern char D_0051FF84[];
extern char D_0051FF9C[];
extern char D_0051FFA0[];
extern char D_0051FFA4[];
extern char D_00520358[];
extern char D_0052035C[];
extern char D_00520360[];
extern char D_00520376[];
extern M2C_UNK func_001A25E0;
extern M2C_UNK func_001A2D00;
extern M2C_UNK func_001A2F10;
extern M2C_UNK func_001A30D0;

void func_001A2070(void) {
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;

    func_001CE780();
    temp_v0 = func_001515E0(0, 0x4266, 2, 0x40, 0x30);
    (*(s32 *)D_00520358) = temp_v0;
    func_00145750(temp_v0);
    temp_v0_2 = func_001515E0(0, 0x4267, 2, 0x40, 0x30);
    (*(s32 *)D_0052035C) = temp_v0_2;
    func_00145750(temp_v0_2);
    do {

    } while (func_0017FA00(0x124F9, &func_001A25E0, 0, 0) != 1);
    sp40 = 1;
    (*(s32 *)D_0051FF64) = 0;
    sp44 = 0;
    do {

    } while (func_0017F9A0(0x11B1C, &func_001A30D0, &sp40, 8, ((void *)D_00520360)) != 1);
    sp4C = 1;
    (*(s32 *)D_0051FF68) = 0;
    (*(s32 *)D_0051FF6C) = 0;
    (*(s32 *)D_0051FF70) = 0;
    (*(s32 *)D_0051FF74) = 0;
    (*(s32 *)D_0051FF78) = 0;
    (*(s32 *)D_0051FF7C) = 0;
    (*(s16 *)D_00520376) = 0;
    do {

    } while (func_0017F9A0(func_001CE770(), &func_001A2F10, &sp4C, 4, ((void *)D_00520360)) != 1);
    sp38 = 1;
    (*(s32 *)D_0051FF9C) = 0;
    sp3C = 4;
    do {

    } while (func_0017F9A0(func_001CE720(), &func_001A30D0, &sp38, 8, ((void *)D_00520360)) != 1);
    sp30 = 1;
    (*(s32 *)D_0051FFA0) = 0;
    sp34 = 5;
    do {

    } while (func_0017F9A0(func_001CE700(), &func_001A30D0, &sp30, 8, ((void *)D_00520360)) != 1);
    sp28 = 1;
    (*(s32 *)D_0051FFA4) = 0;
    sp2C = 6;
    do {

    } while (func_0017F9A0(func_001CE6E0(), &func_001A30D0, &sp28, 8, ((void *)D_00520360)) != 1);
    func_001A2B30(1);
    temp_s0 = func_001CE760();
    (*(s32 *)D_0051FF80) = 0;
    (*(s32 *)D_0051FF84) = 0;
    sp48 = 1;
    do {

    } while (func_0017F9A0(temp_s0, &func_001A2D00, &sp48, 4, ((void *)D_00520360)) != 1);
    func_001A27A0(1);
}
