/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002DF960(s32);                         /* extern */
M2C_UNK func_0096DA00(s32 *);                       /* extern */

void func_009718C0(s32 *arg0) {
    if (arg0 != NULL) {
        func_002DF960(*arg0);
        func_0096DA00(arg0);
    }
}
