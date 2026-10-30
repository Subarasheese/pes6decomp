/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001A4728();                            /* extern */
M2C_UNK func_001A4778();                            /* extern */

void *func_0019F1D8(void *arg0, void *arg1) {
    void *temp_v0;
    void *var_s0;
    void *var_v1;

    func_001A4728();
    var_s0 = M2C_FIELD(arg1, void **, 8);
    if (var_s0 == arg0) {
        M2C_FIELD(arg1, void **, 8) = (void *) M2C_FIELD(var_s0, void **, 0x38);
    } else if (var_s0 != NULL) {
        var_v1 = M2C_FIELD(var_s0, void **, 0x38);
        if (var_v1 != arg0) {
loop_5:
            var_s0 = var_v1;
            if (var_s0 != NULL) {
                temp_v0 = M2C_FIELD(var_s0, void **, 0x38);
                var_v1 = temp_v0;
                if (temp_v0 == arg0) {
                    goto block_7;
                }
                goto loop_5;
            }
        } else {
block_7:
            M2C_FIELD(var_s0, s32 *, 0x38) = (s32) M2C_FIELD(arg0, s32 *, 0x38);
        }
    }
    func_001A4778();
    return var_s0;
}
