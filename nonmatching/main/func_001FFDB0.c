/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00592743[];
extern char D_0059274A[];
extern char D_003A89F0[];
void func_00270530(void *a0, void *a1, s32 a2, s32 a3);
void func_001A55C0(void *p);
void func_001A54F0(void *p);

void func_001FFDB0(void *a0, f32 *out, s32 a2, s32 a3) {
    f32 l60[4];
    f32 l50[4];
    f32 l40[4];
    s16 *e;
    f32 x, z, t;
    u8 idx;

    func_00270530(a0, l40, a2, a3);
    e = (s16 *)(D_003A89F0 + *(u8 *)D_00592743 * 18);
    func_001A55C0(l60);
    func_001A54F0(l50);
    x = l40[0];
    z = l40[2];
    t = (f32)e[7];
    if (t < x) x = t;
    t = (f32)(-e[7]);
    if (x < t) x = t;
    t = (f32)e[6];
    if (t < z) z = t;
    t = (f32)e[5];
    if (z < t) z = t;
    idx = *(u8 *)D_00592743;
    if (idx >= 13) return;
    if (idx == 6 || idx == 7) {
        out[4] = x;
        out[5] = (f32)e[1];
        out[6] = z;
    } else if (idx <= 5 || idx == 8) {
        f32 k = 128.0f * x;
        out[4] = x;
        out[5] = (f32)e[1];
        out[6] = z;
        out[0] = k / (f32)((s16)a2 + (u16)e[8]);
        out[1] = (f32)e[3];
        out[2] = z + (f32)e[4];
        *(u16 *)D_0059274A = 0x4000;
    } else if (idx >= 9 && idx <= 11) {
        *(u16 *)D_0059274A = 0;
        out[4] = x;
        *(s32 *)&out[5] = 0;
        out[6] = z;
        out[0] = x + (f32)e[2];
        out[1] = (f32)e[3];
        out[2] = z;
    }
}
