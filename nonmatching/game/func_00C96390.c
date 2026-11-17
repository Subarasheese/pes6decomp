/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00BBB8C0(s32 n);
extern s32 func_00C97870(void);
extern u8 func_00BF6270(void);
extern u8 func_00BF6260(void);
extern void func_00BBC510(u8 a, s32 b, s32 c, f32 x, f32 y);
extern void func_002A93D0(s32 a, f32 x, f32 y);
extern char D_00CA9290[];
extern char D_00CA9294[];
extern char D_00CA9298[];
extern char D_00CA929C[];
extern char D_00CA92A0[];
extern s16 D_003EA8C4;
extern char D_00592740[];

void func_00C96390(void) {
    f32 tab[5];
    s32 s1;
    u8 s0;
    D_003EA8C4 = 0;
    tab[0] = *(f32 *)D_00CA9290;
    tab[1] = *(f32 *)D_00CA9294;
    tab[2] = *(f32 *)D_00CA9298;
    tab[3] = *(f32 *)D_00CA929C;
    tab[4] = *(f32 *)D_00CA92A0;
    if (func_00BBB8C0(100) < 50) {
        if (func_00BBB8C0(100) < 71) {
            s1 = ((s32 *)tab)[func_00BBB8C0(5)];
        } else {
            s1 = func_00C97870();
        }
        s0 = func_00BF6270();
        func_00BBC510(s0, 29, s1, (f32)(func_00BBB8C0(1500) + 1000), 6.0f);
        *(u8 *)D_00592740 = 14;
    } else {
        if (func_00BBB8C0(100) < 71) {
            s1 = ((s32 *)tab)[func_00BBB8C0(5)];
        } else {
            s1 = func_00C97870();
        }
        s0 = func_00BF6260();
        func_00BBC510(s0, 29, s1, (f32)(func_00BBB8C0(800) + 1000), 6.0f);
        func_002A93D0(3, 0.7f, 0.0f);
        *(u8 *)D_00592740 = 15;
    }
}
