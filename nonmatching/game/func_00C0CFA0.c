/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

f32 func_001CD9E0(f32);
s32 func_00952420(void *, u16, s32, s32);
s32 func_00952A50(u16);
void func_0096D0A0(void *, u16, s32);
u32 func_009B3070(u16, u16);
u32 func_009B33A0(void *, s16, s16);
extern char Pes6MatchPlayers[];

s32 func_00C0CFA0(u8 *arg0, u8 *arg1) {
    u8 *s1;
    s32 idx;
    s32 s4;
    s32 s5;
    s32 d;
    u32 s7;
    u16 s0;
    u16 a, b;
    u8 v;

    v = arg1[0x30];
    s0 = *(u16 *)(arg1 + 0x28);
    idx = (v != 0xFF) ? (v % 23) : 1;
    s1 = (u8 *)Pes6MatchPlayers + idx * 0x240;
    if (arg1[0x2B] == 0) {
        arg1[0x30] = arg0[((arg0[0x13] ^ 1) * 11) + 0x1B4];
        v = arg1[0x30];
        idx = (v != 0xFF) ? (v % 23) : 1;
        s1 = (u8 *)Pes6MatchPlayers + idx * 0x240;
        if (*(u32 *)(arg0 + 0x124) < *(u32 *)(s1 + 0x11C)) {
            arg1[0x30] = arg0[((arg0[0x13] ^ 1) * 11) + 0x1B5];
            v = arg1[0x30];
            idx = (v != 0xFF) ? (v % 23) : 1;
            s1 = (u8 *)Pes6MatchPlayers + idx * 0x240;
        }
        s7 = func_009B3070(*(u16 *)(arg0 + 0x2A), *(u16 *)(s1 + 0x26)) & 0xFFFF;
        arg1[0x2B] = 3;
        a = *(u16 *)(arg0 + 0x2A) - 0x2000;
        b = *(u16 *)(arg0 + 0x2A) + 0x2000;
        s5 = func_00952A50(a) & 0xFF;
        s4 = func_00952A50(b) & 0xFF;
        if ((func_009B3070(a, *(u16 *)(arg0 + 0x26)) & 0xFFFF) < 0x1000) {
            s5 += 10;
        }
        if ((func_009B3070(b, *(u16 *)(arg0 + 0x26)) & 0xFFFF) < 0x1000) {
            s4 += 10;
        }
        if (s5 < s4) {
            arg1[0x2B] = 1;
        } else {
            arg1[0x2B] = 2;
        }
        if (s7 < 0x2000 && *(u32 *)(arg0 + (*(u8 *)s1) * 4 + 0x158) >= 0x100001U) {
            arg1[0x2B] = 3;
        }
        *(s32 *)(arg1 + 0x2C) = (s32)func_001CD9E0((f32)func_009B33A0(arg0, *(s16 *)(arg1 + 4), *(s16 *)(arg1 + 6)));
    }
    d = *(s32 *)(arg1 + 0x2C) - (s32)func_001CD9E0((f32)func_009B33A0(arg0, *(s16 *)(arg1 + 4), *(s16 *)(arg1 + 6)));
    if (d <= 0) {
        d = -d;
    }
    v = arg1[0x2B];
    if (v == 3) {
        s0 = *(u16 *)(arg0 + 0x2A);
        if ((func_009B3070(*(u16 *)(arg0 + 0x26), s0) & 0xFFFF) < 0x800
            && func_00952420(arg0, *(u16 *)(arg0 + 0x2A), 0x2000, 0x240000) == 0
            && d > 0x100) {
            arg1[0x2B] = 0;
        }
    } else if (v == 2) {
        s0 = *(u16 *)(arg0 + 0x2A) + 0x2000;
        if ((func_009B3070(*(u16 *)(arg0 + 0x26), s0) & 0xFFFF) < 0x800
            && func_00952420(arg0, *(u16 *)(arg0 + 0x2A), 0x2000, 0x240000) != 0
            && d > 0x100) {
            arg1[0x2B] = 3;
        }
    } else if (v == 1) {
        s0 = *(u16 *)(arg0 + 0x2A) - 0x2000;
        if ((func_009B3070(*(u16 *)(arg0 + 0x26), s0) & 0xFFFF) < 0x800
            && func_00952420(arg0, *(u16 *)(arg0 + 0x2A), 0x2000, 0x240000) != 0
            && d > 0x100) {
            arg1[0x2B] = 3;
        }
    }
    func_0096D0A0(arg0, s0, 0);
    if ((func_00952A50(s0) & 0xFF) < 0x63) {
        if (*(u32 *)(arg0 + 0x124) >= *(u32 *)(s1 + 0x11C)) {
            return 3;
        }
        return 1;
    }
    return 1;
}
