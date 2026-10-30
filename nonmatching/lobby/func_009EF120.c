/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009EF3F0(s32, s32);                    /* extern */
M2C_UNK func_009EF600();                            /* extern */

void func_009EF120(s32 arg0, s32 arg1) {
    func_009EF600();
    func_009EF3F0(arg0, arg1);
}
