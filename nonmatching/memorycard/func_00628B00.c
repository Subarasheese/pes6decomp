/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00628DF0(void);
M2C_UNK func_0062C620();                            /* extern */
M2C_UNK func_00631D90();                            /* extern */
M2C_UNK func_00636F20();                            /* extern */
s32 func_0063A830();                                /* extern */
M2C_UNK func_00654440();                            /* extern */

void func_00628B00(void) {
    if (func_0063A830() == 0) {
        func_00631D90();
    } else {
        func_0062C620();
    }
    func_00636F20();
    func_00654440();
    func_00628DF0();
}
