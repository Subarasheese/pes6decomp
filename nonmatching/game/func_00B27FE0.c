/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_00188910(void *);
void func_00209A00(s32, s32, s32);
s32 func_002CA7A0(void *);
s32 func_00AFBAB0(s32);
s32 func_00B29CB0(void);
extern char D_0058E7F0[];

void func_00B27FE0(void) {
    f32 v[24];
    u8 *p;
    s32 i;
    s32 w;
    f32 f20, f0;
    s32 t;

    p = (u8 *)D_0058E7F0;
    for (i = 0; i < 22; i++, p += 0x240) {
        if (func_002CA7A0(p) == 0) {
            if (func_00B29CB0() != 0) {
                w = 0;
            } else {
                func_00188910(v + 16);
                w = ((s32 *)v)[22];
            }
            if (w != 0) {
                func_00209A00(*(s32 *)(p + 4), 0x457, 0);
            } else {
                func_00209A00(*(s32 *)(p + 4), 0x1BF, 0);
            }
            *(s32 *)(p + 0x1C) = 0;
            *(s16 *)(p + 0x26) = 0x4000;
            if (func_00B29CB0() != 0) {
                f20 = 1280.0f;
            } else {
                func_00188910(v + 8);
                if (p[0x13] != 0) f20 = v[11];
                else f20 = v[8];
            }
            t = func_00AFBAB0(p[0]) & 0xFF;
            *(f32 *)(p + 0xE0) = f20 + (f32)(-*(s16 *)(p + 0x14) * (p[0] - t) * 200);
            if (func_00B29CB0() != 0) {
                f0 = 9497.0f;
            } else {
                func_00188910(v);
                if (p[0x13] != 0) f0 = v[5];
                else f0 = v[2];
            }
            *(f32 *)(p + 0xE8) = f0;
            p[0x16] = 0xFF;
            *(s16 *)(p + 0x18) = 0;
        }
    }
}
