/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0030CF50();                            /* extern */
M2C_UNK func_00817400(u8);                          /* extern */
M2C_UNK func_00843E10();                            /* extern */
M2C_UNK func_00AEED80();                            /* extern */
M2C_UNK func_00AEF0C0();                            /* extern */
extern u8 D_003EAF40;

void func_00AEEF90(void) {
    u8 temp_a0;

    temp_a0 = D_003EAF40;
    D_003EAF40 = (temp_a0 & ~1) | (0 & 1);
    func_00817400(temp_a0);
    func_00843E10();
    func_00AEED80();
    func_00AEF0C0();
    func_0030CF50();
}
