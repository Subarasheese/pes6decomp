/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0099DFF0();                                /* extern */
u16 func_0099F360(u8);                              /* extern */
s32 func_009B3070(u16, s32);                        /* extern */
extern char D_00591E7C[];

void func_00BF1360(void *arg0, s32 arg1) {
    f32 var_f1;
    f32 var_f1_2;
    s32 temp_s0;
    s32 temp_v0;
    s32 var_a2;
    s32 var_v0;
    u16 temp_a0;
    u16 var_v1;

    M2C_FIELD(arg0, u16 *, 0x22E) = (u16) M2C_FIELD(arg0, s32 *, 0xA0);
    if (M2C_FIELD(arg0, u8 *, 0x24) == 0) {
        if (arg1 == 0) {
            if ((*(s32 *)D_00591E7C) == 0) {
                return;
            }
            temp_a0 = M2C_FIELD(arg0, u16 *, 0x2A);
            temp_v0 = func_0099DFF0() & 0xFFFF;
            if (temp_a0 == 0) {
                var_v0 = temp_v0 - 0x4000;
            } else {
                var_v0 = temp_v0 + 0x4000;
            }
            temp_s0 = var_v0 & 0xFFFF;
            var_a2 = func_009B3070(temp_a0, temp_s0) & 0xFFFF;
            if (var_a2 >= 0) {
                var_f1 = (f32) var_a2;
            } else {
                var_f1 = 2.0f * (f32) (((u32) var_a2 >> 1) | (var_a2 & 1));
            }
            if (var_f1 <= 16384.0f) {
                if (var_a2 >= 0) {
                    var_f1_2 = (f32) var_a2;
                } else {
                    var_f1_2 = 2.0f * (f32) (((u32) var_a2 >> 1) | (var_a2 & 1));
                }
                if (!(var_f1_2 <= 12743.111f)) {
                    var_a2 = 0x31C7;
                }
                M2C_FIELD(arg0, u16 *, 0x22E) = (u16) M2C_FIELD(arg0, u16 *, 0x2A);
                if (((((temp_s0 & 0xFFFF) - M2C_FIELD(arg0, u16 *, 0x2A)) + 0x10000) & 0xFFFF) < 0x8001) {
                    var_v1 = M2C_FIELD(arg0, u16 *, 0x22E) + var_a2;
                } else {
                    var_v1 = M2C_FIELD(arg0, u16 *, 0x22E) - var_a2;
                }
                M2C_FIELD(arg0, u16 *, 0x22E) = var_v1;
            }
        } else {
            M2C_FIELD(arg0, u16 *, 0x22E) = func_0099F360(M2C_FIELD(arg0, u8 *, 0x47));
        }
    }
}
