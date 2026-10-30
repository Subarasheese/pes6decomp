/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002DB940(void *);
extern s32 func_002DB870(void *);
extern s16 func_002DB400(void *, s16, s32, s32);
M2C_UNK func_002DB4D0(void *, s32, s32);            /* extern */
M2C_UNK func_002DF8E0(s32, s32);                    /* extern */
s32 func_0081EAE0();                                /* extern */
s32 func_0081EB20();                                /* extern */
s32 func_0081EB60(M2C_UNK);                         /* extern */
M2C_UNK func_009DB740(void *);                      /* extern */
M2C_UNK func_009DB860(void *, M2C_UNK);             /* extern */
extern char D_00A7DEB8[];

s32 func_009DCDF0(void) {
    s32 temp_s1;
    s32 temp_v0;
    s32 var_a2;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s3;
    u8 temp_v1_2;
    void *temp_s0;
    void *temp_v1;
    void *var_v1;

    if (M2C_FIELD(((void *)D_00A7DEB8), void **, 0) != NULL) {
        if (M2C_FIELD(M2C_FIELD(((void *)D_00A7DEB8), void **, 0), u8 *, 0x650) != 0) {
            temp_s1 = func_002DB870(M2C_FIELD(M2C_FIELD(((void *)D_00A7DEB8), void **, 0), void **, 8)) & 0xFF;
            func_002DF8E0(M2C_FIELD(M2C_FIELD(((void *)D_00A7DEB8), void **, 0), s32 *, 0xC), temp_s1);
            var_s0 = 0;
            do {
                func_009DB740(M2C_FIELD(((void *)D_00A7DEB8), void **, 0) + (var_s0 * 0x128) + 0x10);
                var_a2 = 0;
                var_v1 = M2C_FIELD(((void *)D_00A7DEB8), void **, 0);
loop_10:
                temp_v1 = (var_s0 * 8) + var_v1 + var_a2;
                temp_v1_2 = M2C_FIELD(temp_v1, u8 *, 0x5E6);
                if ((s32) temp_v1_2 > 0) {
                    M2C_FIELD(temp_v1, u8 *, 0x5E6) = (u8) (temp_v1_2 - 1);
                }
                var_a2 += 1;
                if (var_a2 < 2) {
                    var_v1 = M2C_FIELD(((void *)D_00A7DEB8), void **, -0x2148);
                    goto loop_10;
                }
                var_s0 += 1;
            } while (var_s0 < 5);
            var_s2 = 0;
            temp_s0 = M2C_FIELD(((void *)D_00A7DEB8), void **, 0);
            do {
                func_009DB860(temp_s0 + (var_s2 * 0x128) + 0x10, 0);
                var_s2 += 1;
            } while (var_s2 < 5);
            if (temp_s1 & 0xFF) {
                func_009DB860(temp_s0 + (((s32) (func_002DB940(M2C_FIELD(temp_s0, void **, 8)) + 1) % 5) * 0x128) + 0x10, 1);
            }
            temp_v0 = func_002DB940(M2C_FIELD(M2C_FIELD(((void *)D_00A7DEB8), void **, 0), void **, 8));
            var_s3 = 0;
            var_s2_2 = 0;
            var_s1 = 0;
            if (temp_v0 > 0) {
                if (func_0081EB60(0x10) != 0) {
                    var_s3 = 0x10;
                }
                var_s2_2 = func_0081EB20() & 0xFF;
            }
            if (temp_v0 < (M2C_FIELD(M2C_FIELD(((void *)D_00A7DEB8), void **, 0), s32 *, 0x64C) - 1)) {
                if (func_0081EB60(0x40) != 0) {
                    var_s3 |= 0x40;
                }
                var_s1 = func_0081EAE0() & 0xFF;
            }
            if ((var_s2_2 & 0xFF) || (var_s1 & 0xFF)) {
                func_002DB400(M2C_FIELD(M2C_FIELD(((void *)D_00A7DEB8), void **, 0), void **, 8), (s16) temp_v0, var_s2_2, var_s1);
            } else {
                func_002DB4D0(M2C_FIELD(M2C_FIELD(((void *)D_00A7DEB8), void **, 0), void **, 8), temp_v0, var_s3);
            }
        }
        return 1;
    }
    return 0;
}
