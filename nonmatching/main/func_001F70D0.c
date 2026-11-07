/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

void *func_00154060(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_001F77A0(s32, void *);                 /* extern */
M2C_UNK func_001F7F50(void *);                      /* extern */

void *func_001F70D0(s32 arg0) {
    void *temp_v0;
    void *var_s0;

    if (arg0 != 0) {
        temp_v0 = func_00154060(1, 0x1C);
        var_s0 = temp_v0;
        M2C_FIELD(temp_v0, s32 *, 0x18) = arg0;
        func_001F7F50(var_s0);
        func_001F77A0(arg0, var_s0);
    } else {
        var_s0 = NULL;
    }
    return var_s0;
}
