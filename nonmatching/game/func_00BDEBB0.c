/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0017F900(void);
extern int func_002727B0(void);
u32 func_009B33A0(void *, s32, s32);                /* extern */
M2C_UNK func_00BA9800(s32, void *);                 /* extern */
M2C_UNK func_00BA9850(s32, M2C_UNK, void *);        /* extern */
M2C_UNK func_00BD3BA0(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00BD3CF0(f32, f32);                    /* extern */
extern char D_00CBCB1C[];

void func_00BDEBB0(void *arg0) {
    u32 temp_s0;
    u8 temp_a0_2;
    void *temp_a0;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_v0;
    void *temp_v1;

    temp_v0 = M2C_FIELD(arg0, void **, 0);
    func_00BD3CF0(M2C_FIELD(temp_v0, f32 *, 0x6C), M2C_FIELD(temp_v0, f32 *, 0x70));
    temp_a0 = M2C_FIELD(arg0, void **, 0);
    temp_a0_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0x4E);
    temp_s0 = func_009B33A0(temp_a0, (s32) M2C_FIELD(temp_a0, f32 *, 0x6C), (s32) M2C_FIELD(temp_a0, f32 *, 0x70));
    switch (temp_a0_2) {                            /* irregular */
    case 2:
        break;
    case 0:
        if ((func_002727B0() & 0xFF) == 0x13) {
            temp_v1 = M2C_FIELD(arg0, void **, 0);
            M2C_FIELD(temp_v1, u8 *, 0x4E) = (u8) (M2C_FIELD(temp_v1, u8 *, 0x4E) + 1);
        case 1:
            if (func_0017F900() == 0) {
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0x4E) = 2U;
            } else {
                func_00BA9850((*(s32 *)D_00CBCB1C), 0, arg0);
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0x4E) = 3U;
            }
        }
        break;
    case 3:
        func_00BA9800((*(s32 *)D_00CBCB1C), arg0);
        break;
    }
    if (temp_s0 >= 0x10000U) {
        if ((M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 6) == 0) && (temp_s0 >= 0x400001U)) {
            func_00BD3BA0(arg0, 5, 1);
        }
    } else {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0x6C) = 13337.0f;
        temp_a0_3 = M2C_FIELD(arg0, void **, 0);
        if (M2C_FIELD(temp_a0_3, f32 *, 0xE0) < 0.0f) {
            M2C_FIELD(temp_a0_3, f32 *, 0x6C) = (f32) (M2C_FIELD(temp_a0_3, f32 *, 0x6C) * -1.0f);
        }
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0x70) = 9113.0f;
        temp_a0_4 = M2C_FIELD(arg0, void **, 0);
        if (M2C_FIELD(temp_a0_4, f32 *, 0xE8) < 0.0f) {
            M2C_FIELD(temp_a0_4, f32 *, 0x70) = (f32) (M2C_FIELD(temp_a0_4, f32 *, 0x70) * -1.0f);
        }
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0xB8;
    }
}
