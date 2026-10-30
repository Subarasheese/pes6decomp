/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void ***func_00B2A420(u8);                          /* extern */
M2C_UNK func_00BD3BA0(void **, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_00BD3CF0(void **, f32, f32);           /* extern */
M2C_UNK func_00BD4040(void **, M2C_UNK);            /* extern */

void func_00B86630(void **arg0) {
    void ***temp_v0;
    void **temp_a0_2;
    void *temp_a0;
    void *temp_v0_2;

    temp_a0 = *arg0;
    temp_v0 = func_00B2A420(M2C_FIELD(((M2C_FIELD(temp_a0, u8 *, 0x13) * 0xB) + temp_a0), u8 *, 0x1B4));
    temp_a0_2 = *temp_v0;
    M2C_FIELD(*arg0, f32 *, 0x6C) = (f32) M2C_FIELD(temp_a0_2, f32 *, 0xE0);
    M2C_FIELD(*arg0, f32 *, 0x70) = (f32) M2C_FIELD(*temp_v0, f32 *, 0xE8);
    if (M2C_FIELD(*arg0, s32 *, 0x1C) >= 0x681) {
        func_00BD4040(arg0, 2);
    } else {
        func_00BD4040(temp_a0_2, 1);
        func_00BD3BA0(arg0, 4, 1);
    }
    func_00BD3BA0(arg0, 5, 1);
    temp_v0_2 = *arg0;
    func_00BD3CF0(arg0, M2C_FIELD(temp_v0_2, f32 *, 0x6C), M2C_FIELD(temp_v0_2, f32 *, 0x70));
    M2C_FIELD(*arg0, s16 *, 0x18) = 0x64;
}
