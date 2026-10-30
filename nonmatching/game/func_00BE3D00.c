/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00B364D0(u32);
extern s32 func_002079F0(void *);
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
u32 func_009B33A0(void *, s32, s32);                /* extern */
s32 func_00B35C60();                                /* extern */
M2C_UNK func_00B846A0(void *);                      /* extern */
M2C_UNK func_00BD3B80(void *, s8);                  /* extern */
M2C_UNK func_00BD3CF0(void *, f32, f32);            /* extern */
M2C_UNK func_00BE2800(void *);                      /* extern */
extern char D_00CBCD81[];

void func_00BE3D00(void *arg0) {
    s8 temp_s0;
    u32 temp_v0_2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_v0;

    temp_s0 = (func_00B35C60() == 0) & 0xFF;
    func_00BD3B80(arg0, temp_s0);
    temp_v0 = M2C_FIELD(arg0, void **, 0);
    func_00BD3CF0(arg0, M2C_FIELD(temp_v0, f32 *, 0x6C), M2C_FIELD(temp_v0, f32 *, 0x70));
    temp_a0 = M2C_FIELD(arg0, void **, 0);
    temp_v0_2 = func_009B33A0(temp_a0, (s32) M2C_FIELD(temp_a0, f32 *, 0x6C), (s32) M2C_FIELD(temp_a0, f32 *, 0x70));
    if (((*(u8 *)D_00CBCD81) != 0) && (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x12) == 4)) {
        temp_a0_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
        if (M2C_FIELD(temp_a0_2, u8 *, 0x2D) != (temp_s0 & 0xFF)) {
            (*(u8 *)D_00CBCD81) = 0;
        } else if (func_002079F0(temp_a0_2) != 0) {
            func_00B364D0(2U);
            M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), s8 *, 0x2D) = temp_s0;
            func_00209A00(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x59B, 0);
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x66) = 0xFF;
            func_00B846A0(arg0);
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0x60;
        }
    } else if (temp_v0_2 < 0x190000U) {
        func_00BE2800(arg0);
    }
}
