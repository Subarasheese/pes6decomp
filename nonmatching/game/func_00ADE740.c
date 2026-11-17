/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern void func_00207390(void *, s32);
extern void func_00209A00(void *, s32, s32);
extern s32 func_00288670(s32, s32);
extern s32 func_009B3070(s32, s32);
extern s32 func_009B30B0(s32, s32);
extern s32 func_009B32D0(s32, s32, s32);
extern void func_009B3500(void *, s32, s32);
extern s32 func_009F4DC0(s32, f32);
extern void func_00A10250(void *);
extern s32 func_00A1C2A0(void *, s32, s32);
extern s32 func_00A22C50(void *, s32, s32, s32, s32, s32, s32, s32, f32);
extern s64 func_00A9BA00(void);
extern void func_00AA3210(void *, f32, f32);
extern void func_00AADED0(void *, s32, s32, s32, s32);
extern s32 func_00AB3B70(void *, s32, s32);
extern f32 func_00AB3C60(void *, s32);
extern f32 func_00AB4270(void *);
extern s32 func_00B04290(void *, s32, s32, s32, s32, f32);
extern s32 func_00B044D0(s32, s32, s32);
extern s32 func_00BBB780(s32);
extern s32 func_00BBB8C0(s32);
extern u8 *D_003E7574;
extern u8 D_00591E4C;
extern char D_00591E70[];
extern char D_00592980[];


s32 func_00ADE740(u8 *arg0, s32 arg1, u16 arg2, s32 arg3, u16 arg4, s32 arg5, s32 arg6) {
    u16 spEE = arg2;
    u16 spEC = arg4;
    s32 spE8 = arg5;
    s32 spE4 = arg6;
    s64 spB0;
    s32 spC0;
    s32 spD0;
    f32 f20;
    s32 fp, s0, s2, s3, s5, s7, a3, a4, v;
    u8 *a2;

    spB0 = func_00A9BA00();
    f20 = func_00AB4270(arg0);
    spC0 = spEE;
    fp = ((((arg3 & 0xFFFF) - spC0) + 0x10000) & 0xFFFF) < 0x8001;
    if (func_00A1C2A0(arg0, func_009F4DC0(0xC, f20), 0xC400) != 0) return 0;
    s0 = func_009F4DC0(0xE, f20);
    if ((func_009B30B0(spEE, *(u16 *)(D_003E7574 + 0x58)) & 0xFFFF) < 0x41 &&
        *(s32 *)(D_003E7574 + (s0) * 4 + 0x10BC) < -0xBC0)
        return 0;
    func_00AA3210(arg0, *(f32 *)(D_003E7574 + (s0) * 4 + 0x47C), *(f32 *)(D_003E7574 + (s0) * 4 + 0xB7C));
    s3 = 4;
    spD0 = arg1 & 0xFF;
loop:
    s0 = func_009F4DC0(0x10 - s3, f20);
    v = func_009B3070(arg3, spEE) & 0xFFFF;
    if (spEC < v) spEC = v;
    if (spE4 == 0) {
        s5 = ((D_00592980 + arg0[0x12] * 0x6900 + arg0[0x11] * 0x348)[0x68] & 1) & 1;
        if (fp != s5 && spEC >= 0x800 && spEC < 0x1801) {
            s2 = 0xF6;
            s7 = arg3 & 0xFFFF;
            goto L9A8;
        }
    }
    if (spEC <= 0x1000) goto LDE8;
    if (spEC < 0x1801 && spD0 == fp) goto LDE8;
    a2 = (u8 *)(s32)*(u16 *)(arg0 + 0x26);
    fp = ((((s32)a2 - spC0) + 0x10000) & 0xFFFF) < 0x8001;
    if (spE4 == 1 && spD0 != fp) {
        s2 = 0xF6;
        s7 = arg3 & 0xFFFF;
        s5 = spD0;
        goto L9A8;
    }
    s7 = func_009B32D0(spEE, arg3, func_00B044D0(0xFB, 0x2D, (s32)a2) & 0xFFFF) & 0xFFFF;
    s2 = 0xFB;
    s5 = fp;
    goto L9A8;
LDE8:
    s5 = spD0;
    s2 = 0xFA;
    s7 = arg3 & 0xFFFF;
L9A8:
    func_009B3500(arg0, s2, 0);
    if (spB0 >= 0x1440001) {
        if ((func_009B30B0(*(u16 *)(arg0 + 0x26), *(u16 *)(D_003E7574 + 0x58)) & 0xFFFF) >= 0x11 &&
            *(s32 *)(D_003E7574 + (s0) * 4 + 0x10BC) >= 0) {
            if (arg0[0] != D_00591E4C) goto L9D0;
        }
        if (!(*(f32 *)(D_003E7574 + (s0) * 4 + 0x7FC) <= 4.0f + *(f32 *)D_00591E70)) goto LDBC;
    }
L9D0:
    if (spB0 >= 0x240001) {
        if ((func_009B30B0(*(u16 *)(arg0 + 0x26), *(u16 *)(D_003E7574 + 0x58)) & 0xFFFF) < 0x11 &&
            *(s32 *)(D_003E7574 + (s0) * 4 + 0x10BC) < 0x2F0) {
            if (!(*(f32 *)(D_003E7574 + (s0) * 4 + 0x7FC) <= 8.0f + *(f32 *)D_00591E70)) goto LDBC;
        }
    }
    a2 = (u8 *)(D_00592980 + arg0[0x12] * 0x6900 + arg0[0x11] * 0x348);
    if ((a2[0x86] & 1) && *(f32 *)(D_003E7574 + (s0) * 4 + 0x7FC) < *(f32 *)D_00591E70 - 4.0f) {
        if (func_00BBB780((s16)func_00288670(a2[0x80] & 0x7F, 0x28)) != 0) goto LDBC;
    }
    if (func_00A22C50(arg0, s2, s5, s3, s0, s7, spE8, 0, f20) == 0) {
        if (spEC > 0x1000) goto LDBC;
        s7 = func_009B32D0(spEE, *(u16 *)(arg0 + 0x26), 0x800) & 0xFFFF;
        a4 = *(u16 *)(arg0 + 0x10C);
        a3 = (a4 - *(u16 *)(arg0 + 0x26)) + 0x10000;
        s5 = (a3 & 0xFFFF) < 0x8001;
        a2 = (u8 *)(D_00592980 + arg0[0x12] * 0x6900 + arg0[0x11] * 0x348);
        if ((a2[0x96] & 0x7F) < 0x4B && (a2[0xAA] & 0x7F) < 0x4B)
            s2 = 0x102;
        else
            s2 = func_00B04290(arg0, 0x102, 0x195, a3, a4, *(f32 *)(D_003E7574 + (s0) * 4 + 0x7FC)) & 0xFFFF;
        if (*(u32 *)(arg0 + 0x124) >= 0x1000001) {
            func_009B3500(arg0, s2, 0);
            if (!(*(f32 *)(D_003E7574 + (s0) * 4 + 0x7FC) <= 16.0f + *(f32 *)D_00591E70)) goto LDBC;
        }
        if ((func_009B30B0(*(u16 *)(arg0 + 0x10C), *(u16 *)(D_003E7574 + 0x58)) & 0xFFFF) < 0x19) {
            a2 = (u8 *)(D_00592980 + arg0[0x12] * 0x6900 + arg0[0x11] * 0x348);
            if (func_00BBB780((s16)func_00288670(a2[0x80] & 0x7F, 0x28)) == 0) {
                if (func_00BBB780((s16)func_00288670((D_00592980 + arg0[0x12] * 0x6900 + arg0[0x11] * 0x348)[0x7A] & 0x7F, 0x1E)) == 0) {
                    if (((D_00592980 + arg0[0x12] * 0x6900 + arg0[0x11] * 0x348)[0x86] & 1) == 0) goto LC88;
                }
            }
            if (*(f32 *)(D_003E7574 + (s0) * 4 + 0x7FC) < *(f32 *)D_00591E70 - 8.0f) goto LDBC;
        }
LC88:
        if (func_00A22C50(arg0, s2, s5, s3, s0, s7, spE8, 0, f20) == 0) goto LDBC;
    }
    func_00A10250(arg0);
    func_00209A00(*(void **)(arg0 + 4), s2, s3 & 0xFFFF);
    *(f32 *)(*(u8 **)(arg0 + 4) + 0x28) = func_00AB3C60(arg0, s0);
    if (*(s32 *)(arg0 + 0xA4) >= 0x1DCE - arg0[0x5C] * 16 && (s2 & 0xFFFF) != 0x195)
        *(s32 *)(arg0 + 0x98) = func_00BBB8C0(8) + 0x118;
    else
        *(s32 *)(arg0 + 0x98) = func_00BBB8C0(8) + 0x108;
    a3 = (*(s32 *)(arg0 + 0xA4) << 5) / *(s32 *)(arg0 + 0x58);
    *(s32 *)(arg0 + 0x98) += a3;
    *(s32 *)(arg0 + 0x98) -= spEC >> 9;
    *(*(u8 **)(arg0 + 4) + 0x2D) = s5;
    arg0[0x5D] = s0;
    func_00AADED0(arg0, s7, 0, s0, a3);
    func_00207390(*(void **)(arg0 + 4), 4);
    *(s16 *)(arg0 + 0x38) = func_00AB3B70(arg0, s7, s0);
    *(s16 *)(arg0 + 0x2C) = s7;
    arg0[0x16] = 4;
    *(s16 *)(arg0 + 0x18) = 0x21;
    return 1;
LDBC:
    s3 -= 2;
    if (s3 >= 0) goto loop;
    return 0;
}
