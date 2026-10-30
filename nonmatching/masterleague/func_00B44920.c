/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002F2ED0(s32);                         /* extern */
M2C_UNK func_00B3DCB0();                            /* extern */
M2C_UNK func_00B3F720();                            /* extern */
s32 func_00B429A0();                                /* extern */
extern void *D_003EAE6C;

s32 func_00B44920(void) {
    s32 temp_a0;
    void *temp_s0;

    temp_s0 = D_003EAE6C;
    if (temp_s0 == NULL) {
        return 0;
    }
    func_00B3F720();
    func_00B3DCB0();
    temp_a0 = M2C_FIELD(temp_s0, s32 *, 0x6C4);
    if (temp_a0 != 0) {
        func_002F2ED0(temp_a0);
    }
    return func_00B429A0();
}
