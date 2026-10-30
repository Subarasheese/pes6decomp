/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern M2C_UNK (*D_011D6F14)(M2C_UNK *, s32 *);
extern char D_011D6F20[];

void func_00134F58(void) {
    (*(s32 *)D_011D6F20) += 1;
    D_011D6F14(&D_011D6F14, ((void *)D_011D6F20));
}
