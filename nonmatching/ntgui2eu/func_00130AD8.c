/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005B59E4[];
extern char D_005B59E8[];

void func_00130AD8(s32 *arg0, s32 *arg1) {
    *arg0 = (*(s32 *)D_005B59E4);
    *arg1 = (*(s32 *)D_005B59E8);
}
