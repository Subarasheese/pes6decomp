/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002136B0(void *, s32);                 /* extern */
extern void *D_003EAD20;

void func_009B4D60(s32 arg0) {
    s32 var_a0;
    s32 var_v0;

    var_a0 = arg0;
    if (D_003EAD20 != NULL) {
        var_v0 = M2C_FIELD(M2C_FIELD(D_003EAD20, void **, 0), s8 *, 0xC) - 1;
        if (var_v0 < var_a0) {

        } else {
            if (var_a0 < 0) {
                var_a0 = 0;
            }
            var_v0 = var_a0;
        }
        M2C_FIELD(D_003EAD20, s32 *, 4) = var_v0;
        func_002136B0(M2C_FIELD(D_003EAD20, void **, 0), M2C_FIELD(D_003EAD20, s32 *, 4));
    }
}
