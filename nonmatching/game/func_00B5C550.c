/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"
extern void func_001A5670(f32 a);
extern void func_001AAF40(s32 a, s32 b);
extern void func_00209A00(void *a, s32 b, s32 c);
extern void func_00278C20(s32 a);
extern void func_0027CB60(s32 a);
extern void func_002A96D0(void);
extern void func_00B25220(void);
extern void func_00B27010(s32 a);
extern s32 func_00B2A420(s32 a);
extern void func_00B4A340(s32 a, s32 b);
extern void func_00B4A360(s32 a, s32 b);
extern void func_00B4A380(s32 a, s32 b, s32 c);
extern s32 func_00BEC570(char *a, s32 b);
extern void func_00BF6240(s32 a);
extern s32 func_00BF6260(void);
extern s32 func_00C00D60(s32 a);
extern s32 *D_0058E5B4;
extern s8 D_0058E5C6;
extern s16 D_0058E5C8;
extern char D_0058E7F0[];
extern char D_00592980[];
extern u8 D_00CBCB36;

void func_00B5C550(char *a0, s32 a1) {
    u8 *p;
    s32 i;
    s32 v;
    u32 kk = 0x46086400;
    u32 kb = 0x44B2C000;
    if (D_00CBCB36 == 0) {
        if (func_00BEC570(a0, a1) == 0) {
            p = (u8 *)D_0058E7F0;
            for (i = 0; i < 0x16; i++, p += 0x240) {
                u8 *t = (u8 *)D_00592980 + p[0x12] * 0x6900 + p[0x11] * 0x348;
                if (t[0xD4] != 0 && t[0xF8] == 0) {
                    func_00209A00(*(void **)(p + 4), 0x1BF, 0);
                    *(s8 *)(*(u8 **)(p + 4) + 0x50) = 0;
                    p[0x16] = 0xFD;
                    *(s16 *)(p + 0x18) = 0;
                    if (!(*(f32 *)(p + 0xE8) <= *(f32 *)&kk)) *(f32 *)(p + 0xE8) = *(f32 *)&kk;
                }
            }
        }
    } else {
        func_00B27010(0);
        func_00B25220();
        v = func_00B2A420(0);
        func_00B4A380(v, 0, 0);
        func_00B4A380(v, 1, 0);
        func_00B4A380(v, 2, 0);
        func_00B4A380(v, 3, 0);
        func_00B4A360(v, 0);
        func_00B4A340(v, 0);
        func_001AAF40(*D_0058E5B4, 0);
        D_0058E5C6 = 0xE0;
        D_0058E5C8 = 0;
        func_00209A00(D_0058E5B4, 0x1BF, 0);
        func_002A96D0();
        func_0027CB60(5);
        p = (u8 *)D_0058E7F0;
        for (i = 0; i < 0x16; i++, p += 0x240) {
            u8 *t = (u8 *)D_00592980 + p[0x12] * 0x6900 + p[0x11] * 0x348;
            if (p[0] != func_00BF6260() && t[0xF8] == 0) {
                if (func_00BEC570(D_00592980, p[0x12] * 105) == 0) {
                    func_00209A00(*(void **)(p + 4), 0x1BF, 0);
                    *(s8 *)(*(u8 **)(p + 4) + 0x50) = 0;
                } else if (p[0] != func_00C00D60(0x14) && p[0] != func_00C00D60(0x18)) {
                    func_00209A00(*(void **)(p + 4), 0x1BF, 0);
                    *(s8 *)(*(u8 **)(p + 4) + 0x50) = 0;
                }
            } else if (p[0] == func_00BF6260()) {
                if (func_00BEC570(D_00592980, p[0x12] * 105) == 0 && *(u16 *)(*(u8 **)(p + 4) + 0x30) >= 0x59A) {
                    func_00209A00(*(void **)(p + 4), 0x1BF, 0);
                    *(s8 *)(*(u8 **)(p + 4) + 0x50) = 0;
                }
                *(s8 *)(*(u8 **)(p + 4) + 0x50) = 0;
            }
            func_001AAF40(**(s32 **)(p + 4), 0);
            t = (u8 *)D_00592980 + p[0x12] * 0x6900 + p[0x11] * 0x348;
            if (t[0xD4] != 0) {
                if (p[0] == func_00BF6260()) {
                    if (p[0] == func_00BF6260() && func_00BEC570(D_00592980, p[0x12] * 105) == 0) {
                        p[0x16] = 0xFD;
                        *(s16 *)(p + 0x18) = 0;
                        if (!(*(f32 *)(p + 0xE8) <= *(f32 *)&kk)) *(f32 *)(p + 0xE8) = *(f32 *)&kk;
                    }
                } else if (func_00BEC570(D_00592980, p[0x12] * 105) == 0) {
                    p[0x16] = 0xFD;
                    *(s16 *)(p + 0x18) = 0;
                    if (!(*(f32 *)(p + 0xE8) <= *(f32 *)&kk)) *(f32 *)(p + 0xE8) = *(f32 *)&kk;
                } else if (p[0] != func_00C00D60(0x14) && p[0] != func_00C00D60(0x18)) {
                    p[0x16] = 0xFD;
                    *(s16 *)(p + 0x18) = 0;
                    if (!(*(f32 *)(p + 0xE8) <= *(f32 *)&kk)) *(f32 *)(p + 0xE8) = *(f32 *)&kk;
                }
            }
        }
        func_001A5670(*(f32 *)&kb);
    }
    func_00278C20(0);
    func_00BF6240(1);
}
