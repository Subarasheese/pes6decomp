/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0097F630(u8);                              /* extern */
s32 func_0097FB80(s32, M2C_UNK);                    /* extern */
s32 func_0097FB90(u8);                              /* extern */
s8 func_00980170(u8);                               /* extern */
s32 func_00980370(u8);                              /* extern */
s32 func_009E0290();                                /* extern */
M2C_UNK func_009F10D0(s32);                         /* extern */
extern void *D_00A7E020;

void *func_009F15B0(s32 arg0, void *arg1) {
    s32 var_v0;
    s32 var_v0_3;
    s8 var_v0_2;
    u8 var_a0;
    u8 var_a0_2;
    u8 var_s0;

    if (arg0 >= 0) {
        if (arg0 < (s32) M2C_FIELD(D_00A7E020, u8 *, 4)) {
            if ((M2C_FIELD(D_00A7E020, u8 *, 3) != arg0) && (arg0 == func_009E0290())) {
                M2C_FIELD(D_00A7E020, u8 *, 3) = (u8) arg0;
                func_009F10D0(arg0);
            }
            if (arg0 < 0) {
                var_a0 = 0;
            } else if (arg0 >= 0x19) {
                var_a0 = 0;
            } else {
                var_a0 = M2C_FIELD((arg0 + D_00A7E020), u8 *, 8);
            }
            if (M2C_FIELD(D_00A7E020, u8 *, 0) != 0) {
                var_v0 = func_00980370(var_a0);
            } else {
                var_v0 = func_0097F630(var_a0);
            }
            M2C_FIELD(arg1, s32 *, 0) = var_v0;
            M2C_FIELD(arg1, s8 *, 8) = 0;
            if (M2C_FIELD(D_00A7E020, u8 *, 0) == 0) {
                var_v0_2 = 1;
            } else {
                if (arg0 < 0) {
                    var_s0 = 0;
                } else if (arg0 < 0x19) {
                    var_s0 = M2C_FIELD((arg0 + D_00A7E020), u8 *, 8);
                } else {
                    var_s0 = 0;
                }
                if (M2C_FIELD((var_s0 + D_00A7E020), s8 *, 0x21) == -1) {
                    M2C_FIELD((var_s0 + D_00A7E020), s8 *, 0x21) = func_00980170(var_s0);
                }
                var_v0_2 = M2C_FIELD((var_s0 + D_00A7E020), s8 *, 0x21);
            }
            if (var_v0_2 == 0) {
                M2C_FIELD(arg1, s32 *, 0xC) = 0;
            } else {
                M2C_FIELD(arg1, s32 *, 0xC) = 1;
            }
            if (M2C_FIELD(D_00A7E020, u8 *, 0) == 0) {
                var_v0_3 = 0;
            } else {
                if (arg0 < 0) {
                    var_a0_2 = 0;
                } else if (arg0 < 0x19) {
                    var_a0_2 = M2C_FIELD((arg0 + D_00A7E020), u8 *, 8);
                } else {
                    var_a0_2 = 0;
                }
                var_v0_3 = func_0097FB90(var_a0_2);
            }
            if (func_0097FB80(var_v0_3, 9) != 0) {
                M2C_FIELD(arg1, s32 *, 0xC) = 2;
            }
            M2C_FIELD(arg1, s8 *, 0x10) = 1;
            M2C_FIELD(arg1, s8 *, 0x11) = 0;
            return arg1;
        }
        goto block_4;
    }
block_4:
    return NULL;
}
