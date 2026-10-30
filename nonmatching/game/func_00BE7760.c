/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00BD3BA0(void **, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_00BD4040(M2C_UNK);                     /* extern */

void func_00BE7760(void **arg0) {
    func_00BD4040(4);
    func_00BD3BA0(arg0, 4, 1);
    M2C_FIELD(*arg0, s16 *, 0x18) = 0x88;
}
