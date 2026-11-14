/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_009B3070(u16, u16);
extern u32 func_009B33A0(void *, s32, s32);
extern s16 func_009B3480(void *, f32, f32);
extern void func_00B37330(u8);
extern void func_00BBA080(void *);
extern void func_00BD3CF0(f32, f32);
extern void *Pes6Ball_Current;

void func_00BBE7D0(void *arg0) {
    u32 s1;
    void *p;
    void *q;

    M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0x6C) = M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0x70) = M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C);
    p = M2C_FIELD(arg0, void **, 0);
    func_00BD3CF0(M2C_FIELD(p, f32 *, 0x6C), M2C_FIELD(p, f32 *, 0x70));
    p = M2C_FIELD(arg0, void **, 0);
    s1 = func_009B33A0(p, (s32)M2C_FIELD(p, f32 *, 0x6C), (s32)M2C_FIELD(p, f32 *, 0x70));
    p = M2C_FIELD(arg0, void **, 0);
    if ((func_009B3070(M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x26), func_009B3480(p, 0.0f, M2C_FIELD(p, f32 *, 0xE8))) & 0xFFFF) < 0x4000) {
        if (s1 < 0xCCDAU) {
        q = M2C_FIELD(arg0, void **, 4);
        M2C_FIELD(q, u8 *, 0x4C) = M2C_FIELD(q, u16 *, 0x3E);
        p = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x2C) = func_009B3480(p, 0.0f, M2C_FIELD(p, f32 *, 0xE8));
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0x66) = 0;
        func_00BBA080(arg0);
        func_00B37330(M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0));
        }
    } else {
        if (s1 < 0x3C8C5U) {
        q = M2C_FIELD(arg0, void **, 4);
        M2C_FIELD(q, u8 *, 0x4C) = M2C_FIELD(q, u16 *, 0x3E);
        p = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x2C) = func_009B3480(p, 0.0f, M2C_FIELD(p, f32 *, 0xE8));
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0x66) = 0;
        func_00BBA080(arg0);
        func_00B37330(M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0));
        }
    }
}
