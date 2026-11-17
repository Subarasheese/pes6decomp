/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char **func_00B2A420(u8 a);
extern void func_00B2A6E0(char **p, f32 *a, u16 *b, u32 c);
extern void func_00B84790(char **p, u16 a, u16 b, u8 c, s32 d, f32 f);
extern char D_00591E6C[];
extern char D_00591E70[];
extern char D_00591E74[];
extern char D_00CCB690[];

void func_00C373B0(s32 arg0, s32 arg1, s32 arg2) {
    char *base = D_00CCB690 + (arg0 - 1) * 0x94;
    char **obj = func_00B2A420(*(u8 *)(base + 0x70));
    char *o = *obj;
    f32 f20 = *(f32 *)(o + 0xE0);
    f32 f21 = *(f32 *)(o + 0xE8);
    u16 s0 = *(u16 *)(o + 0x26);
    u16 buf[8];
    char *q;
    f32 g0, g1, g2;
    if (*(f32 *)(*(char **)(o + 4) + 0x38) < (f32)arg2) {
        func_00B2A6E0(obj, (f32 *)buf, &buf[7], arg2 & 0xFFFF);
        *(f32 *)(*obj + 0xE0) = ((f32 *)buf)[0];
        *(f32 *)(*obj + 0xE8) = ((f32 *)buf)[1];
        *(u16 *)(*obj + 0x26) = buf[7];
    }
    o = *obj;
    func_00B84790(obj, *(u16 *)(*(char **)(o + 4) + 0x30), *(u16 *)(o + 0x26), *(u8 *)(base + 0x6D), 1, (f32)((arg1 - 1) * 2));
    q = base + arg1 * 12;
    g0 = *(f32 *)D_00591E6C;
    g1 = *(f32 *)D_00591E70;
    g2 = *(f32 *)D_00591E74;
    ((f32 *)q)[0] = g0;
    ((f32 *)q)[1] = g1;
    ((f32 *)q)[2] = g2;
    *(f32 *)(*obj + 0xE0) = f20;
    *(f32 *)(*obj + 0xE8) = f21;
    *(u16 *)(*obj + 0x26) = s0;
}
