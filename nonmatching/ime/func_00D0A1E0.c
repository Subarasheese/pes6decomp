/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00D09FB0();                            /* extern */
extern char D_00D20980[];

s32 func_00D0A1E0(void) {
    func_00D09FB0();
    (*(s32 *)D_00D20980) = 0;
    return 0;
}
