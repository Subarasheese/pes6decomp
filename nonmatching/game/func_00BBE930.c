/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u32 func_009B33A0(void *, s32, s32);                /* extern */
s16 func_009B3480(void *, M2C_UNK, f32);            /* extern */
M2C_UNK func_00B37330(u8);                          /* extern */
M2C_UNK func_00BBA080(void **);                     /* extern */
s32 func_00BBB8C0(M2C_UNK);                         /* extern */
M2C_UNK func_00BD3CF0(f32, f32);                    /* extern */

void func_00BBE930(void **arg0) {
    void *temp_a0;
    void *temp_a0_2;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    temp_v0 = *arg0;
    func_00BD3CF0(M2C_FIELD(temp_v0, f32 *, 0x6C), M2C_FIELD(temp_v0, f32 *, 0x70));
    temp_a0 = *arg0;
    if (func_009B33A0(temp_a0, (s32) M2C_FIELD(temp_a0, f32 *, 0x6C), (s32) M2C_FIELD(temp_a0, f32 *, 0x70)) < 0xC41U) {
        M2C_FIELD(*arg0, s8 *, 0x4E) = (s8) (func_00BBB8C0(4) + 4);
        temp_v1 = *arg0;
        if (M2C_FIELD(temp_v1, f32 *, 0xE0) < 0.0f) {
            M2C_FIELD(temp_v1, u16 *, 0x26) = 0x8000U;
        } else {
            M2C_FIELD(temp_v1, u16 *, 0x26) = 0U;
        }
        temp_v1_2 = *arg0;
        M2C_FIELD(temp_v1_2, u16 *, 0x28) = (u16) M2C_FIELD(temp_v1_2, u16 *, 0x26);
        temp_a0_2 = *arg0;
        M2C_FIELD(*arg0, s16 *, 0x2C) = func_009B3480(temp_a0_2, 0, M2C_FIELD(temp_a0_2, f32 *, 0xE8));
        func_00BBA080(arg0);
        func_00B37330(M2C_FIELD(*arg0, u8 *, 0));
    }
}
