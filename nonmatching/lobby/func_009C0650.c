/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C8590(void *, void *, M2C_UNK);     /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_0081DF10(s32, M2C_UNK);                /* extern */

s32 func_009C0650(void *arg0) {
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            if (M2C_FIELD(arg0, s32 *, 0) != 2) {
                M2C_FIELD(arg0, s8 *, 0x9E) = 1;
            }
            M2C_FIELD(arg0, s32 *, 0) = 2;
        }
        func_001C8590(arg0 + 0xA4, arg0 + 0x1CA, 0x32);
        func_0081DF10(M2C_FIELD(arg0, s32 *, 0x14), 0);
        func_0026E840(0x84028400);
    }
    return 0;
}
