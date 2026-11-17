/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern s32 func_00BF6270();
extern s32 func_00B2A420(s32);
extern void func_00AD0A20();
extern s32 func_00BF6280();
extern void func_00286A60();
extern s32 func_00152130(s32, s32);
extern void func_00BA92A0(s32);
extern s32 func_00BA91C0();
extern void func_009E1CB0(s32);
extern char D_00591BE4[];
extern char D_00591E14[];

void func_00B69CA0(void) {
    u8 *s0;
    s32 m;
    u32 b;
    s32 cap;

    s0 = (u8 *)func_00B2A420(func_00BF6270());
    func_00AD0A20();
    if (func_00BF6280() != 5) {
        func_00286A60();
    }
    if (func_00152130(0, (u8)((60 / (*(u8 *)D_00591BE4)) << 5)) != 0) {
        func_00BA92A0(func_00BF6270());
        if ((func_00BA91C0() & 0x1008) != 0) {
            m = func_00BF6280();
            if (m == 5) (*(u32 *)D_00591E14) = (*(u8 *)D_00591BE4) * 3;
            else if (m == 0x12) (*(u32 *)D_00591E14) = (*(u8 *)D_00591BE4) << 1;
            else if (m == 6) (*(u32 *)D_00591E14) = (*(u8 *)D_00591BE4) << 2;
            else if (m == 7) (*(u32 *)D_00591E14) = (u32)(3.5f * (f32)(*(u8 *)D_00591BE4));
            else if (m == 8) (*(u32 *)D_00591E14) = (u32)(2.5f * (f32)(*(u8 *)D_00591BE4));
            else if (m == 4) (*(u32 *)D_00591E14) = (*(u8 *)D_00591BE4) << 1;
            else if (m == 3) (*(u32 *)D_00591E14) = (u32)(2.5f * (f32)(*(u8 *)D_00591BE4));
            else (*(u32 *)D_00591E14) = (*(u8 *)D_00591BE4) * 3;
        }
    }
    (*(u32 *)D_00591E14) = (*(u32 *)D_00591E14) + 1;
    m = func_00BF6280();
    b = (*(u8 *)D_00591BE4);
    if (m == 5) cap = b * 3;
    else if (m == 0x12) cap = b << 1;
    else if (m == 6) cap = b << 2;
    else if (m == 7) cap = (s32)(3.5f * (f32)b);
    else if (m == 8) cap = (s32)(2.5f * (f32)b);
    else if (m == 4) cap = b << 1;
    else if (m == 3) cap = (s32)(2.5f * (f32)b);
    else cap = b * 3;
    if (*(u8 *)(*(s32 *)(s0 + 4) + 0x4C) == 0x32) {
        cap = (s32)((f32)cap - 0.5f * (f32)b);
    }
    if ((*(u32 *)D_00591E14) >= (u32)cap) {
        func_009E1CB0(3);
    }
}
