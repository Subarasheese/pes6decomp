/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002F2ED0(s32);                         /* extern */
s32 func_00B5B9B0();                                /* extern */
M2C_UNK func_00B5D090();                            /* extern */
extern void *D_003EAEB8;

s32 func_00B5B870(void) {
    s32 temp_a0;
    void *temp_s0;

    temp_s0 = D_003EAEB8;
    if (temp_s0 == NULL) {
        return 1;
    }
    func_00B5D090();
    temp_a0 = M2C_FIELD(temp_s0, s32 *, 0x624);
    if ((temp_a0 != 0) && (M2C_FIELD(temp_s0, u8 *, 0x62B) == 1)) {
        func_002F2ED0(temp_a0);
    }
    return func_00B5B9B0();
}
