/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002F2C70(void *, u8);                  /* extern */

void func_002F4D20(void *arg0) {
    if (arg0 != NULL) {
        func_002F2C70(arg0 + (M2C_FIELD(arg0, s8 *, 8) * 0x4A4) + 0xB4, M2C_FIELD(arg0, u8 *, 5));
    }
}
