/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B06130();                            /* extern */
s32 func_00B24BE0(u16);                             /* extern */
s32 func_00B68190();                                /* extern */
extern void *D_003EAEE4;

s32 func_00B68700(void) {
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = D_003EAEE4;
    if (temp_s0 == NULL) {
        return 0;
    }
    temp_v0 = func_00B68190();
    if ((temp_v0 == 1) && (func_00B24BE0(M2C_FIELD(temp_s0, u16 *, 0x14C)) == 0)) {
        func_00B06130();
        M2C_FIELD(temp_s0, s32 *, 0x148) = 0;
        return 0;
    }
    return temp_v0;
}
