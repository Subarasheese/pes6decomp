/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005B3690[];

u16 func_0011BD18(u16 arg0) {
    u16 temp_v0;

    temp_v0 = (*(u16 *)D_005B3690);
    (*(u16 *)D_005B3690) = arg0;
    return temp_v0;
}
