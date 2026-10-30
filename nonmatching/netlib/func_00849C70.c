/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern f32 *D_003E74CC;

void func_00849C70(void *arg0) {
    u8 temp_a1;
    void *temp_a2;

    temp_a2 = M2C_FIELD(arg0, void **, 4);
    if (M2C_FIELD(temp_a2, f32 *, 0x28) < 0.5f) {
        M2C_FIELD(temp_a2, f32 *, 0x28) = (f32) *D_003E74CC;
    }
    temp_a1 = M2C_FIELD(arg0, u8 *, 0x16);
    switch (temp_a1) {                              /* irregular */
    case 2:
        if (M2C_FIELD(arg0, s32 *, 0xA8) == 0x7FFF) {
            M2C_FIELD(arg0, s32 *, 0xA8) = 0x7800;
            return;
        }
        return;
    case 0:
        M2C_FIELD(arg0, s32 *, 0xA0) = (s32) M2C_FIELD(arg0, f32 *, 0xE0);
        M2C_FIELD(arg0, s32 *, 0xA4) = (s32) M2C_FIELD(arg0, f32 *, 0xE8);
        break;
    }
}
