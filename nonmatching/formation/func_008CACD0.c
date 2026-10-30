/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008CC320(void *);                      /* extern */
M2C_UNK func_008D1DD0(s32, M2C_UNK);                /* extern */
M2C_UNK func_008D2130(void *, M2C_UNK);             /* extern */

void func_008CACD0(void *arg0) {
    M2C_UNK (*temp_v0)(s32);

    if (arg0 != NULL) {
        func_008D1DD0(arg0 + 0x480, 0);
        temp_v0 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x110);
        if (temp_v0 != NULL) {
            temp_v0(M2C_FIELD(arg0, s32 *, 0x114));
        }
        func_008CC320(arg0);
        func_008D2130(arg0 + 0x480, 0);
    }
}
