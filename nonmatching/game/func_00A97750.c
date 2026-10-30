/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005926E4[];
extern char D_0059273C[];

void func_00A97750(void) {
    (*(s32 *)D_0059273C) = (s32) (*(u8 *)D_005926E4);
}
