/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B91440(M2C_UNK);                     /* extern */
s32 func_00BE9360(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK func_00BE5260;
extern M2C_UNK func_00BE52A0;

s32 func_00BE5040(M2C_UNK **arg0) {
    s32 temp_v0;

    temp_v0 = func_00BE9360(1, 0);
    switch (temp_v0) {                              /* irregular */
    case 1:
        *arg0 = &func_00BE5260;
        func_00B91440(0x26);
        break;
    case 2:
        *arg0 = &func_00BE52A0;
        func_00B91440(0x26);
        break;
    }
    return 0;
}
