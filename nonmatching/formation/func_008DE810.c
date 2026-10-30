/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00292F00(u8);                              /* extern */
s32 func_008B28B0(M2C_UNK);                         /* extern */
M2C_UNK func_008DE8A0(void *, s32, void *, s32, void *); /* extern */

void func_008DE810(void *arg0, s32 arg1, void *arg2) {
    func_008DE8A0(arg0, arg1, arg2, (func_00292F00(M2C_FIELD((arg1 + ((M2C_FIELD(arg0, u8 *, 0x946) * 0x52) + arg0)), u8 *, 0x9F2)) & 0xFF) - 1, arg0 + 0x208);
    M2C_FIELD(arg2, s32 *, 0) = 0x98;
    M2C_FIELD(arg2, s32 *, 0x68) = func_008B28B0(4);
}
