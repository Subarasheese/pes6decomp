/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009ED670();                            /* extern */
extern char D_00A7DF5C[];

s32 func_009E7700(void) {
    if ((*(s32 *)D_00A7DF5C) != 0) {
        func_009ED670();
        (*(s32 *)D_00A7DF5C) = 0;
    }
    return 1;
}
