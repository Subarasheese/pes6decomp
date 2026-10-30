/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D80(void *, s32);
extern s32 func_00207D10(void *);
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00B2ACF0();                            /* extern */
M2C_UNK func_00BA8570(void **);                     /* extern */

void func_00B6BE30(void **arg0) {
    u8 temp_v1_2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a2;
    void *temp_v1;

    func_00B2ACF0();
    temp_a0 = M2C_FIELD(*arg0, void **, 4);
    if (M2C_FIELD(temp_a0, u16 *, 0x30) == 0x4A3) {
        if (func_00207D80(temp_a0, (M2C_FIELD(M2C_FIELD(temp_a0, void **, 4), u8 *, 2) * 2) - 1) != 0) {
            temp_a0_2 = *arg0;
            if ((s32) M2C_FIELD(temp_a0_2, u8 *, 0x4E) > 0) {
                temp_a0_3 = M2C_FIELD(temp_a0_2, void **, 4);
                M2C_FIELD(temp_a0_3, f32 *, 0x38) = (f32) (M2C_FIELD(M2C_FIELD(temp_a0_3, void **, 4), u8 *, 1) * 2);
                temp_v1 = *arg0;
                temp_v1_2 = M2C_FIELD(temp_v1, u8 *, 0x4E);
                if (temp_v1_2 != 0) {
                    M2C_FIELD(temp_v1, u8 *, 0x4E) = (u8) (temp_v1_2 - 1);
                }
            }
        }
    }
    temp_a2 = *arg0;
    temp_a0_4 = M2C_FIELD(temp_a2, void **, 4);
    if ((M2C_FIELD(temp_a0_4, u16 *, 0x30) == 0x4A3) && (M2C_FIELD(temp_a2, u8 *, 0x4E) == 0) && (func_00207D80(temp_a0_4, 0x80) != 0)) {
        func_00209A00(M2C_FIELD(*arg0, void **, 4), 0x59D, 0);
    }
    temp_a0_5 = M2C_FIELD(*arg0, void **, 4);
    if ((u32) (M2C_FIELD(temp_a0_5, u16 *, 0x30) - 0x59D) >= 2U) {

    } else if (func_00207D10(temp_a0_5) != 0) {
        func_00BA8570(arg0);
        M2C_FIELD(*arg0, s16 *, 0x18) = 4;
    }
}
