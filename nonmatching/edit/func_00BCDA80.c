/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BC57E0(s32, s32, s32);
s32 func_00BC5DF0(M2C_UNK);                         /* extern */

void func_00BCDA80(s32 arg0) {
    func_00BC57E0(func_00BC5DF0(0) & 0xFFFF, arg0, 1);
}
