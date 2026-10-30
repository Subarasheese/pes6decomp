/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0093D4B0();                                /* extern */
extern char D_009FF280[];
extern char D_009FF290[];

M2C_UNK *func_009B11B0(void) {
    s32 temp_v0;

    temp_v0 = func_0093D4B0();
    switch (temp_v0) {                              /* irregular */
    case 3:
    case 2:
    case 0:
        return ((void *)D_009FF280);
    case 1:
        return ((void *)D_009FF290);
    default:
        return (M2C_UNK *)0x9FF280;
    }
}
