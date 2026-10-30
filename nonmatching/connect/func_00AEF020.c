/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0030CFA0(void);
M2C_UNK func_00817410();                            /* extern */
M2C_UNK func_00843E80();                            /* extern */
M2C_UNK func_00AEEF40();                            /* extern */
M2C_UNK func_00AEF0D0();                            /* extern */
extern u8 D_003EAF40;

void func_00AEF020(void) {
    func_00AEF0D0();
    func_00AEEF40();
    func_00843E80();
    func_00817410();
    D_003EAF40 = (D_003EAF40 & ~1) | 1;
    func_0030CFA0();
}
