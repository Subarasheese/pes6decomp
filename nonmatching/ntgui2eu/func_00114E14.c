/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00456FD0[];

void func_00114E14(s32 arg0) {
    s8 temp_a0;

    temp_a0 = arg0 & 0xFF;
    (*(s8 *)D_00456FD0) = (temp_a0 == 0) ? temp_a0 : 1;
}
