/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00628DF0(void);
M2C_UNK func_0062A7D0();                            /* extern */
M2C_UNK func_0062BA50();                            /* extern */
M2C_UNK func_006309D0();                            /* extern */
M2C_UNK func_00654440();                            /* extern */
s32 func_008F6080();                                /* extern */
s32 func_008F7AF0();                                /* extern */

void func_00628A50(void) {
    func_00654440();
    func_006309D0();
    if (func_008F6080() != 0) {
        func_0062A7D0();
    } else if (func_008F7AF0() != 0) {
        func_0062BA50();
    }
    func_00628DF0();
}
