/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00B27360(void);
extern void *D_003EAD94;

void func_00B272C0(void) {
    s32 temp_v1;
    s8 var_v1;

    temp_v1 = func_00B27360() & 0xFF;
    if (D_003EAD94 != NULL) {
        var_v1 = temp_v1 & 0xFF;
        if (var_v1 >= 6) {
            if (var_v1 >= 0xC) {
                if (var_v1 >= 0xF) {
                    var_v1 -= 0xF;
                    M2C_FIELD(D_003EAD94, s8 *, 0xD9C) = 3;
                    M2C_FIELD(D_003EAD94, s8 *, 0xD7C) = 2;
                } else {
                    var_v1 -= 0xC;
                    M2C_FIELD(D_003EAD94, s8 *, 0xD9C) = 2;
                    M2C_FIELD(D_003EAD94, s8 *, 0xD7C) = 1;
                }
            } else {
                var_v1 -= 6;
                M2C_FIELD(D_003EAD94, s8 *, 0xD9C) = 1;
                M2C_FIELD(D_003EAD94, s8 *, 0xD7C) = 0;
            }
        } else {
            M2C_FIELD(D_003EAD94, s8 *, 0xD9C) = 0;
            M2C_FIELD(D_003EAD94, s8 *, 0xD7C) = 0;
        }
        M2C_FIELD(D_003EAD94, s8 *, 0xD9B) = var_v1;
    }
}
