/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00189180(s32, M2C_UNK);                  /* extern */
M2C_UNK func_001893A0(s32, void *);                 /* extern */

s32 func_00188B50(s32 arg0, s32 arg1, s32 arg2, f32 *arg3) {
    void *temp_v0;

    temp_v0 = func_00189180(arg1, (arg0 != 0) ? 4 : 2);
    if (temp_v0 == NULL) {
        return 0;
    }
    *arg3 = M2C_FIELD(temp_v0, f32 *, 0x38);
    func_001893A0(arg2, temp_v0);
    return 1;
}
