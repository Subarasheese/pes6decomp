/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009A5FE0();                                /* extern */
M2C_UNK func_00B39160(M2C_UNK);                     /* extern */
M2C_UNK func_00B3C380();                            /* extern */
M2C_UNK func_00B3CD80();                            /* extern */
extern void *D_003EAE64;

void func_00B3D930(void) {
    void *temp_s0;

    temp_s0 = D_003EAE64;
    if (temp_s0 != NULL) {
        if (func_009A5FE0() != 0) {
            M2C_FIELD(temp_s0, s32 *, 0x114) = 1;
        }
        func_00B3C380();
        func_00B3CD80();
        if (M2C_FIELD(temp_s0, s32 *, 0x114) == 1) {
            func_00B39160(0);
            return;
        }
        func_00B39160(1);
    }
}
