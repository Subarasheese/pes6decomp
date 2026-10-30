/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern M2C_UNK *D_003EA7B4;
extern char D_00CBD8C0[];
extern char D_00CBD8D0[];

void func_00C102E0(void) {
    D_003EA7B4 = ((void *)D_00CBD8C0);
    (*(s32 *)D_00CBD8D0) = -1;
}
