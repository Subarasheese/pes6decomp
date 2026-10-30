/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009737E0(s32, u16, s32, s32);          /* extern */

void func_00971DD0(void *arg0, s32 arg1) {
    s32 temp_a3;
    s32 temp_v1;

    if ((arg0 != NULL) && (M2C_FIELD(arg0, s32 *, 4) != 0)) {
        temp_v1 = M2C_FIELD(arg0, s32 *, 8);
        if (temp_v1 != 0) {
            temp_a3 = M2C_FIELD(arg0, s32 *, 0x10);
            if (arg1 < temp_a3) {
                func_009737E0(temp_v1, M2C_FIELD(arg0, u16 *, 0xC), arg1 + 1, temp_a3);
            }
        }
    }
}
