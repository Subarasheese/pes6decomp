/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BE5B0(s32);
M2C_UNK func_0080D7B0();                            /* extern */
M2C_UNK func_00824000();                            /* extern */
s16 *func_008472D0();                               /* extern */
M2C_UNK func_0084A620(M2C_UNK);                     /* extern */
M2C_UNK func_00859EB0(s16, M2C_UNK);                /* extern */

s32 func_0080BA90(void) {
    func_0080D7B0();
    func_00824000();
    func_001BE5B0(0);
    func_00859EB0(*func_008472D0(), 3);
    func_0084A620(1);
    return 1;
}
