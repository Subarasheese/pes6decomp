/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B29E20();                                /* extern */
extern char D_005E381C[];

void func_00B2A3E0(s32 arg0) {
    if (func_00B29E20() != 0) {
        (*(s32 *)D_005E381C) = arg0;
    }
}
