/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00B2B920(void);
extern void *D_003EAD98;

void func_00B2B860(void) {
    s32 temp_v1;
    s8 var_v1;

    temp_v1 = func_00B2B920() & 0xFF;
    if (D_003EAD98 != NULL) {
        var_v1 = temp_v1 & 0xFF;
        if (var_v1 >= 5) {
            if (var_v1 >= 0xA) {
                if (var_v1 >= 0xC) {
                    if (var_v1 >= 0xF) {
                        var_v1 -= 0xF;
                        M2C_FIELD(D_003EAD98, s8 *, 0x1380) = 4;
                        M2C_FIELD(D_003EAD98, s8 *, 0x1360) = 2;
                    } else {
                        var_v1 -= 0xC;
                        M2C_FIELD(D_003EAD98, s8 *, 0x1380) = 3;
                        M2C_FIELD(D_003EAD98, s8 *, 0x1360) = 1;
                    }
                } else {
                    var_v1 -= 0xA;
                    M2C_FIELD(D_003EAD98, s8 *, 0x1380) = 2;
                    M2C_FIELD(D_003EAD98, s8 *, 0x1360) = 0;
                }
            } else {
                var_v1 -= 5;
                M2C_FIELD(D_003EAD98, s8 *, 0x1380) = 1;
                M2C_FIELD(D_003EAD98, s8 *, 0x1360) = 0;
            }
        } else {
            M2C_FIELD(D_003EAD98, s8 *, 0x1380) = 0;
            M2C_FIELD(D_003EAD98, s8 *, 0x1360) = 0;
        }
        M2C_FIELD(D_003EAD98, s8 *, 0x137F) = var_v1;
    }
}
