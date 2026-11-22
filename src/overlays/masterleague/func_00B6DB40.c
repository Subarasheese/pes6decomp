/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void *D_003EAEF4;

s32 func_00B6DB40(s32 arg0) {
    if (D_003EAEF4 == NULL) {
        return 0x69;
    }
    return (arg0 + (M2C_FIELD(D_003EAEF4, s32 *, 0x60) * 0x10)) & 0xFFFF;
}
