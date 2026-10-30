/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_011D7474[];
extern char D_011D7478[];

void func_00137990(s32 arg0, s32 arg1) {
    (*(s32 *)D_011D7474) = arg0;
    (*(s32 *)D_011D7478) = arg1;
}
