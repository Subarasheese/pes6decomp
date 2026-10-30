/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00B364D0(u32);
extern s32 func_002079F0(void *);
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
u32 func_009B33A0(void *, s32, s32);                /* extern */
s32 func_00B35C60();                                /* extern */
M2C_UNK func_00B36400(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00B36450();                                /* extern */
M2C_UNK func_00B9E2B0(void *);                      /* extern */
M2C_UNK func_00BD3CF0(void *, f32, f32);            /* extern */

void func_00BDF580(void *arg0) {
    s8 temp_s0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_v0;

    temp_s0 = func_00B35C60() & 0xFF;
    temp_v0 = M2C_FIELD(arg0, void **, 0);
    func_00BD3CF0(arg0, M2C_FIELD(temp_v0, f32 *, 0x6C), M2C_FIELD(temp_v0, f32 *, 0x70));
    temp_a0 = M2C_FIELD(arg0, void **, 0);
    if (func_009B33A0(temp_a0, (s32) M2C_FIELD(temp_a0, f32 *, 0x6C), (s32) M2C_FIELD(temp_a0, f32 *, 0x70)) >= 0x640000U) {
        if ((func_00B36450() != 0) && (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x12) == 4)) {
            temp_a0_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
            if (M2C_FIELD(temp_a0_2, u8 *, 0x2D) != (temp_s0 & 0xFF)) {

            }
            if (func_002079F0(temp_a0_2) != 0) {
                func_00209A00(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x59A, 0);
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), s8 *, 0x2D) = temp_s0;
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = 0;
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0xB2;
                func_00B364D0(2U);
            }
        }
    } else {
        func_00B36400(1, 1);
        func_00B9E2B0(arg0);
    }
}
