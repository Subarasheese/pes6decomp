/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EAE6C;

void func_00B43540(void) {
    s32 var_a2_2;
    s32 var_a5;
    s32 var_a6;
    void *var_a2;
    void *var_a3;
    void *var_a4;

    var_a4 = D_003EAE6C;
    if (var_a4 != NULL) {
        if (M2C_FIELD(var_a4, u16 *, 0x6B0) != 0x126) {
            M2C_FIELD(var_a4, u16 *, 0x6B0) = 0xFFFFU;
        }
        var_a6 = 0;
        var_a3 = var_a4;
        do {
            var_a5 = 0;
            var_a2 = var_a3;
loop_5:
            if (M2C_FIELD(var_a2, u16 *, 0x620) != 0x126) {
                M2C_FIELD(var_a2, u16 *, 0x620) = 0xFFFFU;
            }
            var_a5 += 1;
            var_a2 += 2;
            if (var_a5 < 0x10) {
                goto loop_5;
            }
            var_a6 += 1;
            var_a3 += 0x20;
        } while (var_a6 < 4);
        var_a2_2 = 0;
        do {
            if (M2C_FIELD(var_a4, u16 *, 0x6A0) != 0x126) {
                M2C_FIELD(var_a4, u16 *, 0x6A0) = 0xFFFFU;
            }
            var_a2_2 += 1;
            var_a4 += 2;
        } while (var_a2_2 < 8);
    }
}
