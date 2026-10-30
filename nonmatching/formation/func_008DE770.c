/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008B3050(void *, void *);              /* extern */
M2C_UNK func_008B3FD0(void *);                      /* extern */
M2C_UNK func_008BD980(void *, u8);                  /* extern */
s8 func_008BF080(s32);                              /* extern */
M2C_UNK func_008D56E0(void *, void *);              /* extern */

s32 func_008DE770(void *arg0, s32 arg1, s32 arg2) {
    u8 temp_a1;

    if (arg1 >= 0xB) {

    } else {
        temp_a1 = M2C_FIELD(arg0, u8 *, 0x946);
        M2C_FIELD((arg1 + ((temp_a1 * 0x52) + arg0)), s8 *, 0x9F2) = func_008BF080(arg2 & 0xFF);
        func_008BD980(arg0 + 0x208, temp_a1);
        func_008D56E0(arg0 + 0x1EF4, arg0 + 0x208);
        func_008B3050(arg0, arg0 + 0x208);
        func_008B3FD0(arg0);
    }
    return 1;
}
