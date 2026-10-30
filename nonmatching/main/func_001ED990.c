/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001ED2B0(void *, s32);                 /* extern */
M2C_UNK func_001EEE60(void *, s32);                 /* extern */

void func_001ED990(void *arg0, s32 arg1) {
    void *var_s0;
    void *var_s0_2;

    if ((arg0 != NULL) && (arg1 != 0)) {
        if (M2C_FIELD(arg0, s32 *, 0x10) != 4) {
            var_s0 = M2C_FIELD(arg0, void **, 0);
            if (var_s0 != NULL) {
                do {
                    func_001EEE60(var_s0, arg1);
                    var_s0 = M2C_FIELD(var_s0, void **, 8);
                } while (var_s0 != NULL);
            }
        } else {
            var_s0_2 = M2C_FIELD(arg0, void **, 0);
            if (var_s0_2 != NULL) {
                do {
                    func_001ED2B0(var_s0_2, arg1);
                    var_s0_2 = M2C_FIELD(var_s0_2, void **, 4);
                } while (var_s0_2 != NULL);
            }
        }
    }
}
