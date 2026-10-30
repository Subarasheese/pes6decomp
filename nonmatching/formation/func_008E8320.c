/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008E9150(s32);                         /* extern */
M2C_UNK func_008E91B0(s32);                         /* extern */

void func_008E8320(s8 *arg0) {
    func_008E91B0(arg0 + 4);
    *arg0 = 0;
    func_008E9150(arg0 + 4);
}
