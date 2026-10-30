/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s16 *func_008472D0();                               /* extern */
s32 func_00858FA0(s32);                             /* extern */
s32 func_00858FD0(M2C_UNK *, s16);                  /* extern */
M2C_UNK func_00884E20();                            /* extern */
extern char D_008B21C0[];

s32 func_00884DD0(void) {
    if (func_00858FA0(func_00858FD0(((void *)D_008B21C0), *func_008472D0())) == 1) {
        func_00884E20();
    }
    return 0;
}
