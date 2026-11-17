/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"
extern char D_00592980[];
extern char D_00CB38F0[];
extern char D_00CB38B0[];
extern s32 func_002937A0(s32 a, s32 b, s32 c, s32 d);
extern s32 func_0028F230(void *a, void *b, s32 c, void *d, s32 e);
extern s32 func_00C32010(void *a, s32 b);
extern s32 func_009A0270(void);
extern s32 func_00277220(void *a, s32 b);

void func_00C2C6F0(u8 *p, void *q, u8 idx, s32 a3) {
    s32 loc[3];
    s32 i;
    u8 *tab = (u8 *)D_00592980 + p[0] * 26880;
    loc[0] = 0;
    loc[1] = *(s32 *)D_00CB38B0;
    loc[2] = *(s32 *)D_00CB38F0;
    for (i = 0; i < 11; i++) {
        u8 *e = p + i;
        if ((func_002937A0(e[0xC0], loc[1], loc[2], a3) & 0xFF) == 4) {
            s32 s5, s2, kind, a4, d, t, t2;
            u8 *ent, *ent2, *fp;
            t = (p + idx)[0x8C];
            ent = tab + t * 840;
            d = *(s32 *)(ent + 0x18) / 100;
            a4 = *(s32 *)(ent + 0xD8) / d;
            if (a4 >= 0x3D) a4 = 100;
            ent = (u8 *)D_00592980 + p[0] * 26880 + t * 840;
            s5 = func_0028F230(q, ent + 0x68, e[0xC0], loc, a4);
            if (func_00C32010(p, t) == 0) {
                kind = 0;
            } else if (ent[0xF8] != 0 || ent[0xF9] != 0) {
                kind = 0;
            } else {
                s32 lim = ent[0x102];
                if ((func_009A0270() & 0xFF) - 5 < lim) kind = 0;
                else kind = func_00277220(ent + 0xF0, 1);
            }
            if (kind == 2) s5 = s5 / 2;

            fp = e + 0x8C;
            t2 = *fp;
            ent2 = tab + t2 * 840;
            d = *(s32 *)(ent2 + 0x18) / 100;
            a4 = *(s32 *)(ent2 + 0xD8) / d;
            if (a4 >= 0x3D) a4 = 100;
            ent2 = (u8 *)D_00592980 + p[0] * 26880 + t2 * 840;
            s2 = func_0028F230(q, ent2 + 0x68, e[0xC0], loc, a4);
            if (func_00C32010(p, t2) == 0) {
                kind = 0;
            } else if (ent2[0xF8] != 0 || ent2[0xF9] != 0) {
                kind = 0;
            } else {
                s32 lim = ent2[0x102];
                if ((func_009A0270() & 0xFF) - 5 < lim) kind = 0;
                else kind = func_00277220(ent2 + 0xF0, 1);
            }
            if (kind == 2) s2 = s2 / 2;
            if (s2 < s5) {
                u8 a = *fp;
                *fp = (p + idx)[0x8C];
                (p + idx)[0x8C] = a;
                return;
            }
        }
    }
}
