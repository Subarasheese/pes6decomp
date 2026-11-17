/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00591E4C[];
extern char D_00591E67[];
extern char D_005926EC[];
extern char D_005926D8[];
extern char D_005926E4[];
extern char D_00591E6C[];
extern char D_00591E74[];
extern char D_00591BEC[];
extern char D_00592980[];
extern char *D_003E7574;

f32 func_001CD9E0(f32);
void func_00209A00(void *, s32, s32);
s32 func_00288670(s32, s32);
s32 func_009B3070(s32, s32);
s32 func_009B30B0(s32, s32);
s32 func_009B32D0(s32, s32, s32);
s32 func_009B33A0(void *, s32, s32);
s32 func_009B3480(void *, f32, f32);
s32 func_009B34C0(f32, f32, f32, f32);
void func_009B36C0(void *, s32, s32, s32, s32);
s32 func_00A13E50(s32, s32);
s32 func_00A1C2A0(void *, s32, s32, s32);
s32 func_00A9C660(void *);
s32 func_00A9E080(void *, s32, s32, s32, s32, s32);
f32 func_00AB3C60(void *, s32);

static inline f32 FC(u32 b) { union { u32 i; f32 f; } u; u.i = b; return u.f; }

s32 func_00AE47E0(char *s1, char *s0) {
    s32 s2, s3, s4, s5, s6;
    s32 a1, a2, t, r;
    u8 b;
    f32 fv;

    if (*(u16 *)(s0 + 0x1A) >= 0x31) return 0;
    b = *(u8 *)D_00591E4C;
    if (b != 0 && *(u8 *)s1 != b) return 0;

    if (*(u8 *)(D_00591E67 + *(u8 *)(s1 + 0x12)) == 1) {
        if (*(f32 *)D_005926D8 <= (f32)*(u8 *)D_005926EC) return 0;
    }
    if (*(u16 *)(D_003E7574 + 0x84) == 1) {
        if ((u32)func_009B33A0(s1, (s32)(FC(0xC6526400) * (f32)*(s16 *)(s1 + 0x14)), 0) >= 0x1000000) return 0;
    }
    s4 = *(s32 *)(s1 + 0x58) + 0x200;
    if ((f32)*(s16 *)(s1 + 0x14) * *(f32 *)(s0 + 0xC) <= FC(0x46266400)
        || (t = (s32)*(f32 *)(s0 + 0x14), t = t < 0 ? -t : t, t >= 0x3C1)) {
        s2 = func_00A9C660(s1) & 0xFFFF;
    } else {
        s2 = *(u16 *)(s1 + 0x2A);
    }
    a1 = *(s16 *)(s1 + 0x14);
    {
        s32 o = *(u8 *)D_005926E4 << 2;
        a2 = (s32)((0.0f + *(f32 *)(D_003E7574 + o + 0x47C)) - (FC(0xC6526400) * (f32)a1));
        if (a2 < 0) a2 = -a2;
        t = (s32)*(f32 *)(D_003E7574 + o + 0xB7C);
        if (t < 0) t = -t;
        if (!((f32)t <= FC(0x446AC000))) a2 += 0x400;
    }
    if (a2 >= 0x141) {
        if ((f32)a1 * *(f32 *)(s0 + 0xC) < FC(0xC5800000)) {
            if ((func_009B30B0(*(u16 *)(s0 + 0x18), *(u16 *)(s1 + 0x2A)) & 0xFFFF) >= 0x50) {
                s32 sg = *(f32 *)(s1 + 0xE8) < 0.0f ? -1 : 1;
                s2 = func_009B3480(s1, 0.0f, FC(0x46186400) * (f32)sg) & 0xFFFF;
            }
        }
    }
    if ((func_009B30B0(s2, *(u16 *)(s0 + 0x18)) & 0xFFFF) < 0x20) return 0;

    a2 = *(u16 *)(s0 + 0x18) - (s2 & 0xFFFF);
    s6 = (((a2 + 0x10000) & 0xFFFF) < 0x8001);
    r = func_00A1C2A0(s1, *(u16 *)(s0 + 6), 0x9000, a2);
    s5 = (r == 0 ? 0x2DB : 0x307) & 0xFFFF;
    func_009B36C0(s1, s5, 0x10, *(u16 *)(s0 + 0x18), s6 & 0xFF);
    s2 = func_009B34C0(*(f32 *)D_00591E6C, *(f32 *)D_00591E74, *(f32 *)(s0 + 0xC), *(f32 *)(s0 + 0x14)) & 0xFFFF;
    {
        f32 dx = *(f32 *)D_00591E6C - *(f32 *)(s0 + 0xC);
        f32 dz = *(f32 *)D_00591E74 - *(f32 *)(s0 + 0x14);
        fv = func_001CD9E0(dz * dz + dx * dx);
    }
    s3 = (s32)(*(f32 *)D_00591BEC * (f32)(s32)fv / (f32)(*(u16 *)(s0 + 6) + 1));
    if ((func_009B30B0(*(u16 *)(s1 + 0x28), s2) & 0xFFFF) >= 0x20) return 0;
    if (!(*(s32 *)(s1 + 0x1C) < s3 + 0x1000)) return 0;

    func_00209A00(*(void **)(s1 + 4), s5, 0);
    fv = func_00AB3C60(s1, *(u16 *)(s0 + 6));
    *(f32 *)(*(char **)(s1 + 4) + 0x28) = fv;
    *(u8 *)(*(char **)(s1 + 4) + 0x2D) = s6;
    if ((func_009B30B0(*(u16 *)(s1 + 0x28), s2) & 0xFFFF) >= 0x10) {
        s4 = func_00A9E080(s1, s2, *(u16 *)(s1 + 0x28), s4, 0x80, 0);
    }
    t = func_00288670(*(u8 *)(D_00592980 + *(u8 *)(s1 + 0x12) * 26880 + *(u8 *)(s1 + 0x11) * 840 + 0x6B) & 0x7F, 0x14);
    if (*(s32 *)(s1 + 0x1C) + 0x200 + t * 2 < s4) {
        t = func_00288670(*(u8 *)(D_00592980 + *(u8 *)(s1 + 0x12) * 26880 + *(u8 *)(s1 + 0x11) * 840 + 0x6B) & 0x7F, 0x14);
        s4 = *(s32 *)(s1 + 0x1C) + 0x200 + t * 2;
    }
    r = func_00A13E50(s4, *(s32 *)(s1 + 0x58) * 95 / 100);
    if (r < s3) {
        s3 = r;
        s2 = func_009B32D0(s2, *(u16 *)(s1 + 0x28), 0x1800);
    }
    *(u16 *)(s1 + 0x28) = s2;
    *(u16 *)(s1 + 0x38) = (u16)func_009B3070(*(u16 *)(s1 + 0x26), *(u16 *)(s0 + 0x18)) / *(u16 *)(s0 + 6);
    if (s3 + 0xA00 < *(s32 *)(s1 + 0x1C)) s3 = *(s32 *)(s1 + 0x1C) - 0xA00;
    *(s32 *)(s1 + 0x1C) = s3;
    *(u16 *)(s1 + 0x2C) = *(u16 *)(s0 + 0x18);
    *(u16 *)(s1 + 0x18) = 3;
    t = ((*(u8 *)(D_00592980 + *(u8 *)(s1 + 0x12) * 26880 + *(u8 *)(s1 + 0x11) * 840 + 0x8C) >> 2) + 0x94) * -96 / 183;
    if (*(f32 *)(s0 + 0x10) < (f32)t) {
        func_00209A00(*(void **)(s1 + 4), 0x2DC, 0);
        fv = func_00AB3C60(s1, *(u16 *)(s0 + 6));
        *(f32 *)(*(char **)(s1 + 4) + 0x28) = fv;
    }
    return 1;
}
