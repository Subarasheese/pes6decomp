/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_001E6D00(s32);                             /* extern */

void func_001DC950(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = func_001E6D00(M2C_FIELD(arg0, s32 *, 8));
}
