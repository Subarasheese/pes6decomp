/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern char D_005E2674[];
extern char D_005E2680[];
extern char D_005E2684[];
extern char D_005E2688[];
extern char D_005E268C[];
extern char D_005E2690[];
extern char D_005E1D20[];
extern char D_005E2520[];
extern char D_005E2522[];
extern char D_00591BE4[];
extern f32 func_002A93B0(void);
extern void func_002A4D50(void);
extern void func_002A9210(void);
extern void func_002A9200(void);
extern void func_002A91F0(void);
extern void func_002A9450(void);
extern void func_002A9470(void);
extern void func_002A94F0(s32 a);
extern void func_002A8BC0(s32 a, f32 b);
extern void func_002A8C00(void);
extern void func_002A8940(s32 a, f32 b);
extern char D_003DA1B0[];
extern void func_002A8B80(s32 a, f32 b);
extern void func_002A93D0(s32 a, f32 b, f32 c);
extern f32 func_002A93C0(void);
extern f32 func_002A88E0(void);
extern f32 func_002A8930(void);
extern f32 func_002A9440(void);
extern f32 func_002A8BF0(void);
extern f32 func_002A4B20(void);
extern s32 func_00BBB8C0(s32 a);
extern s32 func_00BBCB00(void);
extern u32 func_00BBCBC0(void);
extern void func_00BBCB50(u32 a);

void func_002AA130(u32 a0, f32 x)
{
    f32 y, f0, f1, f2, f21, t;
    u32 s0;
    if (a0 >= 26) return;
    if (a0 == 0) return;
    if (a0 == 1) {
        f0 = func_002A93B0();
        func_002A93D0(3, x, f0);
        func_002A4D50();
    }
    else if (a0 == 2) {
        f0 = func_002A93C0();
        func_002A93D0(3, f0, x);
        func_002A4D50();
    }
    else if (a0 == 3) {
        func_002A9450();
    }
    else if (a0 == 4) {
        func_002A9210();
    }
    else if (a0 == 5) {
        func_002A9200();
    }
    else if (a0 == 6) {
        func_002A91F0();
    }
    else if (a0 == 7) {
        func_002A8BC0((s32)D_003DA1B0, 1.5f);
    }
    else if (a0 == 8) {
        if (x <= 30000.0f) { if (x < 200.0f) y = 200.0f; else y = x; } else y = 30000.0f;
        (*(s32 *)D_005E2674) = 1;
        func_002A8940((s32)D_003DA1B0,y);
        func_002A8B80((s32)D_003DA1B0,1.5f);

    }
    else if (a0 == 9) {
        t = func_002A88E0();
        t = x + t;
        if (t <= 30000.0f) { if (t < 200.0f) y = 200.0f; else y = t; } else y = 30000.0f;
        (*(s32 *)D_005E2674) = 1;
        func_002A8940((s32)D_003DA1B0,y);
        func_002A8B80((s32)D_003DA1B0,1.5f);

    }
    else if (a0 == 10) {
        if (func_002A88E0() <= x) return;
        if (x <= 30000.0f) { if (x < 200.0f) y = 200.0f; else y = x; } else y = 30000.0f;
        (*(s32 *)D_005E2674) = 1;
        func_002A8940((s32)D_003DA1B0,y);
        func_002A8B80((s32)D_003DA1B0,1.5f);

    }
    else if (a0 == 11) {
        if (!(func_002A88E0() < x)) return;
        if (x <= 30000.0f) { if (x < 200.0f) y = 200.0f; else y = x; } else y = 30000.0f;
        (*(s32 *)D_005E2674) = 1;
        func_002A8940((s32)D_003DA1B0,y);
        func_002A8B80((s32)D_003DA1B0,1.5f);

    }
    else if (a0 == 12) {
        f21 = func_002A4B20();
        f1 = f21 / func_002A88E0();
        if (f1 <= 1.1f) { if (!(f1 < 0.9090909f)) return; }
        if (f21 <= 30000.0f) { if (f21 < 200.0f) y = 200.0f; else y = f21; } else y = 30000.0f;
        if (x <= 1.0f) x = 1.0f;
        (*(s32 *)D_005E2674) = 1;
        func_002A8940((s32)D_003DA1B0,y);
        func_002A8B80((s32)D_003DA1B0,x);
    }
    else if (a0 == 13) {
        (*(s32 *)D_005E2674) = 1;
        func_002A8940((s32)D_003DA1B0,700.0f);
        func_002A8B80((s32)D_003DA1B0,1.5f);
    }
    else if (a0 == 14) {
        (*(s32 *)D_005E2674) = 1;
        func_002A8940((s32)D_003DA1B0,2000.0f);
        func_002A8B80((s32)D_003DA1B0,1.5f);
    }
    else if (a0 == 15) {
        if (!(func_002A8930() < 2000.0f)) return;
        (*(s32 *)D_005E2674) = 1;
        func_002A8940((s32)D_003DA1B0,2000.0f);
        func_002A8B80((s32)D_003DA1B0,1.5f);
    }
    else if (a0 == 16) {
        if (!(func_002A8930() < 4000.0f)) return;
        t = 2000.0f * (f32)(func_00BBB8C0(8) + 2);
        if (t <= 30000.0f) { if (t < 200.0f) y = 200.0f; else y = t; } else y = 30000.0f;
        (*(s32 *)D_005E2674) = 1;
        func_002A8940((s32)D_003DA1B0,y);
        func_002A8B80((s32)D_003DA1B0,1.5f);

    }
    else if (a0 == 17) {
        if (!(func_002A8930() < 18000.0f)) return;
        t = 2000.0f * (f32)(func_00BBB8C0(5) + 10);
        if (t <= 30000.0f) { if (t < 200.0f) y = 200.0f; else y = t; } else y = 30000.0f;
        (*(s32 *)D_005E2674) = 1;
        func_002A8940((s32)D_003DA1B0,y);
        func_002A8B80((s32)D_003DA1B0,1.5f);

    }
    else if (a0 == 18) {
        (*(f32 *)D_005E2688) = 700.0f;
        (*(f32 *)D_005E2684) = 3000.0f;
        (*(s32 *)D_005E2680) = 0;
        if ((*(f32 *)D_005E1D20) <= 0.0f) {
            if (!((*(u8 *)D_005E2520) & 1)) {
                func_002A8940((s32)D_003DA1B0,3000.0f);
                func_002A8B80((s32)D_003DA1B0,0.2f);
                (*(s32 *)D_005E2674) = 2;
            }
        }
        t = (*(f32 *)D_005E2684);
        if (t <= 30000.0f) { if (t < 200.0f) y = 200.0f; else y = t; } else y = 30000.0f;
        (*(s32 *)D_005E2674) = 1;
        func_002A8940((s32)D_003DA1B0,y);
        func_002A8B80((s32)D_003DA1B0,1.5f);
        (*(s32 *)D_005E2674) = 3;
    }
    else if (a0 == 19) {
        x = 60.0f * x;
        if (x == 0.0f) (*(f32 *)D_005E2690) = 0.0f;
        if (x <= 1.0f) x = 1.0f;
        (*(f32 *)D_005E268C) = 1.0f;
        f0 = 1.0f - func_002A9440();
        f1 = f0 / x;
        (*(f32 *)D_005E2690) = f1;
        if (f1 <= 0.2f) { if (f1 < -0.2f) f0 = -0.2f; else f0 = f1; } else f0 = 0.2f;
        (*(f32 *)D_005E2690) = f0;
    }
    else if (a0 == 20) {
        x = 60.0f * x;
        if (x == 0.0f) (*(f32 *)D_005E2690) = 0.0f;
        if (x <= 1.0f) x = 1.0f;
        (*(f32 *)D_005E268C) = 0.0f;
        f0 = 0.0f - func_002A9440();
        f1 = f0 / x;
        (*(f32 *)D_005E2690) = f1;
        if (f1 <= 0.2f) { if (f1 < -0.2f) f0 = -0.2f; else f0 = f1; } else f0 = 0.2f;
        (*(f32 *)D_005E2690) = f0;
    }
    else if (a0 == 21) {
        x = 60.0f * x;
        if (x == 0.0f) (*(f32 *)D_005E2690) = 0.0f;
        if (x <= 1.0f) x = 1.0f;
        (*(f32 *)D_005E268C) = 0.5f;
        f0 = 0.5f - func_002A9440();
        f1 = f0 / x;
        (*(f32 *)D_005E2690) = f1;
        if (f1 <= 0.2f) { if (f1 < -0.2f) f0 = -0.2f; else f0 = f1; } else f0 = 0.2f;
        (*(f32 *)D_005E2690) = f0;
    }
    else if (a0 == 22) {
        s0 = (u32)func_00BBCB00() & 0xFFFF;
        f1 = (f32)(s32)(s0 - (func_00BBCBC0() & 0xFFFF));
        f0 = x * (f32)(*(u8 *)D_00591BE4);
        if (f1 <= f0) return;
        f21 = (f32)(*(u8 *)D_00591BE4);
        f2 = (f32)func_00BBCBC0();
        f1 = f2 + x * f21;
        if (f1 >= 2147483648.0f) s0 = (u32)(s32)(f1 - 2147483648.0f) | 0x80000000;
        else s0 = (u32)(s32)f1;
        func_00BBCB50(s0 & 0xFFFF);
    }
    else if (a0 == 23) {
        s0 = (u32)func_00BBCB00() & 0xFFFF;
        f1 = (f32)(s32)(s0 - (func_00BBCBC0() & 0xFFFF));
        f0 = x * (f32)(*(u8 *)D_00591BE4);
        if (!(f1 < f0)) return;
        f21 = (f32)(*(u8 *)D_00591BE4);
        f2 = (f32)func_00BBCBC0();
        f1 = f2 + x * f21;
        if (f1 >= 2147483648.0f) s0 = (u32)(s32)(f1 - 2147483648.0f) | 0x80000000;
        else s0 = (u32)(s32)f1;
        func_00BBCB50(s0 & 0xFFFF);
    }
    else if (a0 == 24) {
        if ((*(u8 *)D_005E2522) == 0x1D) return;
        func_002A9470();
        if (!(func_002A8BF0() < 0.5f)) return;
        func_002A8C00();
    }
    else if (a0 == 25) {
        func_002A94F0(0x100);
    }
}
