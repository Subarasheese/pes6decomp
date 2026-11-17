/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00591E90[];
extern char D_00CB5324[];
extern char D_00CB531C[];
extern char D_00CB5320[];
extern char D_00591BE4[];
extern char D_00591E4C[];
extern char D_00591E4F[];
extern char D_00591E67[];
extern char D_0058E5B0[];
extern char D_00592980[];
extern char D_00CB52A0[];
extern u8 *D_003E7A08;
extern u8 *D_003E7574;

u16 func_009B3070(u16 a, u16 b);
s32 func_00905270(void *p, s32 q);
s32 func_009909D0(void *p, s32 q);
u8 func_0090B8B0(void *p, s32 q);
s32 func_0098F290(void *p);
u8 func_0098ED30(s32 a);
s32 func_00288670(s32 a, s32 b);
s32 func_00BBB780(s16 a);
f32 func_00983550(f32 a, f32 b, f32 c);
s32 func_009B33A0(void *p, s32 a, s32 b);
void func_00914430(void *p, s32 a, void *q);
void func_00984160(void *p, f32 a, f32 b);

s32 func_00C25220(u8 *a, u8 *st) {
    s32 s2;
    s32 s3 = 0;
    s32 v;
    s32 i;
    u8 *slot;
    f32 scale;
    s32 q;

    if (st[0x2C] == 0) {
        scale = *(f32 *)D_00CB5324;
        *(f32 *)D_00CB531C = 0.0f + *(f32 *)(D_00591E90 + (a[0x13] ^ 1) * 4) + 256.0f * scale;
        if (!(*(f32 *)(a + 0xE0) * scale <= 9241.0f)) {
            st[0x2C] = 1;
        }
        q = a[0x13];
        if (*(f32 *)(D_00591E90 + (a[0x13] ^ 1) * 4) * *(f32 *)D_00CB5324 < *(f32 *)(a + 0xE0) * *(f32 *)D_00CB5324) {
            q = *(u16 *)(a + 0x26);
            if ((u16)func_009B3070(*(u16 *)(a + 0x2A), *(u16 *)(a + 0x26)) > 0x4000) {
                st[0x2C] = 1;
            }
        }
        if (func_00905270(a, q) != 0) {
            st[0x2C] = 1;
        } else if ((u32)(*(u8 *)D_00591BE4 * 2) < *(u32 *)(st + 4)) {
            st[0x2C] = 1;
        }
    } else {
        *(f32 *)D_00CB531C = 0.0f + *(f32 *)(D_00591E90 + (a[0x13] ^ 1) * 4) - 256.0f * *(f32 *)D_00CB5324;
    }

    *(f32 *)D_00CB5320 = *(f32 *)(a + 0xE8);
    {
        s32 lim = D_003E7A08[a[0x13]] ? 0xC00 : 0x600;
        f32 ref = *(f32 *)(D_003E7574 + 0x18);
        f32 d = *(f32 *)D_00CB5320 - ref;
        s32 n = (s32)d;
        if (n <= 0) n = -n;
        if (n < lim) {
            s32 sg = (d < 0.0f) ? -1 : 1;
            *(f32 *)D_00CB5320 = ref + (f32)(lim * sg);
        } else {
            s32 m = (s32)(*(f32 *)(a + 0xE0) - *(f32 *)(D_00591E90 + (a[0x13] ^ 1) * 4));
            if (m <= 0) m = -m;
            if (m < 0x400) {
                *(f32 *)D_00CB5320 = func_00983550(0.0f, *(f32 *)(a + 0xE8), 512.0f);
            }
        }
    }

    s2 = func_009B33A0(a, (s32)*(f32 *)D_00CB531C, (s32)*(f32 *)D_00CB5320);
    a[0x201] = 6;
    if (s2 < 0x40000) {
        a[0x201] = 2;
    } else if (s2 < 0x100000) {
        a[0x201] = 4;
    }
    if (func_009909D0(a, 0x100000) != 0 && s2 >= 0x40001) {
        a[0x201] = 6;
    }
    if (*(u8 *)D_00591E4C != 0) {
        u32 t = *(u8 *)D_00591E4C;
        u8 *row;
        u32 r;
        if (t == 0xFF) {
            i = 1;
        } else {
            i = t % 0x17;
        }
        row = (u8 *)D_0058E5B0 + i * 576;
        r = func_009B3070(*(u16 *)(row + 0x26), *(u16 *)(row + 0x128 + a[0] * 2));
        if (r >= 0x4001) {
            a[0x201] = 4;
        }
        if (r >= 0x5001 && s2 < 0x640000) {
            a[0x201] = 2;
        }
    }

    {
        f32 e0 = *(f32 *)(a + 0xE0);
        s32 a1;
        if (e0 * *(f32 *)D_00CB5324 <= 6732.5f) {
            a1 = 0x800;
        } else {
            s32 k = (s32)e0;
            if (k <= 0) k = -k;
            a1 = (s32)(2048.0f - ((f32)k - 6732.5f) / 4.0f);
        }
        func_00914430(a, a1, st + 0x28);
    }
    func_00984160(a, *(f32 *)D_00CB531C, *(f32 *)D_00CB5320);
    if (a[0x201] == 6) {
        s3 = 1;
    }
    if (s3 != 0) {
        *(s32 *)(a + 0xB0) |= 0x800;
    }

    {
        u8 *tab = (u8 *)D_00592980 + a[0x12] * 26880 + a[0x11] * 840;
        s2 = 0;
        if ((tab[0x7A] >> 7) & 1) {
            s2 = 1;
        } else if ((tab[0x7E] >> 7) & 1) {
            s2 = 1;
        }
        if (func_00BBB780(func_00288670(tab[0x6A] & 0x7F, 0x14)) != 0) {
            s2 = 1;
        }
    }
    v = 0;
    if (func_00905270(a, 0x14) == 0) {
        if ((u8)s2 != 0) {
            if (func_0098ED30(a[0]) == 4) {
                if (!(*(f32 *)(a + 0xE0) * *(f32 *)D_00CB5324 <= 9241.0f)) {
                    v = 1;
                }
            }
        }
    }
    if (v != 0) {
        slot = 0;
        for (i = 0; i < 0x16; i++) {
            if (*(s32 *)(D_00CB52A0 + i * 64 + 0x6BC) == 0) {
                slot = (u8 *)D_00CB52A0 + i * 64 + 0x6BC;
                break;
            }
        }
        if (slot != 0) {
            slot[0x10] = a[0];
            *(s32 *)slot = 7;
            *(s32 *)(slot + 8) = *(u8 *)D_00591BE4 * 3;
            *(s16 *)(slot + 0xC) = (s32)*(f32 *)(a + 0xE0);
            *(s16 *)(slot + 0xE) = (s32)*(f32 *)(a + 0xE8);
            slot[0x11] = slot[0x11] + 1;
            if (a[0x1D9] != 0) {
                *(s32 *)(slot + 0x28) = a[0x1D9];
            } else {
                *(s32 *)(slot + 0x28) = a[0x1B4 + (a[0x13] ^ 1) * 11];
            }
        }
    }

    s2 = 0;
    if (a[0x10] >= 8) {
        u8 r = func_0090B8B0(a, 1);
        if (r == 2) {
            s2 = *(u8 *)D_00591BE4;
        } else if (r == 1) {
            s2 = *(u8 *)D_00591BE4 >> 1;
        }
    }
    if ((u32)s2 < *(u32 *)(st + 4) && *(u8 *)(D_00591E67 + a[0x12]) == 1) {
        return 1;
    }
    if (func_0098F290(a) == 0) {
        return 3;
    }
    {
        u32 t = *(u8 *)(D_00591E4F + a[0x13] * 2);
        if (t == 0xFF) {
            i = 1;
        } else {
            i = t % 0x17;
        }
    }
    if (func_0098F290(D_0058E5B0 + i * 576) == 0) {
        return 3;
    }
    if ((u16)func_009B3070(*(u16 *)(a + 0x2A), *(u16 *)(D_003E7574 + 0x5C)) < 0x2C01) {
        return 3;
    }
    {
        u8 who = a[0];
        for (i = 0; i < 0x16; i++) {
            if (*(u8 *)(D_00CB52A0 + i * 64 + 0x6CC) == who && *(s32 *)(D_00CB52A0 + i * 64 + 0x6BC) == 13) {
                return 1;
            }
        }
        slot = 0;
        for (i = 0; i < 0x16; i++) {
            if (*(s32 *)(D_00CB52A0 + i * 64 + 0x6BC) == 0) {
                slot = (u8 *)D_00CB52A0 + i * 64 + 0x6BC;
                break;
            }
        }
        if (slot != 0) {
            slot[0x10] = who;
            *(s32 *)slot = 13;
            if (a[0x10] >= 0x1F) {
                *(s32 *)(slot + 8) = *(u8 *)D_00591BE4 * 3;
            } else {
                *(s32 *)(slot + 8) = *(u8 *)D_00591BE4 * 2;
            }
            *(s16 *)(slot + 0xC) = (s32)*(f32 *)(a + 0xE0);
            *(s16 *)(slot + 0xE) = (s32)*(f32 *)(a + 0xE8);
            {
                s32 sg = (-*(f32 *)(a + 0xE8) < 0.0f) ? -1 : 1;
                *(s16 *)(slot + 0x2E) = (s32)(939.0f * (f32)sg);
            }
        }
    }
    return 1;
}
