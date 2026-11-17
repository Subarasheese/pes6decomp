/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_0058E5B0[];
extern char D_00591E14[];
extern char D_00591BE4[];
extern u8 D_003EA75C;
extern char *D_003E7574;
extern void func_00AD0A20(void);
extern void func_00286A60(void);
extern s32 func_00208250(s32);
extern void func_001A5F50(s32, s32);
extern void func_001A5E00(s32);
extern s32 func_001A5BB0(s32);
extern s32 func_00BA9430(s32);
extern void func_001A58E0(s32, s32);
extern void func_001AB960(s32, s32);
extern void func_001ABA60(s32);
extern void func_001A7250(s32);
extern void func_001A9970(s32);
extern s32 func_0017F900(void);
extern s32 func_0027B5C0(s32);
extern void func_0027C230(s32, s32);
extern s32 func_0027C990(s32);
extern void func_009E1D30(s32, s32);
extern void func_00152130(s32, s32);

void func_00B63BF0(void) {
    s32 a1;
    s32 r;
    char *p = D_0058E5B0;
    u32 c;
    func_00AD0A20();
    func_00286A60();
    c = (*(u32 *)D_00591E14) + 1;
    a1 = (*(u8 *)D_00591BE4);
    (*(u32 *)D_00591E14) = c;
    if (a1 * 3 < c) {
        func_00152130(1, ((60 / a1) << 5) & 0xFF);
    }
    {
    u8 st = D_003EA75C;
    if (st == 0) {
        r = func_00208250(0xAD);
        func_001A5F50(5, r);
        func_001A5E00(5);
        D_003EA75C = 1;
        return;
    }
    if (st == 1) {
        if (func_001A5BB0(5) == 0) return;
        D_003EA75C = 2;
        goto c2;
    }
    if (st == 2) {
    c2:
        if (((f32 *)D_003E7574)[4] <= 0.0f) {
            r = func_00BA9430(2);
        } else {
            r = func_00BA9430(1);
        }
        *(u8 *)(*(char **)(p + 4) + 0x2C) = 0;
        func_001A58E0(**(s32 **)(p + 4), 0);
        func_001AB960(**(s32 **)(p + 4), r);
        func_001ABA60(**(s32 **)(p + 4));
        func_001A7250(**(s32 **)(p + 4));
        func_001A9970(**(s32 **)(p + 4));
        D_003EA75C = 3;
        return;
    }
    if (st == 3) {
        if (func_0017F900() == 0) return;
        D_003EA75C = 5;
        goto c5;
    }
    if (st == 5) {
    c5:
        r = func_0027B5C0(0x6A);
        func_0027C230(r, 5);
        D_003EA75C = 6;
        return;
    }
    if (st == 6) {
        if (func_0027C990(5) == 0) return;
        if ((*(u8 *)D_00591BE4) * 3 < (*(u32 *)D_00591E14)) {
            func_009E1D30(3, 2);
        } else {
            func_009E1D30(3, 3);
        }
        (*(u32 *)D_00591E14) = 0;
        return;
    }
    }
}
