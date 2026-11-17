/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00591BB0[];
extern char D_00591BB2[];
extern char D_00591BB4[];
extern char D_00591BB6[];
extern char D_00591BB7[];
extern char D_00591BB9[];
extern char D_00591BC4[];
extern char D_00591BC5[];

s32 func_00295290(void);
s32 func_001A3500(s32 a, s32 b, s32 c, s32 d);
s32 func_002D2F90(void);
s32 func_002371A0(s32 a);
s32 func_001A34F0(s32 a);
s32 func_001A34D0(s32 a, s32 b);
s32 func_001A3490(s32 a, s32 b);
s32 func_0021EB30(s32 a);
s32 func_001A34B0(s32 a, s32 b);
s32 func_0021E750(s32 a);
s32 func_00351ED0(s32 a);
s32 func_001A3460(s32 a, s32 b, s32 c);
s32 func_001A3340(s32 a);
s32 func_001A33C0(s32 a);
s32 func_00309420(void);
s32 func_001A33A0(s32 a);

s32 func_002D2C20(void) {
    u8 s0;
    s32 s1;
    s32 s2;
    s32 s3 = 0;
    s32 s4 = 0;
    s32 a0;
    s32 b2;
    s32 b0;

    s0 = *(u8 *)D_00591BB4;
    s2 = *(u8 *)D_00591BB7;
    if (s2 == 2) {
        s1 = 2;
    } else if (s2 == 1) {
        s1 = 1;
    } else if (s2 == 0) {
        s1 = 0;
    }
    s2 = *(u8 *)D_00591BB6 != 0;
    a0 = func_00295290();
    func_001A3500(s0, s1, s2, a0 != 0);
    s1 = func_002D2F90();
    if (s1 == 0xd) {
        if ((u16)func_002371A0(*(u16 *)D_00591BB0) == 8) {
            s1 = 0x14;
        }
        if ((u16)func_002371A0(*(u16 *)D_00591BB0) == 0xf) {
            s1 = 0x16;
        }
    }
    func_001A34F0(s1);
    s2 = *(u8 *)D_00591BC4;
    s1 = *(u8 *)D_00591BC5;
    func_001A34D0(s2, s1);
    if (s2 == 3) {
        s4 = 0;
    } else if (s2 == 2) {
        s4 = 2;
    } else if (s2 == 1) {
        s4 = 4;
    } else if (s2 == 0) {
        s4 = 6;
    }
    if (s1 == 3) {
        s3 = 0;
    } else if (s1 == 2) {
        s3 = 2;
    } else if (s1 == 1) {
        s3 = 4;
    } else if (s1 == 0) {
        s3 = 6;
    }
    func_001A3490(s4, s3);
    s1 = func_0021EB30(0) & 0xff;
    func_001A34B0(s1, func_0021EB30(1) & 0xff);
    s1 = func_0021E750(*(u16 *)D_00591BB0);
    s2 = func_0021E750(*(u16 *)D_00591BB2);
    func_001A3460(s1, s2, func_00351ED0(s0) + 0x3000000);
    func_001A3340(0);
    b2 = *(u16 *)D_00591BB2;
    b0 = *(u16 *)D_00591BB0;
    a0 = 0;
    if (*(u8 *)D_00591BB9 != 0) {
        if (b0 != 0x35 && b2 != 0x35 && b0 != 0x37 && b2 != 0x37) {
            a0 = 1;
        }
    }
    func_001A33C0(a0);
    if (func_00309420() == 1) {
        return func_001A33A0(1);
    }
    return func_001A33A0(0);
}
