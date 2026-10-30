/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK, M2C_UNK);            /* extern */

void func_0063E040(void *arg0, s8 arg1, s8 arg2, void *arg3) {
    func_001C48E8(0, 0x1C);
    M2C_FIELD(arg0, s16 *, 8) = (s16) M2C_FIELD(arg3, s16 *, 0);
    M2C_FIELD(arg0, s16 *, 0xA) = (s16) M2C_FIELD(arg3, s16 *, 2);
    M2C_FIELD(arg0, s8 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 9;
    M2C_FIELD(arg0, s8 *, 0x1A) = arg1;
    M2C_FIELD(arg0, s8 *, 0x1B) = arg2;
}
