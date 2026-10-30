/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0017BED8(void *);                      /* extern */
M2C_UNK func_00189758(void *);                      /* extern */

void func_0017BE98(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x4D0) = 0;
    M2C_FIELD(arg0, s32 *, 0x948) = 0;
    M2C_FIELD(arg0, s32 *, 0x944) = 0;
    M2C_FIELD(arg0, s32 *, 0x94C) = 0;
    func_00189758(arg0 + 0x950);
    func_0017BED8(arg0);
}
