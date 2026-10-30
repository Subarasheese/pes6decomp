/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_011D40C0[];

void func_001210A0(void) {
    s32 temp_a0;
    s32 var_a2;
    s32 var_a3;
    s32 var_a4;
    s32 var_v0;
    s32 var_v0_2;
    void *temp_v1;

    var_a3 = 0;
    var_v0 = 0 * 0x14;
    do {
        var_a2 = 0;
        if (M2C_FIELD((var_v0 + ((void *)D_011D40C0)), s32 *, 0xC) > 0) {
            var_a4 = var_a3 + 1;
            var_v0_2 = var_a3 * 0x14;
            do {
                temp_a0 = var_a2 * 0x1C;
                var_a2 += 1;
                temp_v1 = var_v0_2 + ((void *)D_011D40C0);
                M2C_FIELD((M2C_FIELD(temp_v1, s32 *, 0) + temp_a0), s32 *, 0x18) = 0;
                var_v0_2 = var_a3 * 0x14;
            } while (var_a2 < M2C_FIELD(temp_v1, s32 *, 0xC));
        } else {
            var_a4 = var_a3 + 1;
        }
        var_a3 = var_a4;
        var_v0 = var_a3 * 0x14;
    } while (var_a3 < 2);
}
