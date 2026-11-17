/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern u8 *D_003E7574;
extern u8 *D_003E7A08;
extern char D_005926E4[];
extern char D_005926E6[];
extern char D_005926D8[];
extern char D_00591E4C[];
extern char D_00591E19[];
extern char D_00591E53[];
extern char D_00591E4F[];
extern char D_00591F30[];
extern char D_00591F38[];
extern char D_0058E5B0[];

u32 func_009B33A0(void *p, s32 a, s32 b);
u32 func_009B30B0(u32 a, u32 b);
u32 func_009B3480(void *p, f32 a, f32 b);
u32 func_00AB38D0(void *p);
u32 func_00A9BA00(void *p);
u32 func_0098ED30(u32 a);
f32 func_001CD9E0(f32 x);

s32 func_00A1D080(u8 *A, u8 *B, u8 *a2, s32 s0, s32 s1, s32 a5, s32 s5, s32 s2, s32 stk0)
{
    u8 c;
    s32 s6;
    s32 s7;
    u8 *fp;
    s32 v;
    u32 k;
    u32 idx;
    u32 g;
    u32 x;
    u32 r;

    if (A[0x16] == 0x14) return 1;
    r = func_009B33A0(B, (s32)*(f32 *)(D_003E7574 + (u8)D_005926E4[0] * 4 + 0x47C),
                      (s32)*(f32 *)(D_003E7574 + (u8)D_005926E4[0] * 4 + 0xB7C));
    if (!(r < 0x40000) && stk0 < s2 && B[0x1D5]) return 0;
    if (*(u32 *)(A + 0x114) < 0x181) return 0;
    c = D_00591E4C[0];
    if (c == 0) {
        if (*(f32 *)D_005926D8 <= (f32)(u8)D_005926E4[0]) return 0;
    }
    v = (s32)*(f32 *)(B + 0xE0);
    if (v <= 0) v = -v;
    if (!((f32)v <= 13593.0f)) return 0;
    v = (s32)*(f32 *)(B + 0xE8);
    if (v <= 0) v = -v;
    if (!((f32)v <= 8793.0f)) return 0;
    if (B[0] == c) return 0;
    x = *(u16 *)(*(u8 **)(B + 4) + 0x30);
    if (x == 0x70 || x == 0x29E) return 0;
    k = func_00AB38D0(B);
    if (k == 0x1A || k == 0x14 || k == 0x11) return 0;
    if (k == 6 || k == 5) {
        if (*(u16 *)(B + 0x18) < 0x80) return 0;
    } else if (k == 0x25 || k == 0x24 || k == 0x28 || k == 0x27 || k == 0x26) {
        if (B[0] == (u8)D_00591E19[0]) return 0;
    }
    r = func_00A9BA00(A);
    if ((s32)r < 0x1900001 && s2 < s5) return 1;
    if (stk0 < s5 && s2 < stk0) return 1;
    x = func_009B30B0(*(u16 *)(A + 0x26), *(u16 *)(A + 0x10C)) & 0xFFFF;
    if ((s32)x < 0x41 && *(u32 *)(A + 0x114) < 0x140) return 0;
    k = func_00AB38D0(A);
    if (!(k == 6 || k == 8 || k == 5 || k == 0x41 || k == 10 || k == 9 || k == 4)) {
        if (s0 >= 0x24001) {
            if (*(u32 *)(B + 0x110) < 0x19000) return 1;
        }
    }
    if (D_00591E4C[0] == 0 && *(u16 *)(D_003E7574 + 0x84) != 1) goto L478;
    /* D5A8 */
    k = func_0098ED30(A[0]) & 0xFF;
    if (k < 6) {
        if (k < 2) {
            g = (u8)D_00591E53[A[0x13] * 2];
            idx = (g == 0xFF) ? 1 : (u32)(s32)g % 23;
            x = (u8)D_0058E5B0[idx * 0x240 + 0x1D5];
            if (x == 0) goto L734;
            idx = (x == 0xFF) ? 1 : (u32)(s32)x % 23;
            if ((u8)D_0058E5B0[idx * 0x240 + 0x1D4] == 3) return 0;
        } else if (k < 4) {
            if (D_003E7A08[A[0x13] ^ 1] == 0) goto L734;
            g = (u8)D_00591E53[A[0x13] * 2];
            idx = (g == 0xFF) ? 1 : (u32)(s32)g % 23;
            x = (u8)D_0058E5B0[idx * 0x240 + 0x1D5];
            if (x == 0) goto L734;
            idx = (x == 0xFF) ? 1 : (u32)(s32)x % 23;
            if ((u8)D_0058E5B0[idx * 0x240 + 0x1D4] == 3) return 0;
        }
    }
L734:
    g = (u8)D_00591E4F[(A[0x13] ^ 1) * 2];
    idx = (g == 0xFF) ? 1 : (u32)(s32)g % 23;
    s7 = (s32)D_003E7574;
    fp = (u8 *)D_0058E5B0 + idx * 0x240;
    s6 = (u8)D_005926E6[0] << 2;
    r = func_009B33A0(A, (s32)*(f32 *)(D_003E7574 + s6 + 0x47C), (s32)*(f32 *)(D_003E7574 + s6 + 0xB7C));
    s6 = r;
    x = func_009B33A0(fp, (s32)*(f32 *)(D_003E7574 + ((u8)D_005926E6[0] << 2) + 0x47C),
                      (s32)*(f32 *)(D_003E7574 + ((u8)D_005926E6[0] << 2) + 0xB7C));
    if (!((u32)s6 < x)) goto L478;
    if (!(s0 < s1 + 0x100)) goto L478;
    return 0;

L478:
    {
        s32 ns1 = (s32)func_001CD9E0((f32)s0);
        s32 ns0 = (s32)func_001CD9E0((f32)s1);
        s6 = (s32)func_001CD9E0((f32)a5);
        s1 = ns1;
        s0 = ns0;
    }
    if (B[0x10] == 0 && s6 < s0 + 0x600) return 0;
    if (s6 < s0) {
        u32 idx2 = *a2;
        if (*(u32 *)(A + 0x158 + idx2 * 4) < *(u32 *)(B + 0x158 + idx2 * 4)) {
            f32 f3 = (f32)(s32)*(s16 *)(A + 0x14);
            if (f3 * *(f32 *)(A + 0xE0) < 256.0f + f3 * *(f32 *)(D_003E7574 + 0x47C)) return 0;
        }
    }
    k = B[0x16];
    if (k == 0x10 || k == 0x14 || k == 0x43 || k == 0x18) return 0;
    if (s5 < s2 + 8) return 0;
    /* D808 */
    s7 = *(u16 *)(A + 0x10C);
    fp = (u8 *)(func_009B3480(A, *(f32 *)(D_003E7574 + 0x1454), *(f32 *)(D_003E7574 + 0x145C)) & 0xFFFF);
    if (*(s32 *)D_00591F30 != 0x7FFF) {
        x = func_009B30B0(*(u16 *)(D_003E7574 + 0x58), s7) & 0xFFFF;
        if ((s32)x >= 0x60) {
            x = func_009B30B0(*(u16 *)(D_003E7574 + 0x58), (u32)fp) & 0xFFFF;
            if ((s32)x >= 0x60) {
                x = *(u16 *)(D_003E7574 + 0x84);
                if (!(x == 0xB || x == 8)) return 0;
            }
        }
    }
    /* D834 */
    if (*(s32 *)D_00591F38 != 0x7FFF && s1 < s0 + 0x180) return 0;
    if (D_00591E4C[0] == 0 &&
        (*(u16 *)(D_003E7574 + 0x84) != 1 || s0 < 0x200)) {
        if (s0 + 0x600 < s1) {
            if (*(u32 *)(A + 0x158 + B[0] * 4) >= 0x90000) return 1;
        }
        if (s0 + 0x100 < s1) {
            if (*(u32 *)(B + 0x110) < *(u32 *)(A + 0x110)) return 1;
        }
    }
    /* D8CC */
    if (s6 < s1) {
        if (s5 < s2) {
            x = func_009B30B0(*(u16 *)(D_003E7574 + 0x58), s7) & 0xFFFF;
            if ((s32)x >= 0x70) return 0;
        }
        k = A[0x16];
        if ((k == 0x10 || k == 0x14 || k == 0x18) && D_00591E4C[0] != 0) {
            s32 t0 = func_009B30B0(*(u16 *)(D_003E7574 + 0x5C), *(u16 *)(A + 0x10C)) & 0xFFFF;
            x = func_009B30B0(*(u16 *)(D_003E7574 + 0x5C), *(u16 *)(B + 0x10C)) & 0xFFFF;
            if (t0 < (s32)x) return 1;
        }
    }
    /* D90C */
    if (D_00591E4C[0] == 0) {
        v = (s32)*(f32 *)(B + 0xE0);
        if (v <= 0) v = -v;
        if (!((f32)v <= 9241.0f)) {
            v = (s32)*(f32 *)(B + 0xE8);
            if (v <= 0) v = -v;
            if ((f32)v < 5160.0f) return 1;
        }
    }
    if (A[0] == (u8)D_00591E19[0]) {
        f32 f2 = (f32)(s32)*(s16 *)(A + 0x14);
        if (f2 * *(f32 *)(A + 0xE0) < f2 * *(f32 *)(D_003E7574 + 0x1454) && s1 < s6) return 0;
    }
    return 1;
}
