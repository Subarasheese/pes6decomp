/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_006586A8[];
extern char D_00658768[];

void func_00639D60(s32 arg0) {
    (*(s32 *)D_006586A8) = arg0;
    (*(s32 *)D_00658768) = arg0;
}
