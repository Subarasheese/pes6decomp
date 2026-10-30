/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0065C2E0[];
extern char D_0065C2F5[];

void func_00628FF0(s8 arg0) {
    if ((*(u8 *)D_0065C2F5) == 1) {
        M2C_FIELD(((void *)D_0065C2E0), s8 *, 0xD) = arg0;
    } else {
        M2C_FIELD(((void *)D_0065C2E0), s8 *, 0xD) = 0;
    }
    M2C_FIELD(((void *)D_0065C2E0), s8 *, 0) = 1;
}
