/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B0B5C0(s32);                         /* extern */
M2C_UNK func_00B0BE40();                            /* extern */

void func_00B0D090(M2C_UNK arg0, s32 arg1, s32 arg2) {
    switch (arg1) {                                 /* irregular */
    case 0:
        func_00B0BE40();
        return;
    case 1:
        func_00B0B5C0(arg2);
        return;
    }
}
