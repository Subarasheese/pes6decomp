/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0016FA48(void *);                      /* extern */
extern M2C_UNK (*D_005C1450)();

void func_0016F910(void *arg0) {
    D_005C1450();
    if (M2C_FIELD(arg0, s32 *, 0x92C) != 0) {
        func_0016FA48(arg0);
        M2C_FIELD(arg0, s32 *, 0x92C) = (s32) (M2C_FIELD(arg0, s32 *, 0x92C) - 1);
    }
}
