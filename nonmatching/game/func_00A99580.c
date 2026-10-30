/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B30B0(u16, s32);                        /* extern */
s32 func_009B3480(void *, u8, f32, f32);            /* extern */
extern char D_00591E4C[];

void func_00A99580(void *arg0) {
    f32 temp_f12;
    f32 temp_f13;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    s32 var_v1_2;
    u8 temp_a1;

    temp_f12 = M2C_FIELD(arg0, f32 *, 0xE0);
    var_v1 = (s32) temp_f12;
    if (var_v1 > 0) {

    } else {
        var_v1 = -var_v1;
    }
    if ((f32) var_v1 < 13721.0f) {
        var_v1_2 = (s32) M2C_FIELD(arg0, f32 *, 0xE8);
        if (var_v1_2 > 0) {

        } else {
            var_v1_2 = -var_v1_2;
        }
        if (!((f32) var_v1_2 < 8985.0f)) {
            goto block_8;
        }
    } else {
block_8:
        if (M2C_FIELD(arg0, u8 *, 0) != (*(u8 *)D_00591E4C)) {
            temp_a1 = M2C_FIELD(arg0, u8 *, 0x16);
            if (temp_a1 != 1) {
                goto block_10;
            }
            if (M2C_FIELD(arg0, u16 *, 0x18) == 0x30) {
                return;
            }
block_10:
            if ((temp_a1 != 0xFD) || (M2C_FIELD(arg0, u16 *, 0x18) != 0x1E)) {
                temp_f13 = M2C_FIELD(arg0, f32 *, 0xE8);
                var_v0 = (s32) temp_f13;
                if (var_v0 > 0) {

                } else {
                    var_v0 = -var_v0;
                }
                if (!((f32) var_v0 < 8985.0f)) {
                    var_v0_2 = func_009B3480(arg0, temp_a1, temp_f12, 0.0f);
                } else {
                    var_v0_2 = func_009B3480(arg0, temp_a1, 0.0f, temp_f13);
                }
                if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x28), var_v0_2 & 0xFFFF) & 0xFFFF) < 0x41) {
                    return;
                }
                M2C_FIELD(arg0, u8 *, 0x16) = 0xFDU;
                M2C_FIELD(arg0, u16 *, 0x18) = 0x1EU;
            }
        }
    }
}
