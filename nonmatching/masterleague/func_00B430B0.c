/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EAE6C;

s32 func_00B430B0(void) {
    s32 var_a1_2;
    s32 var_a4;
    s32 var_a5;
    s32 var_v0;
    void *var_a1;
    void *var_a2;
    void *var_a3;

    var_a3 = D_003EAE6C;
    if (var_a3 != NULL) {
        var_v0 = 0;
        var_a5 = 0;
        var_a2 = var_a3;
        do {
            var_a4 = 0;
            var_a1 = var_a2;
loop_6:
            if (M2C_FIELD(var_a1, u16 *, 0x620) == 0xFFFF) {
                var_v0 = (var_v0 + 1) & 0xFF;
            }
            var_a4 += 1;
            var_a1 += 2;
            if (var_a4 < 0x10) {
                goto loop_6;
            }
            var_a5 += 1;
            var_a2 += 0x20;
        } while (var_a5 < 4);
        var_a1_2 = 0;
        do {
            if (M2C_FIELD(var_a3, u16 *, 0x6A0) == 0xFFFF) {
                var_v0 = (var_v0 + 1) & 0xFF;
            }
            var_a1_2 += 1;
            var_a3 += 2;
        } while (var_a1_2 < 8);
        return var_v0;
    }
    return 0xFF;
}
