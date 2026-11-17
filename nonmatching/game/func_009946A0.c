/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_00905270(u8 *);
extern s32 func_00952420(void *, u16, s32, s32);
extern s32 func_009909D0(void *, s32);
extern s32 func_00992EF0(void *);
extern s32 func_00993090(void *, u8, void *);
extern s32 func_009943D0(void *);
extern s32 func_00AFBAB0(u8);
extern u8 *D_003E7A08;
extern char D_0058E5B0[];
extern char D_0058E5C3[];

s32 func_009946A0(u8 *arg0, s32 arg1) {
    s32 v0;
    s32 a0;
    u8 t;
    u8 *s0;
    s32 s2;
    u8 a1;

    v0 = 0;
    if (D_003E7A08[8] != 0) {
        if (func_009909D0(arg0, 0x900000) & 0xFF) {
            t = D_003E7A08[8];
            if (t != 0xFF) {
                a0 = t % 23;
            } else {
                a0 = 1;
            }
            if (arg0[0x13] != *(u8 *)(D_0058E5C3 + a0 * 0x240)) {
                v0 = 1;
            }
        }
    }
    if (v0 & 0xFF) {
        if (func_009943D0(arg0) == 0) {
            *(s32 *)(D_003E7A08 + 0x284) = 0xA;
            D_003E7A08[0x28B] = 0;
            t = arg0[0x16];
            if (t == 13) {
                D_003E7A08[0x2A4] = 3;
            } else if (t == 12) {
                D_003E7A08[0x2A4] = 2;
            } else {
                D_003E7A08[0x2A4] = 1;
            }
            if (*(s32 *)(D_003E7A08 + 4) == 1) {
                D_003E7A08[0x2A4] = 4;
            }
            D_003E7A08[0x2A5] = 1;
            if (!(func_009909D0(arg0, 0x100000) & 0xFF) && func_00952420(arg0, *(u16 *)(arg0 + 0x120), 0x2000, 0x240000) != 0) {
                D_003E7A08[0x2A5] = 2;
            }
            if (!(func_009909D0(arg0, 0x240000) & 0xFF) && func_00952420(arg0, *(u16 *)(arg0 + 0x120), 0x2000, 0x400000) != 0) {
                D_003E7A08[0x2A5] = 3;
            }
            D_003E7A08[0x2A6] = (D_003E7A08[0x2A6] & ~3) | (func_00992EF0(arg0) & 3);
            t = D_003E7A08[8];
            v0 = 0;
            if (t != 0 && t != 0xFF) {
                if (t == 0xFF) {
                    a0 = 1;
                } else {
                    a0 = t % 23;
                }
                s0 = (u8 *)(D_0058E5B0 + a0 * 0x240);
                s2 = func_00AFBAB0(*s0) & 0xFF;
                if (s2 != (func_00AFBAB0(arg0[0]) & 0xFF) && *(s32 *)(D_003E7A08 + 4) == 1 && D_003E7A08[0x25] == 4 && func_00905270(s0) != 0) {
                    v0 = 1;
                }
            }
            a1 = D_003E7A08[0x2A6];
            D_003E7A08[0x2A6] = (a1 & ~4) | ((v0 & 1) * 4);
            D_003E7A08[0x2A6] = (D_003E7A08[0x2A6] & ~0x18) | ((func_00993090(arg0, a1, D_003E7A08) & 3) * 8);
            t = arg0[((arg0[0x13] ^ 1) * 0xB) + 0x1B4];
            if (t == 0xFF) {
                a0 = 1;
            } else {
                a0 = t % 23;
            }
            s0 = (u8 *)(D_0058E5B0 + a0 * 0x240);
            v0 = 0;
            if (s0[0x16] == 0x22 || s0[0x16] == 0x21) {
                if (*(u32 *)(arg0 + s0[0] * 4 + 0x158) < 0x40000U) {
                    v0 = 1;
                }
            }
            D_003E7A08[0x2A6] = (D_003E7A08[0x2A6] & ~0x20) | ((v0 & 1) << 5);
            return 1;
        }
        if (arg1 != 0) {
            return 0;
        }
        *(s32 *)(D_003E7A08 + 0x284) = 0xF;
        D_003E7A08[0x28B] = 0;
        if (arg1 != 0) {
            D_003E7A08[0x2A4] = 2;
        } else {
            D_003E7A08[0x2A4] = 1;
        }
        return 1;
    }
    if (*(s32 *)(D_003E7A08 + 0x284) == 0) {
        *(s32 *)(D_003E7A08 + 0x284) = 0x10;
    }
    return 0;
}
