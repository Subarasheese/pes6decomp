/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CE64C3[];

s8 func_00BEC9D0(void) {
    s8 temp_v0;

    temp_v0 = (*(s8 *)D_00CE64C3);
    (*(s8 *)D_00CE64C3) = 0;
    return temp_v0;
}
