/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_0052B220;

void *func_001F0160(s32 arg0) {
    s32 temp_a0;
    s32 var_a3;
    void **var_a2;
    void *var_v0;

    var_v0 = D_0052B220;
    if (var_v0 != NULL) {
loop_2:
        temp_a0 = M2C_FIELD(var_v0, s32 *, 4);
        var_a3 = 0;
        if (temp_a0 > 0) {
            var_a2 = M2C_FIELD(var_v0, void ***, 8);
loop_4:
            if (((arg0 >> 0x10) & 0xFFFF & 0xFFFF) != M2C_FIELD(M2C_FIELD(*var_a2, void **, 4), u16 *, 4)) {
                var_a3 += 1;
                var_a2 += 4;
                if (var_a3 >= temp_a0) {
                    goto block_9;
                }
                goto loop_4;
            }
            return var_v0;
        }
block_9:
        var_v0 = M2C_FIELD(var_v0, void **, 0x10);
        if (var_v0 == NULL) {
            goto block_10;
        }
        goto loop_2;
    }
block_10:
    return NULL;
}
