/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00B364D0(u32);
extern s32 func_002079F0(void *);
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
u32 func_009B33A0(void *, s32, s32);                /* extern */
s32 func_00B35BF0(void *);                          /* extern */
s32 func_00B35C60(void *);                          /* extern */
M2C_UNK func_00B36400(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00B36450();                                /* extern */
M2C_UNK func_00B9E2B0(void *);                      /* extern */
M2C_UNK func_00BD3B80(void *, u8);                  /* extern */
M2C_UNK func_00BD3BA0(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00BD3CF0(void *, f32, f32);            /* extern */
extern char D_00CBCAD1[];

void func_00BE0C10(void *arg0) {
    s32 var_v0;
    u32 temp_v0_2;
    u8 var_s1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a1;
    void *temp_v0;

    temp_a1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
    var_s1 = M2C_FIELD(temp_a1, u8 *, 0x2D);
    switch ((*(u8 *)D_00CBCAD1)) {                           /* irregular */
    case 40:
        break;
    case 41:
        var_v0 = func_00B35BF0(temp_a1);
block_6:
        var_s1 = var_v0 & 0xFF;
        break;
    case 46:
        var_v0 = func_00B35C60(temp_a1);
        goto block_6;
    }
    func_00BD3B80(arg0, var_s1);
    temp_v0 = M2C_FIELD(arg0, void **, 0);
    func_00BD3CF0(arg0, M2C_FIELD(temp_v0, f32 *, 0x6C), M2C_FIELD(temp_v0, f32 *, 0x70));
    temp_a0 = M2C_FIELD(arg0, void **, 0);
    temp_v0_2 = func_009B33A0(temp_a0, (s32) M2C_FIELD(temp_a0, f32 *, 0x6C), (s32) M2C_FIELD(temp_a0, f32 *, 0x70));
    if (temp_v0_2 >= 0x640000U) {
        if ((temp_v0_2 < 0x01E40000U) && (M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0) & 0x20)) {
            func_00BD3BA0(arg0, 5, 0);
        } else if ((func_00B36450() != 0) && (temp_v0_2 < 0xC40000U) && (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x12) == 4)) {
            temp_a0_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
            if (M2C_FIELD(temp_a0_2, u8 *, 0x2D) != (var_s1 & 0xFF)) {

            }
            if (func_002079F0(temp_a0_2) != 0) {
                func_00B364D0(2U);
                func_00209A00(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x542, 0);
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), u8 *, 0x2D) = var_s1;
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0x5B;
            }
        }
    } else {
        func_00B36400(1, 1);
        func_00B9E2B0(arg0);
    }
}
