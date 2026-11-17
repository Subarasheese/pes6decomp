/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 func_0099DFF0(void);
s32 func_009B30B0(s32, s32);
s32 func_009B32D0(s32, s32, s32);
s32 func_00BBB990(s32, s32);
s32 func_00BBB9C0(s32, s32);
extern char *Pes6Ball_Current;
extern char D_00591E7C[];

void func_00A515A0(char *arg0) {
    s32 v1;
    s32 a;
    s32 sx;
    s32 sz;
    s32 s0;

    if (*(u8 *)(arg0 + 0x24) != 0) return;
    if (*(s32 *)D_00591E7C == 0) {
        if (*(s32 *)(arg0 + 0xB0) & 0x200) return;
        a = *(s16 *)(arg0 + 0x1CE);
        if (a <= 0) a = -a;
        if (a < 0x41) *(s16 *)(arg0 + 0x1CE) = 0;
        a = *(s16 *)(arg0 + 0x1D0);
        if (a <= 0) a = -a;
        if (a < 0x41) *(s16 *)(arg0 + 0x1D0) = 0;
        *(s16 *)(arg0 + 0x1CE) = (*(s16 *)(arg0 + 0x1CE) * 9) / 10;
        *(s16 *)(arg0 + 0x1D0) = (*(s16 *)(arg0 + 0x1D0) * 9) / 10;
        return;
    }
    s0 = func_0099DFF0() & 0xFFFF;
    v1 = func_009B30B0(s0, *(u16 *)(Pes6Ball_Current + 0x58)) & 0xFFFF;
    if (v1 < 9) {
        s0 = *(u16 *)(Pes6Ball_Current + 0x58);
    } else if (v1 >= 0x70) {
        s0 = (*(u16 *)(Pes6Ball_Current + 0x58) + 0x8000) & 0xFFFF;
    }
    if (*(s32 *)(arg0 + 0xB0) & 0x200) {
        sx = func_00BBB990(s0, 0x200);
        sz = func_00BBB9C0(s0, 0x200);
        *(s16 *)(arg0 + 0x1CE) = sx;
        *(s16 *)(arg0 + 0x1D0) = sz;
    } else {
        a = *(s16 *)(arg0 + 0x1CE);
        if (a <= 0) a = -a;
        if (a < 0x41) *(s16 *)(arg0 + 0x1CE) = 0;
        a = *(s16 *)(arg0 + 0x1D0);
        if (a <= 0) a = -a;
        if (a < 0x41) *(s16 *)(arg0 + 0x1D0) = 0;
        *(s16 *)(arg0 + 0x1CE) = (*(s16 *)(arg0 + 0x1CE) * 9) / 10;
        *(s16 *)(arg0 + 0x1D0) = (*(s16 *)(arg0 + 0x1D0) * 9) / 10;
        if (*(u32 *)(arg0 + 0x114) < 0x120) return;
        if (*(s32 *)(Pes6Ball_Current + 0x50) < 0x1000) return;
        if (!(v1 < 0x61)) return;
        if (v1 < 0x20) return;
        s0 = func_009B32D0(s0, (*(u16 *)(Pes6Ball_Current + 0x58) + 0x8000) & 0xFFFF, 0x5000) & 0xFFFF;
        sx = -func_00BBB990(s0, 0x60);
        sz = -func_00BBB9C0(s0, 0x60);
    }
    *(f32 *)(Pes6Ball_Current + 0x1454) = *(f32 *)(Pes6Ball_Current + 0x1454) + (f32) sx;
    *(f32 *)(Pes6Ball_Current + 0x145C) = *(f32 *)(Pes6Ball_Current + 0x145C) + (f32) sz;
}
