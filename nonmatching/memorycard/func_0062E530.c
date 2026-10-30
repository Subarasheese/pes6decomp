/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002DB940(void *);
M2C_UNK func_002DBC20(void *, s32, M2C_UNK);        /* extern */
extern void *D_0065C88C;

void func_0062E530(s32 *arg0) {
    func_002DBC20(D_0065C88C, *arg0, 4);
    *arg0 = func_002DB940(D_0065C88C);
}
