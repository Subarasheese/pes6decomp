/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0094C730();                                /* extern */
M2C_UNK func_0095EB80();                            /* extern */
M2C_UNK func_00B07550(s32);                         /* extern */

void func_00AF7D00(void) {
    s32 temp_a0;

    func_0095EB80();
    temp_a0 = func_0094C730() & 0xFF;
    switch (temp_a0) {                              /* irregular */
    case 32:
    case 30:
    case 29:
    case 28:
    case 27:
        func_00B07550(temp_a0);
        /* fallthrough */
        return;
    }
}
