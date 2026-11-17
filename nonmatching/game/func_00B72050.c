/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00208210(s32);
extern s32 func_001A5F20(s32);
extern u8 *func_00B2A420(u32);
extern void func_001A58E0(void *, s32);
extern void func_00209A00(void *, s32, s32);
extern void func_00B347F0(void *, void *, s32, s32, f32, f32);
extern s32 func_00BB1310(s32);
extern char D_00591E14[];
extern char Pes6MatchSquads[];
extern char D_00CBBE04[];
extern char D_00CBBE05[];
extern char D_00CBBE08[];
extern char D_00CBBE09[];

void func_00B72050(void) {
    s32 s3;
    s32 i;
    u8 **s1;
    u8 **s2;
    u8 *a0;
    u8 *e;
    u8 t;

    s3 = 0;
    if (func_00208210(func_001A5F20(5)) != 0xB3 && func_00208210(func_001A5F20(5)) != 0xB4) {
        s2 = (u8 **)func_00B2A420(*(u8 *)D_00CBBE04);
        a0 = s2[0];
        if (a0[0] == 1 || a0[0] == 0xC) {
            a0[0x13] = s2[2][0x13];
        }
        (*(u8 **)(s2[0] + 4))[0x2C] = 1;
        func_001A58E0(**(void ***)(s2[0] + 4), 1);
        func_00209A00(*(u8 **)(s2[0] + 4), func_00BB1310(0x13E) & 0xFFFF, 0);
        s2[0][0x66] = 0xFF;
        *(s16 *)(s2[0] + 0x26) = 0x8000;
        s2[0][0x16] = 0x4A;
        *(s16 *)(s2[0] + 0x18) = 0xB;
        *(u8 *)D_00CBBE09 = s2[0][0];
        s1 = (u8 **)func_00B2A420(1);
        for (i = 0; i < 0x16; i++, s1 += 2) {
            a0 = s2[0];
            e = s1[0];
            if (e[0x13] != a0[0x13] && e[0] != a0[0]) {
                (*(u8 **)(e + 4))[0x2C] = 0;
                func_001A58E0(**(void ***)(s1[0] + 4), 0);
            } else if (((u8 *)Pes6MatchSquads)[e[0x12] * 0x6900 + e[0x11] * 0x348 + 0xD4] != 0
                       && (t = e[0]) != 1 && t != 0xC && t != a0[0] && s3 < 2) {
                if (s3 == 0) {
                    (*(u8 **)(e + 4))[0x2C] = 1;
                    (*(u8 **)(s1[0] + 4))[0x2D] = (*(u8 **)(s2[0] + 4))[0x2D];
                    func_001A58E0(**(void ***)(s1[0] + 4), 1);
                    func_00209A00(*(u8 **)(s1[0] + 4), func_00BB1310(0x13F) & 0xFFFF, 0);
                    func_00B347F0(s1, s2, 0, 0, 1.294f, -1.744f);
                    s3 += 1;
                    s1[0][0x66] = 0xFF;
                    s1[0][0x16] = 0x4A;
                    *(s16 *)(s1[0] + 0x18) = 0xB;
                } else if (s3 == 1) {
                    (*(u8 **)(e + 4))[0x2C] = 1;
                    (*(u8 **)(s1[0] + 4))[0x2D] = (*(u8 **)(s2[0] + 4))[0x2D];
                    func_001A58E0(**(void ***)(s1[0] + 4), 1);
                    func_00209A00(*(u8 **)(s1[0] + 4), func_00BB1310(0x140) & 0xFFFF, 0);
                    func_00B347F0(s1, s2, 0, 0, -1.873f, -5.384f);
                    s3 += 1;
                    s1[0][0x66] = 0xFF;
                    s1[0][0x16] = 0x4A;
                    *(s16 *)(s1[0] + 0x18) = 0xB;
                }
            } else if (e[0] != a0[0]) {
                (*(u8 **)(e + 4))[0x2C] = 0;
                func_001A58E0(**(void ***)(s1[0] + 4), 0);
            }
        }
    } else {
        s2 = (u8 **)func_00B2A420(*(u8 *)D_00CBBE05);
        s1 = (u8 **)func_00B2A420(1);
        for (i = 0; i < 0x16; i++, s1 += 2) {
            a0 = s1[0];
            if (a0[0] != s2[0][0]) {
                (*(u8 **)(a0 + 4))[0x2C] = 0;
                func_001A58E0(**(void ***)(s1[0] + 4), 0);
            }
        }
        (*(u8 **)(s2[0] + 4))[0x2C] = 1;
        func_001A58E0(**(void ***)(s2[0] + 4), 1);
        func_00209A00(*(u8 **)(s2[0] + 4), func_00BB1310(0x141) & 0xFFFF, 0);
        s2[0][0x66] = 0xFF;
        s2[0][0x16] = 0x4A;
        *(s16 *)(s2[0] + 0x18) = 0xB;
        *(u8 *)D_00CBBE09 = s2[0][0];
    }
    *(s32 *)D_00591E14 = 0;
    *(u8 *)D_00CBBE08 += 1;
}
