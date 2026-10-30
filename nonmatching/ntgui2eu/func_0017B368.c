/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00189778(void *);
extern M2C_UNK (*D_005C14D4)();

void func_0017B368(void *arg0) {
    D_005C14D4();
    M2C_FIELD(arg0, s32 *, 0x91C) = 0;
    M2C_FIELD(arg0, s32 *, 0x920) = 1;
    func_00189778(arg0 + 0x928);
}
