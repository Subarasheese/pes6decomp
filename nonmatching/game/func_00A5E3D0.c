/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_009B32D0(s32, s32, s32);
extern s32 func_009B30B0(s32, s32);
extern void *Pes6Ball_Current;
extern char D_00591E70[];

s32 func_00A5E3D0(void *arg0, s32 arg1) {
    s32 a0;
    s32 s0;
    s32 sgn;
    s32 f26;
    s32 x1;
    s32 x2;
    s32 t;
    u16 id;
    void *p;

    s0 = arg1;
    if ((((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x28), (s32) M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) >= 0x60) || ((M2C_FIELD(arg0, s32 *, 0x1C) < 0xE00) && ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x10C), (s32) M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) >= 0x60))) && (M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) >= 0x1801)) {
        a0 = 0x1800;
    } else {
        a0 = 0;
    }
    p = M2C_FIELD(arg0, void **, 4);
    id = M2C_FIELD(p, u16 *, 0x30);
    sgn = (M2C_FIELD(p, u8 *, 0x2D) != 0) ? -1 : 1;
    f26 = M2C_FIELD(arg0, u16 *, 0x26);
    t = a0 & 0xFFFF;

    if (id == 0x93 || id == 0x91) {
        return s0;
    }
    if (id == 0x88) {
        s0 = func_009B32D0(s0, f26, 0x2000) & 0xFFFF;
        if (M2C_FIELD(arg0, s32 *, 0x1C) >= 0x1401) {
            s0 = func_009B32D0(s0, (s32) M2C_FIELD(arg0, u16 *, 0x28), 0x2000) & 0xFFFF;
        }
        return s0;
    }
    if (id == 0x81 || id == 0x240 || id == 0xA7 || id == 0xA9 || id == 0x7C || id == 0x95 || id == 0x1D6) {
        x1 = f26; x2 = 0x2000;
    } else if (id == 0x1D1) {
        x1 = f26 - sgn * 0x4800; x2 = 0xC00;
    } else if (id == 0x8C || id == 0x76) {
        x1 = f26; x2 = 0x1200;
    } else if (id == 0x82) {
        x1 = f26 - (sgn << 14); x2 = t + 0x2000;
    } else if (id == 0x94) {
        x1 = f26 - sgn * 0x2800; x2 = 0xC00;
    } else if (id == 0x7B || id == 0x7A || id == 0x87 || id == 0xA2 || id == 0xB2 || id == 0xAF || id == 0x23C || id == 0xAC || id == 0x9F) {
        x1 = f26 - (sgn << 13); x2 = t + 0x2800;
    } else if (id == 0x96 || id == 0xA6 || id == 0xA8) {
        x1 = f26 - sgn * 0x2800; x2 = t + 0x2800;
    } else if (id == 0x7D) {
        x1 = f26 - (sgn << 14); x2 = t + 0xC00;
    } else if (id == 0x23A || id == 0x97 || id == 0x8B) {
        x1 = f26 - sgn * 0x3400; x2 = t + 0x1400;
    } else if (id == 0x78) {
        x1 = f26 - sgn * 0x5000; x2 = 0xC00;
    } else if (id == 0x8E) {
        if (M2C_FIELD(Pes6Ball_Current, f32 *, 0x7FC) <= (8.0f + (*(f32 *)D_00591E70))) {
            x1 = f26 - sgn * 0x3800; x2 = t + 0x1800;
        } else {
            x1 = f26 - sgn * 0x2800; x2 = t + 0xC00;
        }
    } else if (id == 0x1C2 || id == 0x23F) {
        if (M2C_FIELD(Pes6Ball_Current, f32 *, 0x7FC) <= (8.0f + (*(f32 *)D_00591E70))) {
            x1 = f26 - (sgn << 13); x2 = t + 0x1000;
        } else {
            x1 = f26 - sgn * 0x1800; x2 = t + 0xC00;
        }
    } else if (id == 0xA0 || id == 0x366) {
        x1 = f26; x2 = 0x1C00;
    } else if (id == 0x2FF || id == 0xAD || id == 0xA4 || id == 0x9D || id == 0x23D) {
        x1 = f26; x2 = 0x1000;
    } else if (id == 0x265) {
        x1 = M2C_FIELD(arg0, u16 *, 0x28); x2 = 0x1200;
    } else if (id == 0x86 || id == 0x8A || id == 0x23B || id == 0x8D || id == 0x16A || id == 0x79 || id == 0xAB || id == 0xB1 || id == 0xAE || id == 0x9E || id == 0xA5 || id == 0xA1 || id == 0x23E) {
        x1 = f26 - sgn * 0x1800; x2 = t + 0x1000;
    } else if (id == 0x85 || id == 0xB0) {
        x1 = f26; x2 = 0x3000;
    } else if (id == 0x92 || id == 0x83 || id == 0x231 || id == 0x48 || id == 0xAA || id == 0x16C || id == 0x8F) {
        x1 = f26 + 0x8000; x2 = 0x1800;
    } else if (id == 0x77) {
        x1 = f26 + 0x8000; x2 = 0x1000;
    } else if (id == 0x90 || id == 0x98) {
        x1 = f26 + (sgn << 12); x2 = 0x1000;
    } else {
        return f26;
    }
    return func_009B32D0(s0, x1 & 0xFFFF, x2 & 0xFFFF) & 0xFFFF;
}
