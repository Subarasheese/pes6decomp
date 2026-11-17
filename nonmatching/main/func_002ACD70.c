/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_0058E5B0[];
extern char D_00592980[];
void func_002A11B0(f32 *out, s32 idx);
s32 func_002A1110(s32 idx);
f32 func_002A0E20(s32 idx);
s32 func_009B34C0(f32 a, f32 b, f32 c, f32 d);
s32 func_009B3070(s32 a, s32 b);

void func_002ACD70(u8 *p) {
    f32 pos[4];
    f32 dif[4];
    s32 id;
    s32 s1;
    u8 *ent;
    s32 v;
    s32 w;

    if ((p[0] & 1) == 0) {
        func_002A11B0(pos, p[1]);
        s1 = func_002A1110(p[1]) & 0xffff;
        *(f32 *)(p + 12) = func_002A0E20(p[1]);
        id = p[1];
        if (id < 23) {
            if (id == 255) {
                id = 1;
            } else {
                id = id % 23;
            }
            ent = (u8 *)D_0058E5B0 + id * 576;
            p[16] = (ent[18] + ent[19]) % 2;
            p[17] = (((u8 *)D_00592980)[ent[18] * 26880 + ent[17] * 840 + 137] & 7) * 100 / 7;
        } else {
            p[16] = 0;
            p[17] = 0;
        }
        v = (s32)pos[0];
        if (v <= 0) v = -v;
        v = (s32)(13465.0f - (f32)v);
        if (v <= 0) v = -v;
        *(s32 *)(p + 20) = v;
        v = (s32)pos[2];
        if (v <= 0) v = -v;
        v = (s32)(8729.0f - (f32)v);
        if (v <= 0) v = -v;
        *(s32 *)(p + 24) = v;
        if (pos[0] <= 0.0f) {
            *(u16 *)(p + 28) = func_009B34C0(pos[0], pos[2], -13465.0f, pos[2]);
        } else {
            *(u16 *)(p + 28) = func_009B34C0(pos[0], pos[2], 13465.0f, pos[2]);
        }
        *(u16 *)(p + 32) = func_009B3070(s1, *(u16 *)(p + 28));
        if (pos[2] <= 0.0f) {
            *(u16 *)(p + 30) = func_009B34C0(pos[0], pos[2], pos[0], -8729.0f);
        } else {
            *(u16 *)(p + 30) = func_009B34C0(pos[0], pos[2], pos[0], 8729.0f);
        }
        *(u16 *)(p + 34) = func_009B3070(s1, *(u16 *)(p + 30));
        w = p[2];
        if (w >= 0 && w < 29 && w != p[1]) {
            func_002A11B0(dif, w);
            dif[3] = 1.0f;
            __asm__ volatile("lqc2 $vf4, 0(%0)\n lqc2 $vf5, 0(%1)\n vsub.xyzw $vf6, $vf4, $vf5\n sqc2 $vf6, 0(%0)" : : "r"(dif), "r"(pos) : "memory");
            *(f32 *)(p + 36) = dif[1] * dif[1] + dif[0] * dif[0] + dif[2] * dif[2];
        } else {
            *(u32 *)(p + 36) = 0x4dbebc20;
        }
        p[0] |= 1;
    }
}
