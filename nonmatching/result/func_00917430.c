/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008F8470(M2C_UNK);                         /* extern */
extern char D_0058D7AA[];

s32 func_00917430(void) {
    s32 temp_s0;

    if ((*(s8 *)D_0058D7AA) == 0) {
        temp_s0 = func_008F8470(0) & 0xFF;
        return (temp_s0 + (func_008F8470(1) & 0xFF)) > 0;
    }
    return 0;
}
