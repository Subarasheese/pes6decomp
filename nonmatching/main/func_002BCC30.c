/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C132C0(s32);                             /* extern */
M2C_UNK func_00C32AD0(s32);                         /* extern */
M2C_UNK func_00C32BF0(s32);                         /* extern */

void func_002BCC30(M2C_UNK arg0, s32 arg1) {
    s32 temp_a0;

    temp_a0 = func_00C132C0(arg1) & 0xFF;
    switch (temp_a0) {                              /* irregular */
    case 30:
        func_00C32AD0(arg1);
        return;
    case 1:
        func_00C32BF0(arg1);
        return;
    }
}
