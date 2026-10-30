/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B3070(u16, s32);                        /* extern */
u32 func_009B33A0(void *, s32, s32);                /* extern */
s16 func_009B3480(void *, M2C_UNK, f32);            /* extern */
M2C_UNK func_00B37330(u8);                          /* extern */
M2C_UNK func_00BBA080(void *);                      /* extern */
M2C_UNK func_00BD3CF0(f32, f32);                    /* extern */
extern void *Pes6Ball_Current;

void func_00BBE7D0(void *arg0) {
    u32 temp_s1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0x6C) = (f32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0x70) = (f32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C);
    temp_v0 = M2C_FIELD(arg0, void **, 0);
    func_00BD3CF0(M2C_FIELD(temp_v0, f32 *, 0x6C), M2C_FIELD(temp_v0, f32 *, 0x70));
    temp_a0 = M2C_FIELD(arg0, void **, 0);
    temp_a0_2 = M2C_FIELD(arg0, void **, 0);
    temp_s1 = func_009B33A0(temp_a0, (s32) M2C_FIELD(temp_a0, f32 *, 0x6C), (s32) M2C_FIELD(temp_a0, f32 *, 0x70));
    if ((func_009B3070(M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x26), func_009B3480(temp_a0_2, 0, M2C_FIELD(temp_a0_2, f32 *, 0xE8)) & 0xFFFF) & 0xFFFF) >= 0x4000) {
        if (temp_s1 < 0x3C8C5U) {
            temp_v1 = M2C_FIELD(arg0, void **, 4);
            M2C_FIELD(temp_v1, s8 *, 0x4C) = (s8) M2C_FIELD(temp_v1, u16 *, 0x3E);
            temp_a0_3 = M2C_FIELD(arg0, void **, 0);
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x2C) = func_009B3480(temp_a0_3, 0, M2C_FIELD(temp_a0_3, f32 *, 0xE8));
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x66) = 0;
            func_00BBA080(arg0);
            func_00B37330(M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0));
        }
    } else if (temp_s1 < 0xCCDAU) {
        temp_v1_2 = M2C_FIELD(arg0, void **, 4);
        M2C_FIELD(temp_v1_2, s8 *, 0x4C) = (s8) M2C_FIELD(temp_v1_2, u16 *, 0x3E);
        temp_a0_4 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x2C) = func_009B3480(temp_a0_4, 0, M2C_FIELD(temp_a0_4, f32 *, 0xE8));
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x66) = 0;
        func_00BBA080(arg0);
        func_00B37330(M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0));
    }
}
