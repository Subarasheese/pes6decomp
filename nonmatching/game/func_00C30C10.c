/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_00592980[];
extern s32 func_002937A0();
extern s32 func_00292D50(void);
extern s32 func_0028F9D0(void *a, void *b, s32 c);
extern void func_0028F9E0(void *a, void *b, void *c, void *d);
extern s32 func_00C31110(u8 *a, void *b, s32 c, void *d, u8 e);

s32 func_00C30C10(u8 *base, void *p, s32 idx, u8 flag) {
    u8 t160[11];
    u8 t150[11];
    u8 buf[144];
    u8 *dst = base + idx + 0xC0;
    u8 orig = *dst;
    s32 t = func_002937A0(orig) & 0xFF;
    s32 i, s0, s1, s2, s3, s7, v;
    u8 *e;

    if (t == 0xB || t == 0xC) {
        s1 = 0;
        s7 = 0xFF;
        s3 = 0;
        for (s2 = 1; s2 < 11; s2++) {
            if ((func_002937A0(base[0xC0 + s2]) & 0xFF) == 0xC) {
                v = base[0xAB + s2];
                s1++;
                if (v == s3) {
                    s7 = 0xFF;
                } else if (s3 < v) {
                    s3 = v;
                    s7 = s2;
                }
            }
        }
        if (t == 0xC) {
            if (s1 >= 2 && s7 != idx) {
                s1 = 0;
                for (s0 = 11; s0 < (func_00292D50() & 0xFF); s0++) {
                    e = (u8 *)D_00592980 + base[0] * 26880 + base[0x8C + s0] * 840;
                    if (e[0xD4] != 0) {
                        v = func_0028F9D0(p, e + 0x68, 12);
                        if (s1 < v) s1 = v;
                    }
                }
                s0 = 0;
                for (s2 = 11; s2 < (func_00292D50() & 0xFF); s2++) {
                    e = (u8 *)D_00592980 + base[0] * 26880 + base[0x8C + s2] * 840;
                    if (e[0xD4] != 0) {
                        v = func_0028F9D0(p, e + 0x68, 11);
                        if (s0 < v) s0 = v;
                    }
                }
                if (s1 < s0) *dst = *dst - 5;
            }
        } else if (t == 0xB) {
            s1 = 0;
            for (s0 = 11; s0 < (func_00292D50() & 0xFF); s0++) {
                e = (u8 *)D_00592980 + base[0] * 26880 + base[0x8C + s0] * 840;
                if (e[0xD4] != 0) {
                    v = func_0028F9D0(p, e + 0x68, 11);
                    if (s1 < v) s1 = v;
                }
            }
            s2 = 0;
            for (s0 = 11; s0 < (func_00292D50() & 0xFF); s0++) {
                e = (u8 *)D_00592980 + base[0] * 26880 + base[0x8C + s0] * 840;
                if (e[0xD4] != 0) {
                    v = func_0028F9D0(p, e + 0x68, 12);
                    if (s2 < v) s2 = v;
                }
            }
            if (s1 < s2) *dst = *dst + 5;
        }
    }

    for (i = 0; i < 11; i++) {
        t150[i] = base[0xC0 + i];
        e = (u8 *)D_00592980 + base[0] * 26880 + base[0x8C + i] * 840;
        if (e[0xD6] != 0 || e[0xD5] >= 2) t160[i] = 0;
        else t160[i] = 1;
    }
    func_0028F9E0(buf, t160, t150, base + 0xAC);
    if (func_00C31110(base, p, idx, buf + idx * 12, (u8)flag) != 0) return 1;
    *dst = orig;
    return 0;
}
