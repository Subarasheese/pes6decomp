/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00A9B100(void *arg0) {
    s32 temp_v1_2;
    s32 var_v0;
    s32 var_v0_2;
    u16 temp_v1;
    void *temp_a1;

    temp_a1 = M2C_FIELD(arg0, void **, 4);
    temp_v1 = M2C_FIELD(temp_a1, u16 *, 0x30);
    switch (temp_v1) {                              /* irregular */
    case 0x1A5:
        return 0x30;
    case 0xC1:
        if (M2C_FIELD(temp_a1, f32 *, 0x38) <= 10.0f) {
            var_v0 = 0x50;
        } else {
            var_v0 = 0x20;
        }
        return var_v0;
    case 0x1A6:
    case 0x1A4:
        return 0x10;
    case 0x3D2:
    case 0xC6:
    case 0xC7:
    case 0x11B:
    case 0x11F:
    case 0x11D:
    case 0x128:
    case 0x12B:
    case 0x114:
        return 0x40;
    case 0x1A7:
    case 0x0:
    case 0x12E:
        temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x1C);
        var_v0_2 = temp_v1_2 >> 6;
        if (temp_v1_2 < 0) {
            var_v0_2 = (s32) (temp_v1_2 + 0x3F) >> 6;
        }
        return var_v0_2 + 0x80;
    case 0x24:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x28A:
    case 0x11:
        return 0x100;
    default:
        return 0x50;
    }
}
