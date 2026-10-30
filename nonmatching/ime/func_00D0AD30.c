/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D08560(s32);                             /* extern */
M2C_UNK func_00D08760(s32);                         /* extern */

s32 func_00D0AD30(void *arg0) {
    s32 temp_s0;

    if (arg0 == NULL) {
        return 1;
    }
    temp_s0 = func_00D08560(arg0 + 0x808);
    func_00D08760(arg0 + 0x808);
    M2C_FIELD(arg0, s8 *, 0xD7A) = 1;
    if ((temp_s0 != func_00D08560(arg0 + 0x808)) && (arg0 != NULL)) {
        M2C_FIELD(arg0, s8 *, 0xD7B) = 1;
        M2C_FIELD(arg0, s8 *, 0xD7A) = 1;
    }
    return 0;
}
