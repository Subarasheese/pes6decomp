/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005BEE64[];
extern char D_005BEE68[];

void func_001610A8(void) {
    s32 temp_v1;

    temp_v1 = (*(s32 *)D_005BEE64);
    (*(s32 *)D_005BEE64) = 0;
    (*(s32 *)D_005BEE68) = temp_v1;
}
