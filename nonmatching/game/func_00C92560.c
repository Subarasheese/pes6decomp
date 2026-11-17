/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_0017A670(s32);
extern s32 func_00C8AD60(void);
extern s32 func_00BDA0E0(void);
extern s32 func_00BDA160(void);
extern s32 func_008FD270(void);
extern u8 *D_003EA8AC;
extern u8 D_003EA8A8[];
extern char D_00CCD074[];
extern char D_00591DCD[];

void func_00C92560(void)
{
    u8 *p;
    u8 *q;
    s32 s0;
    s32 r;
    s32 idx;
    s32 v;

    p = D_003EA8AC;
    if (p != 0) {
        *(s32 *)(p + 0x10) = 0;
        p[8] = (p[8] & ~2) | 2;
    }
    if (func_0017A670(0) != 0xC) {
        if (*(u8 *)D_00CCD074 & 1) {
            idx = *(u8 *)D_00591DCD % 2;
            p = D_003EA8AC;
            if (p != 0 && (u32)idx < 2) {
                q = p + idx * 20;
                q[9] = (q[9] & ~8) | ((0 & 1) << 3);
                q[8] = (q[8] & ~1) | 1;
            }
            r = func_00C8AD60();
            p = D_003EA8AC;
            if (p != 0) {
                *(s32 *)(p + 0xC) = r;
                p[8] = (p[8] & ~4) | ((r & 1) << 2);
                *(s32 *)(p + 0x20) = r;
                p[0x1C] = (p[0x1C] & ~4) | ((r & 1) << 2);
            }
        }
    }
    p = D_003EA8AC;
    if (p != 0) {
        *(s32 *)(p + 0x24) = 0;
        p[0x1C] = (p[0x1C] & ~2) | 2;
    }
    if (func_0017A670(0) != 0xC) {
        if (*(u8 *)D_00CCD074 & 1) {
            idx = (*(u8 *)D_00591DCD + 1) % 2;
            p = D_003EA8AC;
            if (p != 0 && (u32)idx < 2) {
                q = p + idx * 20;
                q[9] = (q[9] & ~8) | ((0 & 1) << 3);
                q[8] = (q[8] & ~1) | 1;
            }
            r = func_00C8AD60();
            p = D_003EA8AC;
            if (p != 0) {
                *(s32 *)(p + 0xC) = r;
                p[8] = (p[8] & ~4) | ((r & 1) << 2);
                *(s32 *)(p + 0x20) = r;
                p[0x1C] = (p[0x1C] & ~4) | ((r & 1) << 2);
            }
        }
    }
    if (func_00BDA0E0() == 0) {
        if (func_00BDA160() == 0) return;
    }
    s0 = func_008FD270();
    if (func_0017A670(0) != 0xC) {
        if (*(u8 *)D_00CCD074 & 1) {
            idx = (s0 + *(u8 *)D_00591DCD) % 2;
            v = D_003EA8A8[s0] != 0;
            p = D_003EA8AC;
            if (p != 0 && (u32)idx < 2) {
                q = p + idx * 20;
                q[9] = (q[9] & ~8) | (v << 3);
                q[8] = (q[8] & ~1) | 1;
            }
            r = func_00C8AD60();
            p = D_003EA8AC;
            if (p != 0) {
                *(s32 *)(p + 0xC) = r;
                p[8] = (p[8] & ~4) | ((r & 1) << 2);
                *(s32 *)(p + 0x20) = r;
                p[0x1C] = (p[0x1C] & ~4) | ((r & 1) << 2);
            }
        }
    }
}
