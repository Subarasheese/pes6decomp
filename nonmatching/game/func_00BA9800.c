/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00295730();                            /* extern */
M2C_UNK func_00BA99D0(s32);                         /* extern */

void func_00BA9800(s32 arg0, s32 arg1) {
    switch (arg0) {                                 /* irregular */
    case 0:
        func_00BA99D0(arg1);
        return;
    case 2:
        func_00295730();
        /* fallthrough */
    case 1:
        return;
    }
}
