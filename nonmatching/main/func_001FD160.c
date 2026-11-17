/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_0059274A[];
extern char D_00592800[];
extern char D_0058E5B0[];
extern char D_00592A78[];
extern char D_00591DB5[];
extern char D_00591F24[];
extern char D_00591E4C[];
extern char D_00CB62B8[];
extern s16 D_003E99AC;
extern s16 D_003E99B0;
extern u16 D_003E99B4;
extern s32 D_003E999C;
extern u8 D_003E99A4;
extern s32 D_003E99A8;

void func_002871C0(f32 *a0);
void func_001A5670(f32 a0);
s32 func_009B45F0(void);
s32 func_00270570(void);
s32 func_009B4080(void);
void func_00270530(void *a0, f32 *a1);
s32 func_00270500(void *a0);
s32 func_009B34C0(f32 a, f32 b, f32 c, f32 d);
s32 func_001FDBF0(void *a0);
s32 func_00BBB990(s32 a0, s32 a1);
s32 func_00BBB9C0(s32 a0, s32 a1);
s32 func_009E1C90(s32 a0);
s32 func_001F87C0(void);
void func_00154380(s32 a0);
f32 func_0011D138(f32 a0);
f32 func_0011D468(f32 a0);

void func_001FD160(char *s4) {
    f32 va[4];
    f32 vb[4];
    f32 vc[4];
    s32 i;
    s32 s6 = 0;
    s32 s2 = 0;
    s32 s5;
    s32 a0;
    char *s1;
    s32 s0;
    s32 s3;
    f32 f20, f21;
    s32 tgt;
    s32 direct;
    s32 post = -1;

    func_002871C0(vc);
    func_001A5670(600.0f);
    *(u16 *)D_0059274A = 0x4000;
    for (i = 0; i < 8; i++) {
        u8 *p = (u8 *)D_00592800 + i * 40;
        if (p[16] == 255) continue;
        if (p[0] == 8) continue;
        s6 = p[0];
        s2 = p[16];
        break;
    }
    if (func_009B45F0() != 0 || func_00270570() != 0) {
        s2 = func_009B4080() & 0xff;
    }
    s5 = s2 & 0xff;
    if (s5 == 255) a0 = 1; else a0 = s5 % 23;
    s1 = D_0058E5B0 + a0 * 576;
    func_00270530(s1, vb);
    f21 = vb[0];
    f20 = vb[2];
    s0 = func_00270500(s1) & 0xffff;
    if (func_009B45F0() != 0 || func_00270570() != 0) {
        if (s2 == 0) {
            f32 f14 = vc[0];
            f32 f15 = vc[2];
            f21 = f14;
            f20 = f15;
            if ((f32)D_003E99AC == f14 && (f32)D_003E99B0 == f15) {
                s0 = D_003E99B4;
            } else {
                s0 = func_009B34C0((f32)D_003E99AC, (f32)D_003E99B0, f14, f15) & 0xffff;
            }
            D_003E99B4 = s0;
            D_003E99AC = (s32)vc[0];
            D_003E99B0 = (s32)vc[2];
        }
    }
    if (func_001FDBF0(s4) == 0) return;
    {
        u32 i1 = (u8)s1[17];
        u32 i2 = (u8)s1[18];
        if (*(u8 *)(D_00592A78 + i2 * 26880 + i1 * 840) != 0) {
            func_00270530(s1, va);
            s0 = (va[2] <= 8729.0f) ? 0xc000 : 0x4000;
            *(f32 *)(s4 + 16) = va[0] + (f32)func_00BBB990(s0 & 0xffff, 2048);
            *(u32 *)(s4 + 20) = 0xc27647ae;
            *(f32 *)(s4 + 24) = va[2] + (f32)func_00BBB9C0(s0 & 0xffff, 2048);
            *(f32 *)s4 = va[0] - (f32)func_00BBB990(s0 & 0xffff, 1104);
            *(u32 *)(s4 + 4) = 0xc449a47b;
            *(f32 *)(s4 + 8) = va[2] - (f32)func_00BBB9C0(s0 & 0xffff, 1104);
            return;
        }
    }
    func_009E1C90(1);
    s3 = 1;
    if (D_003E999C != 0) {
        D_003E999C = 0;
        s3 = 0;
    } else {
        u8 m;
        if (*(s8 *)D_00591DB5 != 0) s3 = 0;
        m = *(u8 *)D_00591F24;
        if (m == 2 || m == 1 || m == 3 || m == 6) {
            s32 c;
            if (func_009B45F0() != 0) c = 0;
            else if (func_00270570() != 0) c = 0;
            else if ((func_009E1C90(1) & 0xff) != 14) c = 0;
            else c = ((func_009E1C90(2) & 0xff) == 16);
            if (c != 0 && func_001F87C0() == 0) s3 = 0;
        }
    }
    if (s5 != D_003E99A4) s3 = 0;
    direct = 0;
    tgt = 0;
    if (*(u8 *)D_00591E4C == s5) {
        if (*(u16 *)(*(char **)(s1 + 4) + 48) == 89) {
            D_003E99A8 = *(u16 *)(s1 + 46);
            direct = 2;
        } else {
            tgt = s0 & 0xffff;
        }
    } else {
        s32 a0b = s6 & 0xff;
        if ((*(s32 *)(D_00CB62B8 + a0b * 24) & 0x400) != 0
            && *(s8 *)D_00591DB5 == 0
            && *(u8 *)(D_00592800 + 3 + a0b * 40) == 0) {
            tgt = s0 & 0xffff;
            post = a0b;
        } else {
            tgt = func_009B34C0(f21, f20, vc[0], vc[2]) & 0xffff;
        }
    }
    if (direct == 0) {
        if (s3 == 0) {
            D_003E99A8 = tgt;
        } else {
            s32 a1 = D_003E99A8;
            s32 a0s = a1 - (tgt + 0x10000);
            s32 a3 = a1 - tgt;
            s32 x;
            s32 ab0 = a0s <= 0 ? -a0s : a0s;
            s32 ab3 = a3 <= 0 ? -a3 : a3;
            if (ab0 < ab3) {
                x = a0s;
            } else {
                a0s = (a1 + 0x10000) - tgt;
                ab0 = a0s <= 0 ? -a0s : a0s;
                if (ab0 < ab3) x = a0s; else x = a3;
            }
            D_003E99A8 = (s32)((f32)a1 - (f32)x / 25.0f);
        }
    }
    if (post >= 0) func_00154380(post);
    {
        s32 v1 = D_003E99A8;
        if (v1 >= 0x10001) {
            D_003E99A8 = v1 - 0x10000;
        } else if (v1 < 0) {
            D_003E99A8 = v1 + 0x10000;
        }
    }
    if (!(f21 <= 13465.0f)) f21 = 13465.0f;
    else if (f21 < -13465.0f) f21 = -13465.0f;
    if (!(f20 <= 8729.0f)) f20 = 8729.0f;
    else if (f20 < -8729.0f) f20 = -8729.0f;
    *(f32 *)s4 = f21 - 2384.0f * func_0011D138(3.14159274f * ((f32)(0xffff - D_003E99A8) / 32768.0f));
    *(u32 *)(s4 + 4) = 0xc4610000;
    *(f32 *)(s4 + 8) = f20 - 2384.0f * func_0011D468(3.14159274f * ((f32)(0xffff - D_003E99A8) / 32768.0f));
    *(f32 *)(s4 + 16) = f21 + 2304.0f * func_0011D138(3.14159274f * ((f32)(0xffff - D_003E99A8) / 32768.0f));
    *(u32 *)(s4 + 20) = 0xc0a00000;
    *(f32 *)(s4 + 24) = f20 + 2304.0f * func_0011D468(3.14159274f * ((f32)(0xffff - D_003E99A8) / 32768.0f));
    D_003E99A4 = s2;
}
