/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_0030F330(void);
extern void func_00333620(s32 a0, s32 a1);
extern s32 func_00BD9C30(void);
extern void func_0031BBE0(s32 a0, s32 a1, s32 a2);
extern void func_00310A50(u8 *a0, s32 a1);
extern void func_0030EE80(f32 *a0);
extern u8 *func_00335370(void);
extern s32 func_0030E6C0(s32 a0);
extern void func_003394E0(s32 a0, s32 a1, s32 a2, s32 a3);
extern void func_003414D0(u8 *a0, s32 a1, s32 a2);
extern f32 func_0030EBB0(s32 a0, s32 a1, f32 f12);
extern s32 func_00340590(f32 a, f32 b);
extern s32 func_003407B0(f32 a, f32 b);
extern s32 func_00340A20(f32 a, f32 b);
extern s32 func_0030FAB0(s32 a0);
extern void func_0030DCC0(f32 *a0, f32 *a1, s32 a2);
extern s32 func_00340880(f32 a, f32 b);
extern s32 func_00310BA0(s32 a0);
extern s32 func_0030EA70(void);
extern s32 func_003395B0(s32 a0);
extern s32 func_00340C80(f32 a);
extern s32 func_00338AD0(s32 a0, s32 a1, s32 a2, s32 a3);
extern void func_00338A60(s32 a0, s32 a1);
extern s32 func_003469F0(char *a0, char *a1, s32 a2);
extern void func_003389F0(s32 a0, s32 a1, s32 a2);
extern s32 func_003389D0(s32 a0, s32 a1);
extern void func_00349210(u8 *a0);
extern void func_00347C90(u8 *a0, s32 a1);
extern void func_003387D0(s32 a0, s32 a1, s32 a2);
extern void func_00348010(void);
extern void func_00356D60(void);
extern void func_00348E70(void);
extern char D_003E61B0[];
extern char D_0058E5B0[];
extern u8 D_003E9F90;
extern u8 D_003E9F94;
extern f32 D_003E9F60;
extern f32 D_003E9F58;
extern f32 D_003E9F5C;

s32 func_00349350(s32 a0) {
    s32 s5, s2, s0, s1, p, q, v;
    u8 *s3;
    f32 buf[8];
    f32 f20, f21;
    void *fn;

    if (func_0030F330() == 0) return 0;
    func_00333620(11, 1);
    D_003E9F90 = 0;
    if (func_00BD9C30() == 0) {
        s5 = *(s32 *)(a0 + 0x3C);
        s3 = *(u8 **)(a0 + 0x4C);
        s2 = *(s32 *)(a0 + 0x50);
        func_0031BBE0(0x20, s5, 4);
        func_00310A50(s3 + 0x15, 1);
        func_00310A50(s3 + 0x16, 2);
        func_0030EE80(buf + 2);
        s0 = s3[0x15];
        func_00335370()[0x1030] = s0;
        s3[0x13] = func_0030E6C0(s3[0x15]);
        func_003394E0(s2, 8, s3[0x13], 2);
        func_003414D0(s3 + 0x14, 3, (s3[0x13] ^ 1) & 0xFF);
        s0 = s3[0x15];
        f21 = func_0030EBB0(s0, 1, buf[4]);
        f20 = func_0030EBB0(s3[0x15], 1, buf[2]);
        if (func_00340590(f20, f21)) {
            *(s32 *)(s3 + 0x28) = 5;
        } else if (func_003407B0(f20, f21)) {
            *(s32 *)(s3 + 0x28) = 4;
        } else if (func_00340A20(f20, f21)) {
            *(s32 *)(s3 + 0x28) = 3;
        } else {
            *(s32 *)(s3 + 0x28) = 2;
        }
        s0 = func_0030FAB0(s3[0x16]) & 0xFF;
        s3[8] = 0;
        for (s1 = 0; s1 < 11; s1++) {
            func_0030DCC0(&buf[7], &buf[6], s0);
            if (func_00340880(buf[7], buf[6])) {
                if ((f32)func_00310BA0(s0) < 3211264.0f) {
                    s3[8] = 1;
                    break;
                }
            }
            s0 = (s0 + 1) & 0xFF;
        }
        s3[s3[0x13] + 5] = func_0030EA70();
        s0 = func_003395B0(s2) - *(s32 *)(s5 + 0x10);
        if (func_00340C80(D_003E9F60) < s0 && s0 < func_00340C80(D_003E9F58) && *(s32 *)(s5 + 0x10) != 0) {
            D_003E9F94 |= 1;
            fn = func_00356D60;
            if (func_00340C80(D_003E9F5C) < s0) {
                D_003E9F94 |= 2;
            }
        } else {
            fn = func_00348010;
        }
        s0 = func_00338AD0(0x80000029, (s32)fn, *(s32 *)(a0 + 8), (s32)D_003E61B0);
        func_00338A60(s0, a0);
        v = s3[0x16];
        q = (v == 0xFF) ? 1 : v % 23;
        v = s3[0x15];
        p = (v == 0xFF) ? 1 : v % 23;
        v = func_003469F0(D_0058E5B0 + p * 0x240, D_0058E5B0 + q * 0x240, s2);
        func_003389F0(s0, 0, v);
        v = func_003389D0(s0, 0);
        func_003389F0(a0, 0, v);
        func_00349210(s3);
        func_00347C90(s3 + 0x2C, a0);
        if (*(s32 *)(s3 + 0x28) == 4) {
            s3[0x17] = *(s32 *)(s3 + (s3[0x13] << 3) + 0x18) < 3;
        } else {
            s3[0x17] = 0;
        }
    }
    func_003387D0(a0, (s32)func_00348E70, (s32)D_003E61B0);
    return 1;
}
