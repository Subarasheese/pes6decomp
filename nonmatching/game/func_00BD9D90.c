/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009E1C90(M2C_UNK);                         /* extern */
extern char D_005926FD[];
extern char D_005926FF[];

s32 func_00BD9D90(void) {
    if (((func_009E1C90(0) & 0xFF) == 4) && ((*(u8 *)D_005926FD) == 1) && ((*(u8 *)D_005926FF) == 1)) {
        return 1;
    }
    return 0;
}
