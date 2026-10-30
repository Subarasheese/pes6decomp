/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001F4200(void *arg0) {
    f32 sp80;
    f32 sp84;
    f32 sp88;
    f32 sp8C;
    f32 sp90;
    f32 sp94;
    s32 sp98;
    f32 temp_f3;
    void *temp_s2;
    void *var_s4;

    if (M2C_FIELD(arg0, u8 *, 2) != 0) {
        var_s4 = M2C_FIELD(arg0, void **, 0x2C);
        if (var_s4 != NULL) {
            temp_s2 = arg0 + 8;
            do {
                M2C_FIELD(var_s4, u8 *, 1) = (u8) (M2C_FIELD(var_s4, u8 *, 1) | M2C_FIELD(arg0, u8 *, 1));
                temp_f3 = M2C_FIELD(arg0, f32 *, 8);
                sp84 = M2C_FIELD(temp_s2, f32 *, 4);
                sp88 = M2C_FIELD(temp_s2, f32 *, 8);
                sp90 = temp_f3;
                sp98 = 0;
                sp80 = temp_f3;
                sp94 = sp84;
                sp8C = M2C_FIELD(temp_s2, f32 *, 0xC);
                M2C_FIELD(var_s4, M2C_UNK (**)(void *, f32 *), 0x3C)(var_s4, &sp90);
                var_s4 = M2C_FIELD(var_s4, void **, 0x38);
            } while (var_s4 != NULL);
        }
        M2C_FIELD(arg0, u8 *, 1) = 0U;
    }
    return 0;
}
