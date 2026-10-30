/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0019A490(s32 **arg0, s32 arg1) {
    s32 *temp_v0;

    temp_v0 = *arg0;
    *temp_v0 = arg1;
    *arg0 = temp_v0 + 4;
}
