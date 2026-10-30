/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008B3050(void *, void *, u8);          /* extern */
s8 func_008C9350(void *);                           /* extern */

s32 func_008DDBB0(void *arg0, s32 arg1, s8 arg2) {
    u8 temp_a2;

    if (arg1 <= 0) {

    } else if (arg1 < 0xB) {
        M2C_FIELD((arg1 + ((M2C_FIELD(arg0, u8 *, 0x946) * 0x52) + arg0)), s8 *, 0xA13) = arg2;
        temp_a2 = M2C_FIELD(arg0, u8 *, 0x946);
        M2C_FIELD((arg1 + ((temp_a2 * 0x52) + arg0)), s8 *, 0xA1E) = func_008C9350(arg0 + 0x2B0C);
        func_008B3050(arg0, arg0 + 0x208, temp_a2);
    }
    return 1;
}
