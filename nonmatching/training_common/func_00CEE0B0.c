/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00154080(void);
s32 func_002631B0();                                /* extern */
M2C_UNK func_002CBA60(M2C_UNK);                     /* extern */

void func_00CEE0B0(void) {
    if (func_002631B0() != 9) {
        func_002CBA60(0xA);
    }
    func_00154080();
}
