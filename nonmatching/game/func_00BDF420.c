/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D80(void *, s32);
extern void func_00209820(void);
extern s32 func_00207D10(void *);
extern s32 func_002079F0(void *);
M2C_UNK func_00208610(void *);                      /* extern */
M2C_UNK func_00209A00(void *, u16, s32);            /* extern */
u32 func_009B33A0(void *, s32, s32);                /* extern */
M2C_UNK func_00B2ACF0();                            /* extern */
M2C_UNK func_00B9E2B0(void **);                     /* extern */

void func_00BDF420(void **arg0) {
    u32 temp_s1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;

    func_00B2ACF0();
    func_00209820();
    temp_a0 = *arg0;
    temp_s1 = func_009B33A0(temp_a0, (s32) M2C_FIELD(temp_a0, f32 *, 0x6C), (s32) M2C_FIELD(temp_a0, f32 *, 0x70));
    if (func_00207D10(M2C_FIELD(*arg0, void **, 4)) == 0) {
        if (temp_s1 < 0x640001U) {
            goto block_2;
        }
        temp_a0_2 = M2C_FIELD(*arg0, void **, 4);
        if (func_00207D80(temp_a0_2, M2C_FIELD(M2C_FIELD(temp_a0_2, void **, 4), u8 *, 2) * 2) != 0) {
            temp_a0_3 = M2C_FIELD(*arg0, void **, 4);
            func_00209A00(temp_a0_3, M2C_FIELD(temp_a0_3, u16 *, 0x30), (M2C_FIELD(M2C_FIELD(temp_a0_3, void **, 4), u8 *, 1) * 2) & 0xFFFF);
            temp_a0_4 = *arg0;
            M2C_FIELD(temp_a0_4, u8 *, 0x4E) = (u8) (M2C_FIELD(temp_a0_4, u8 *, 0x4E) + 1);
        } else {
block_2:
            if ((temp_s1 < 0x640000U) && (temp_a0_5 = *arg0, (((s32) M2C_FIELD(temp_a0_5, u8 *, 0x4E) < 4) != 0)) && (func_002079F0(M2C_FIELD(temp_a0_5, void **, 4)) != 0)) {
                func_00209A00(M2C_FIELD(*arg0, void **, 4), 0x59BU, 0);
                M2C_FIELD(*arg0, s16 *, 0x18) = 0xB3;
            }
        }
    } else {
        func_00208610(M2C_FIELD(*arg0, void **, 4));
        func_00B9E2B0(arg0);
    }
}
