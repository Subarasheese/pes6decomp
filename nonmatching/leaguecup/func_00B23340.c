/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00B233E0(void);
extern void *D_003EAD90;

void func_00B23340(void) {
    s32 temp_v1;
    s8 var_v1;

    temp_v1 = func_00B233E0() & 0xFF;
    if (D_003EAD90 != NULL) {
        var_v1 = temp_v1 & 0xFF;
        if (var_v1 >= 6) {
            if (var_v1 >= 0xA) {
                if (var_v1 >= 0xD) {
                    var_v1 -= 0xD;
                    M2C_FIELD(D_003EAD90, s8 *, 0xC5C) = 3;
                    M2C_FIELD(D_003EAD90, s8 *, 0xC3C) = 2;
                } else {
                    var_v1 -= 0xA;
                    M2C_FIELD(D_003EAD90, s8 *, 0xC5C) = 2;
                    M2C_FIELD(D_003EAD90, s8 *, 0xC3C) = 1;
                }
            } else {
                var_v1 -= 6;
                M2C_FIELD(D_003EAD90, s8 *, 0xC5C) = 1;
                M2C_FIELD(D_003EAD90, s8 *, 0xC3C) = 0;
            }
        } else {
            M2C_FIELD(D_003EAD90, s8 *, 0xC5C) = 0;
            M2C_FIELD(D_003EAD90, s8 *, 0xC3C) = 0;
        }
        M2C_FIELD(D_003EAD90, s8 *, 0xC5B) = var_v1;
    }
}
