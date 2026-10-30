/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008F9220(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

s32 func_008F9080(void *arg0) {
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0x16);
    switch (temp_v1) {                              /* irregular */
    case 1:
        func_008F9220(0x13C, 0x15C, 0);
        break;
    case 0:
        M2C_FIELD(arg0, u8 *, 0x16) = (u8) (temp_v1 + 1);
        break;
    }
    return 1;
}
