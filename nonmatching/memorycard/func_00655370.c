/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0065EDC0[];
extern char D_0065EE7E[];

void func_00655370(s8 arg0) {
    if ((*(u8 *)D_0065EE7E) != arg0) {
        M2C_FIELD(((void *)D_0065EDC0), s8 *, 0xBE) = arg0;
        M2C_FIELD(((void *)D_0065EDC0), s8 *, 0xBC) = 1;
    }
}
