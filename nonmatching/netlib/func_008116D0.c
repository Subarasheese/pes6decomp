/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00811460(void *);                      /* extern */
M2C_UNK func_00811740(M2C_UNK, void *);             /* extern */

s32 func_008116D0(void *arg0) {
    u16 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u16 *, 8);
    switch (temp_v1) {                              /* irregular */
    case 1:
        func_00811740(1, arg0);
    case 3:
block_7:
        return 0;
    case 2:
        func_00811460(arg0);
        goto block_7;
    default:
        return -1;
    }
}
