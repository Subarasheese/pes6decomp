/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008FB788(void *, void *);              /* extern */
M2C_UNK func_008FB8F8(void *, void *);              /* extern */

void func_008FBEA0(void *arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), s32 *, 0x184) != 3) {
        func_008FB8F8(arg0, arg0);
        return;
    }
    func_008FB788(arg0, arg0);
}
