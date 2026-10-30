/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(void *, M2C_UNK);             /* extern */
extern void *D_003EA4C8;

void func_008CB6E0(s32 arg0) {
    void *var_s0;

    var_s0 = D_003EA4C8;
    if (var_s0 != NULL) {
loop_1:
        if (M2C_FIELD(var_s0, s32 *, 0) != arg0) {
            var_s0 = M2C_FIELD(var_s0, void **, 0x24);
            if (var_s0 == NULL) {
                goto block_7;
            }
            goto loop_1;
        }
    } else {
block_7:
        var_s0 = NULL;
    }
    if (var_s0 != NULL) {
        func_001C4730(var_s0 + 0x10, 0x10);
        M2C_FIELD(var_s0, s32 *, 0x20) = (s32) (M2C_FIELD(var_s0, s32 *, 0x20) | 2);
    }
}
