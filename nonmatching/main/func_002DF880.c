/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_002E1A30(void *, M2C_UNK);             /* extern */

void func_002DF880(s32 *arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
    case 4:
        *arg0 = arg1;
        func_002E1A30(arg0 + 0x28, 0xB);
        return;
    case 3:
        *arg0 = arg1;
        func_002E1A30(arg0 + 0x28, 9);
        return;
    }
}
