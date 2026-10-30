/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D80(void *, s32);
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_009B3070(u16, u16);                        /* extern */
u16 func_009B3480(void *, f32, f32);                /* extern */
M2C_UNK func_00B2ACF0(void *);                      /* extern */
M2C_UNK func_00B35E10(void *, f32 *, f32 *);        /* extern */
M2C_UNK func_00B89080(void *, u16, u8, f32, f32);   /* extern */
M2C_UNK func_00B89460(void *);                      /* extern */
s32 func_00BBB8C0(M2C_UNK, void *);                 /* extern */
extern char D_00CBCAFE[];
extern char D_00CBCB00[];
extern char D_00CBCB04[];

void func_00B888B0(void *arg0) {
    f32 sp28;
    f32 sp2C;
    void *temp_a0;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_v0;
    void *var_v0;

    temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
    if (M2C_FIELD(temp_a0, u16 *, 0x30) != 0x517) {
        func_00209A00(temp_a0, 0x517, 0);
        func_00207390(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0xA);
    }
    func_00B2ACF0(arg0);
    if ((func_00207D80(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x16) != 0) || (func_00207D80(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x30) != 0)) {
        func_00B35E10(arg0, &sp2C, &sp28);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x2C) = func_009B3480(M2C_FIELD(arg0, void **, 0), sp2C, sp28);
        temp_v0 = M2C_FIELD(arg0, void **, 0);
        if ((func_009B3070(M2C_FIELD(temp_v0, u16 *, 0x26), M2C_FIELD(temp_v0, u16 *, 0x2C)) & 0xFFFF) >= 0x4000) {
            temp_a1 = M2C_FIELD(arg0, void **, 0);
            if ((((M2C_FIELD(temp_a1, u16 *, 0x2C) - M2C_FIELD(temp_a1, u16 *, 0x26)) + 0x10000) & 0xFFFF) >= 0x8001) {
                var_v0 = M2C_FIELD(temp_a1, void **, 4);
                goto block_18;
            }
            M2C_FIELD(M2C_FIELD(temp_a1, void **, 4), s8 *, 0x2D) = 0;
        } else {
            temp_a1_2 = M2C_FIELD(arg0, void **, 0);
            if ((((M2C_FIELD(temp_a1_2, u16 *, 0x2C) - M2C_FIELD(temp_a1_2, u16 *, 0x26)) + 0x10000) & 0xFFFF) >= 0x8001) {
                var_v0 = M2C_FIELD(temp_a1_2, void **, 4);
block_18:
                M2C_FIELD(var_v0, s8 *, 0x2D) = 1;
            } else {
                M2C_FIELD(M2C_FIELD(temp_a1_2, void **, 4), s8 *, 0x2D) = 0;
            }
        }
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x52) = 1;
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x50) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = (s8) (func_00BBB8C0(0x88, M2C_FIELD(arg0, void **, 0)) % 2);
        func_00209A00(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x528, 0x1C);
        func_00207390(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 8);
        func_00B89460(arg0);
        func_00B89080(arg0, (*(u16 *)D_00CBCAFE), M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), u8 *, 0x2D), (*(f32 *)D_00CBCB00), (*(f32 *)D_00CBCB04));
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 5;
    }
}
