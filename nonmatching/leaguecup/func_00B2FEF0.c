/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00B2FFB0(void);
extern void *D_003EAD9C;

void func_00B2FEF0(void) {
    s32 temp_v1;
    s8 var_v1;

    temp_v1 = func_00B2FFB0() & 0xFF;
    if (D_003EAD9C != NULL) {
        var_v1 = temp_v1 & 0xFF;
        if (var_v1 >= 9) {
            if (var_v1 >= 0x12) {
                if (var_v1 >= 0x14) {
                    if (var_v1 >= 0x17) {
                        var_v1 -= 0x17;
                        M2C_FIELD(D_003EAD9C, s8 *, 0x2B10) = 4;
                        M2C_FIELD(D_003EAD9C, s8 *, 0x2AF0) = 2;
                    } else {
                        var_v1 -= 0x14;
                        M2C_FIELD(D_003EAD9C, s8 *, 0x2B10) = 3;
                        M2C_FIELD(D_003EAD9C, s8 *, 0x2AF0) = 1;
                    }
                } else {
                    var_v1 -= 0x12;
                    M2C_FIELD(D_003EAD9C, s8 *, 0x2B10) = 2;
                    M2C_FIELD(D_003EAD9C, s8 *, 0x2AF0) = 0;
                }
            } else {
                var_v1 -= 9;
                M2C_FIELD(D_003EAD9C, s8 *, 0x2B10) = 1;
                M2C_FIELD(D_003EAD9C, s8 *, 0x2AF0) = 0;
            }
        } else {
            M2C_FIELD(D_003EAD9C, s8 *, 0x2B10) = 0;
            M2C_FIELD(D_003EAD9C, s8 *, 0x2AF0) = 0;
        }
        M2C_FIELD(D_003EAD9C, s8 *, 0x2B0F) = var_v1;
    }
}
