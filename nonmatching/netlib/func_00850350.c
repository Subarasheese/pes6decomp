/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008B1580[];

void *func_00850350(s32 arg0) {
    s32 var_a2;
    void *var_v0;

    var_a2 = 0;
loop_1:
    var_v0 = M2C_FIELD((((void *)D_008B1580) + ((var_a2 & 1) * 4)), void **, 0x18);
    if (var_v0 != NULL) {
loop_2:
        if (M2C_FIELD(var_v0, u8 *, 0x18) != (arg0 & 0xFF)) {
            var_v0 = M2C_FIELD(var_v0, void **, 4);
            if (var_v0 == NULL) {
                goto block_8;
            }
            goto loop_2;
        }
        return var_v0;
    }
block_8:
    var_a2 += 1;
    if (var_a2 >= 2) {
        return NULL;
    }
    goto loop_1;
}
