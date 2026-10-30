/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_0081DF10(s32, M2C_UNK);                /* extern */

s32 func_009C06D0(void *arg0) {
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            if (M2C_FIELD(arg0, s32 *, 0) != 2) {
                M2C_FIELD(arg0, s8 *, 0x9E) = 1;
            }
            M2C_FIELD(arg0, s32 *, 0) = 2;
        }
        func_001C48E8(arg0 + 0xA4, 0, 0x20);
        func_0081DF10(M2C_FIELD(arg0, s32 *, 0x10), 0);
        func_0026E840(0x84028400);
    }
    return 0;
}
