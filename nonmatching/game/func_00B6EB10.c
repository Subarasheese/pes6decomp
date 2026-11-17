/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_00BD3CF0(f32, f32);
s32 func_00BA87B0(void *, s32);
u32 func_009B3070(u16, u16);
s32 func_00BBB8C0(s32);
u32 func_009B33A0(void *, s32, s32);
u32 func_009B3480(void *, f32, f32);
s32 func_00BBB7F0(s32);
void func_00209A00(void *, s32, s32);
void func_0097A6D0(void *, u16);
void func_00207390(void *, s32);


void func_00B6EB10(u8 **arg0) {
    u8 *p;
    u32 s1;
    u16 saved;
    s32 v;
    s16 k;

    p = arg0[0];
    func_00BD3CF0(*(f32 *)(p + 0x6C), *(f32 *)(p + 0x70));
    if (func_00BA87B0(arg0, 2) != 0) {
        p = arg0[0];
        if ((*(s32 *)(p + 0x94) & 2) && !(*(f32 *)(p + 0xE8) <= 4608.0f) && arg0[1][0x4C] != 2
            && (func_009B3070(*(u16 *)(p + 0x26), *(u16 *)(p + 0x2C)) & 0xFFFF) <= 0x1000
            && func_00BBB8C0(0x64) < 6) {
            arg0[1][0x4C] = 2;
            v = arg0[1][0x4C];
            if (v == 3 || v == 0) {
                *(s16 *)(arg0[0] + 0x18) = 0xB;
            } else if (v == 2 || v == 1) {
                *(s16 *)(arg0[0] + 0x18) = 9;
            }
            return;
        }
    }
    if (func_00BA87B0(arg0, 1) != 0) {
        p = arg0[0];
        if ((*(s32 *)(p + 0x94) & 2) && !(*(f32 *)(p + 0xE8) <= 4608.0f) && arg0[1][0x4C] != 1
            && (func_009B3070(*(u16 *)(p + 0x26), *(u16 *)(p + 0x2C)) & 0xFFFF) <= 0x1000
            && func_00BBB8C0(0x64) < 6) {
            arg0[1][0x4C] = 1;
            v = arg0[1][0x4C];
            if (v == 3 || v == 0) {
                *(s16 *)(arg0[0] + 0x18) = 0xB;
            } else if (v == 2 || v == 1) {
                *(s16 *)(arg0[0] + 0x18) = 9;
            }
            return;
        }
    }
    p = arg0[0];
    s1 = func_009B33A0(p, (s32)*(f32 *)(p + 0x6C), (s32)*(f32 *)(p + 0x70));
    p = arg0[0];
    if (*(s32 *)(p + 0x98) == 0) {
        if (s1 >= 0x10001) {
            k = *(s16 *)(p + 0x14);
            if (k == -1) {
                if (*(f32 *)(p + 0xE8) <= 384.0f && p[0x10] != 0) {
                    goto dd4;
                }
            }
            if (k != 1) {
                return;
            }
            if (!(*(f32 *)(p + 0xE8) <= -1920.0f)) {
                return;
            }
            if (p[0x10] == 0) {
                return;
            }
        }
dd4:
        s1 = func_009B3480(arg0[0], -13465.0f, 0.0f) & 0xFFFF;
        *(u16 *)(arg0[0] + 0x2C) = s1 + func_00BBB7F0(0x1000);
        p = arg0[0];
        saved = *(u16 *)((*(u8 **)(p + 4)) + 0x30);
        *(s32 *)(p + 0x1C) = 0x670;
        func_00209A00(*(u8 **)(arg0[0] + 4), 0x38C, 0);
        func_0097A6D0(arg0[0], *(u16 *)(arg0[0] + 0x2C));
        if (*(u16 *)(*(u8 **)(arg0[0] + 4) + 0x30) != saved) {
            func_00207390(*(u8 **)(arg0[0] + 4), 8);
        }
        *(s16 *)(arg0[0] + 0x18) = 8;
        return;
    }
    if ((func_009B3070(*(u16 *)(p + 0x26), *(u16 *)(p + 0x2C)) & 0xFFFF) >= 0x4000 && s1 < 0x10001) {
        *(s32 *)(arg0[0] + 0x1C) = 0x670;
        s1 = func_009B3480(arg0[0], -13465.0f, 0.0f) & 0xFFFF;
        *(u16 *)(arg0[0] + 0x2C) = s1 + func_00BBB7F0(0x1000);
        func_00209A00(*(u8 **)(arg0[0] + 4), 0x38C, 0);
        func_0097A6D0(arg0[0], *(u16 *)(arg0[0] + 0x2C));
        *(s16 *)(arg0[0] + 0x18) = 8;
        return;
    }
    if (s1 < 0x1001) {
        *(s32 *)(arg0[0] + 0x1C) = 0x670;
        s1 = func_009B3480(arg0[0], -13465.0f, 0.0f) & 0xFFFF;
        *(u16 *)(arg0[0] + 0x2C) = s1 + func_00BBB7F0(0x1000);
        func_00209A00(*(u8 **)(arg0[0] + 4), 0x38C, 0);
        func_0097A6D0(arg0[0], *(u16 *)(arg0[0] + 0x2C));
        *(s16 *)(arg0[0] + 0x18) = 8;
    }
}
