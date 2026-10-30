/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008B3050(void *);                      /* extern */

s32 func_008DDEB0(void *arg0, s32 arg1, s8 arg2) {
    if (arg1 >= 0xB) {

    } else {
        M2C_FIELD((arg1 + ((M2C_FIELD(arg0, u8 *, 0x946) * 0x52) + arg0)), s8 *, 0xA08) = arg2;
        func_008B3050(arg0 + 0x208);
    }
    return 1;
}
