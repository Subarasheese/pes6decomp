/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B33A0(void *, s32, s32);                /* extern */
void **func_00B2A420(s32);                          /* extern */
M2C_UNK func_00BD3CF0(void *, f32, f32);            /* extern */
M2C_UNK func_00BD7260(void *, void **, u8);         /* extern */

void func_00BBA5B0(void *arg0) {
    void **temp_s1;
    void *temp_a0;
    void *temp_v0;

    temp_s1 = func_00B2A420(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x90));
    temp_v0 = M2C_FIELD(arg0, void **, 0);
    func_00BD3CF0(arg0, M2C_FIELD(temp_v0, f32 *, 0x6C), M2C_FIELD(temp_v0, f32 *, 0x70));
    temp_a0 = M2C_FIELD(arg0, void **, 0);
    if (func_009B33A0(temp_a0, (s32) M2C_FIELD(temp_a0, f32 *, 0x6C), (s32) M2C_FIELD(temp_a0, f32 *, 0x70)) < 0x2400) {
        M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), u8 *, 0x2D) = (u8) M2C_FIELD(M2C_FIELD(*temp_s1, void **, 4), u8 *, 0x2D);
        func_00BD7260(arg0, temp_s1, M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C));
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0x6C;
    }
}
