/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_00207EE0(f32 *, void *);
extern void func_00270530(void *, s32);
extern s32 func_0093CD10(s32, u32, s16 *, s32);
extern s32 D_003E74CC;
extern char D_00591E6C[];
extern char D_00591E70[];
extern char D_00591E74[];

s32 func_009B36C0(void *arg0, s32 arg1, u32 arg2, s32 arg3, s32 arg4) {
    f32 out[4];
    struct {
        s32 a;
        s16 b;
        s8 c;
        s8 pad;
        u32 d;
        s16 e;
        s16 f;
        s32 g;
        s32 h;
    } in;
    u32 half;
    s32 v0, v6;

    half = arg2 >> 1;
    v6 = func_0093CD10(arg1, half, (s16 *)((u8 *)out + 0xE), arg3);
    if (arg2 + 2 < *(u32 *)(D_003E74CC + (arg1 & 0xFFFF) * 4 + 0x2FD8) && (arg2 & 1)) {
        v0 = func_0093CD10(arg1, (half + 1) & 0xFF, (s16 *)((u8 *)out + 0xE), arg3);
    } else {
        v0 = 0;
    }
    in.h = v0;
    in.g = v6;
    in.a = **(s32 **)((u8 *)arg0 + 4);
    in.f = *(s16 *)((u8 *)out + 0xE);
    in.b = arg1;
    in.c = arg4;
    in.d = arg2;
    in.e = arg3;
    func_00270530(arg0, in.a + 0x1E0);
    func_00207EE0(out, &in);
    *(f32 *)D_00591E6C = out[0];
    *(f32 *)D_00591E70 = out[1];
    *(f32 *)D_00591E74 = out[2];
}
