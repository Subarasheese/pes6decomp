/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00A99360(void *a, s32 b);
extern s32 func_009D8F10(void *a, void *b, s32 c);
extern s32 func_009B3070(s32 a, s32 b);
extern s32 func_002AE670(s32 a);
extern s32 func_00A00960(void *a, s32 b);
extern s32 func_00930240(void *a);
extern s32 func_0027A600(void *a, s32 b);
extern s32 func_00A0C040(void *a);
extern s32 func_009CA5A0(void *a, s32 b, s32 c, s32 d);
extern s32 func_009B9CE0(void *a, s32 b, s32 c);
extern s32 func_009BE1F0(void *a, s32 b);
extern s32 func_009BDE40(void *a);
extern s32 func_00987BF0(s32 a, void *b, s32 c);
extern s32 func_009C3CD0(void *a, void *b);
extern s32 func_009BD890(void *a);
extern s32 func_009BF460(void *a);
extern s32 func_00207D10(void *a);
extern s32 func_00209A00(void *a, s32 b, s32 c);
extern s32 func_009BC300(void);
extern s32 func_009C1230(void *a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
extern s32 func_009C3A40(void *a);
extern char D_00591E4F[];
extern char D_00591E50[];
extern char D_00591E53[];
extern char D_0058E5B0[];
extern char D_00591E18[];
extern char D_00591E19[];
extern char D_005926EC[];
extern char D_005926D8[];
extern s32 D_003E74CC;

void func_009C9E40(u8 *s) {
    s32 a, v, s1;
    f32 f;
    u8 *p;

    func_00A99360(s, -0x320);
    v = *(u16 *)(s + 0x18);
    if (v == 3) goto L9FD8;
    if (v == 2) goto L9FA8;
    if (v == 1) goto L9F14;
    if (v != 0) goto LA0F8;
    *(u16 *)(s + 0x18) = 1;
    v = (u8)D_00591E4F[s[0x13] * 2];
    a = 1;
    if (v != 0xFF) a = v % 23;
    func_009D8F10(s, D_0058E5B0 + a * 576, 0);
    s1 = func_009B3070(*(u16 *)(s + 0x26), *(u16 *)(s + 0x2C)) & 0xFFFF;
    v = func_002AE670(12);
    *(u16 *)(s + 0x38) = s1 / v;
    s[0x4F] = 0;
L9F14:
    func_00A00960(s, *(u16 *)(s + 0x38));
    v = (u8)D_00591E4F[s[0x13] * 2];
    if (v == 0xFF) a = 1; else a = v % 23;
    func_009D8F10(s, D_0058E5B0 + a * 576, 1);
    f = *(f32 *)(*(u8 **)(s + 4) + 0x38);
    if (f < 11.0f) goto LA0F4;
    *(u16 *)(s + 0x18) = 2;
    goto LA0F4;
L9FA8:
    func_00930240(s);
    f = *(f32 *)(*(u8 **)(s + 4) + 0x38);
    if (f < 21.0f) goto LA0F4;
    *(u16 *)(s + 0x18) = 3;
    goto LA0F4;
L9FD8:
    s[0x4F] = s[0x4F] + 1;
    if (s[0] != (u8)D_00591E18[0]) goto LA33C;
    if (!((s32)s[0x4F] < (s32)(u8)D_005926EC[0])) goto LA33C;
    *(s32 *)(s + 0x1C) = 0;
LA014:
    if (s[0] == (u8)D_00591E18[0]) {
        func_009BF460(s);
    }
    if (s[0] == (u8)D_00591E18[0]) goto LA0F4;
    func_0027A600(s, 1);
    p = *(u8 **)(s + 4);
    v = *(u16 *)(p + 0x30);
    if (v == 0x160) goto LA09C;
    if (v == 0x15F) goto LA070;
    goto LA0F4;
LA070:
    f = *(f32 *)(p + 0x38);
    if (f <= 44.0f) goto LA0F4;
    func_00A0C040(s);
    goto LA0F4;
LA09C:
    if (func_009CA5A0(s, *(u16 *)(s + 0x26), 0x28, 0x14) != 0) goto LA0F4;
    if (func_009B9CE0(s, 0x1E, 0x28) != 0) goto LA3D8;
    f = *(f32 *)(*(u8 **)(s + 4) + 0x38);
    if (f <= 44.0f) goto LA0F4;
    func_00A0C040(s);
LA0F4:
LA0F8:
    f = *(f32 *)(*(u8 **)(s + 4) + 0x38);
    if (f <= 10.0f) goto LA144;
    if (!(f < 33.0f)) goto LA144;
    if (func_009BE1F0(s, 0x60) != 0) func_009BDE40(s);
LA144:
    if (s[0] != (u8)D_00591E19[0]) goto LA2AC;
    v = *(u16 *)(*(u8 **)(s + 4) + 0x30);
    if (v == 0x18F) goto LA2AC;
    if (v == 0x203) goto LA2AC;
    func_00987BF0((s[0x13] ^ 1) & 0xFF, s, 0);
    v = (u8)D_00591E53[(s[0x13] ^ 1) * 2];
    if (v == 0xFF) a = 1; else a = v % 23;
    func_009C3CD0(s, D_0058E5B0 + a * 576);
    v = (u8)D_00591E4F[s[0x13] * 2];
    if (v == 0xFF) a = 1; else a = v % 23;
    func_009C3CD0(s, D_0058E5B0 + a * 576);
    v = (u8)D_00591E50[s[0x13] * 2];
    if (v == 0xFF) a = 1; else a = v % 23;
    func_009C3CD0(s, D_0058E5B0 + a * 576);
LA2AC:
    func_009BD890(s);
    f = *(f32 *)(*(u8 **)(s + 4) + 0x38);
    s1 = (s32)f;
    v = func_002AE670(12);
    if (!(s1 < v)) goto LA390;
    if (s[0] == (u8)D_00591E19[0]) goto LA3D8;
    {
        u32 u = (u8)D_005926EC[0];
        f32 fu = (f32)u;
        if (*(f32 *)D_005926D8 <= fu) goto LA390;
    }
    return;
LA33C:
    func_00930240(s);
    if (func_00207D10(*(void **)(s + 4)) == 0) goto LA014;
    v = *(s32 *)((u8 *)D_003E74CC + 0x3538);
    func_00209A00(*(void **)(s + 4), 0x158, (u16)(v - 2));
    s[0x16] = 0x81;
    *(u16 *)(s + 0x18) = 0;
    goto LA014;
LA390:
    v = func_009BC300();
    if (func_009C1230(s, 0x18, *(u16 *)(s + 0x26), *(s32 *)(s + 0x1C), v, 0, 0) == 0) goto LA3D8;
    s[0x48] = 1;
    func_009C3A40(s);
    return;
LA3D8:
    return;
}
