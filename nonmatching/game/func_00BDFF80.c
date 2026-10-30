/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00BD3CF0(void **, f32, f32);           /* extern */
M2C_UNK func_00BD4040(M2C_UNK);                     /* extern */

void func_00BDFF80(void **arg0) {
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_v0 = *arg0;
    M2C_FIELD(temp_v0, f32 *, 0x6C) = (f32) M2C_FIELD(temp_v0, f32 *, 0xE0);
    temp_v0_2 = *arg0;
    M2C_FIELD(temp_v0_2, f32 *, 0x70) = (f32) M2C_FIELD(temp_v0_2, f32 *, 0xE8);
    func_00BD4040(1);
    temp_v0_3 = *arg0;
    func_00BD3CF0(arg0, M2C_FIELD(temp_v0_3, f32 *, 0x6C), M2C_FIELD(temp_v0_3, f32 *, 0x70));
    M2C_FIELD(*arg0, s16 *, 0x18) = 0x8E;
}
