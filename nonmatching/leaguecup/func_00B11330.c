/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00AE8190(s32);                         /* extern */
M2C_UNK func_00AE87A0(M2C_UNK);                     /* extern */
M2C_UNK func_00AEB6F0();                            /* extern */
M2C_UNK func_00AEC530();                            /* extern */
extern void *D_003EAD6C;

void func_00B11330(void) {
    void *temp_s0;

    temp_s0 = D_003EAD6C;
    if (temp_s0 != NULL) {
        func_00AEB6F0();
        func_00AEC530();
        if (M2C_FIELD(temp_s0, s32 *, 0x78) == 1) {
            func_00AE87A0(0);
            return;
        }
        func_00AE87A0(1);
        func_00AE8190(M2C_FIELD(temp_s0, s32 *, 0x58));
    }
}
