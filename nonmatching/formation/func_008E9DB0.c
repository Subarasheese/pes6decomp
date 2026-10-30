/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008EB400(void *);                      /* extern */
M2C_UNK func_008EB470(s32);                         /* extern */

void func_008E9DB0(void *arg0) {
    func_008EB470(arg0 + 4);
    M2C_FIELD(arg0, s8 *, 0) = 0;
    M2C_FIELD(arg0, s8 *, 1) = 0;
    func_008EB400(arg0 + 4);
}
