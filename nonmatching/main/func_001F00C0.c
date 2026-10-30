/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u16 *func_001F00C0(void *arg0, s32 arg1, M2C_UNK arg2, s32 *arg3) {
    s32 *var_a3;
    s32 temp_a1;
    s32 var_a1;
    s32 var_a4;
    u16 *var_v0;
    void **var_a0;

    var_a3 = arg3;
    if (arg0 != NULL) {
        temp_a1 = M2C_FIELD(arg0, s32 *, 4);
        var_a4 = 0;
        if (temp_a1 > 0) {
            var_a0 = M2C_FIELD(arg0, void ***, 8);
loop_3:
            var_a3 = M2C_FIELD(*var_a0, s32 **, 4);
            if (M2C_FIELD(var_a3, u16 *, 4) != ((arg1 >> 0x10) & 0xFFFF & 0xFFFF)) {
                var_a4 += 1;
                var_a0 += 4;
                if (var_a4 < temp_a1) {
                    goto loop_3;
                }
            }
        }
        if (var_a4 != temp_a1) {
            var_a1 = *var_a3;
            var_v0 = var_a3 + 8;
            if (var_a1 != 0) {
loop_8:
                if (*var_v0 != (arg1 & 0xFFFF & 0xFFFF)) {
                    var_a1 -= 1;
                    var_v0 += 0xC;
                    if (var_a1 != 0) {
                        goto loop_8;
                    }
                }
            }
            return (var_a1 == 0) ? NULL : var_v0;
        }
        goto block_12;
    }
block_12:
    return NULL;
}
