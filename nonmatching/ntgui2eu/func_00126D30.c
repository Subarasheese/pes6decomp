/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00165580(s32, M2C_UNK, M2C_UNK *, s64); /* extern */
s32 func_001B0444(s64);                             /* extern */
extern M2C_UNK func_00126C98;
extern M2C_UNK func_00126D10;

void func_00126D30(s32 arg0, s64 arg1) {
    s64 temp_s0;

    temp_s0 = (s64) (arg1 << 0x20) >> 0x20;
    if (func_001B0444(temp_s0) != 0) {
        func_00165580(arg0, 6, &func_00126C98, temp_s0);
        func_00165580(arg0, 7, &func_00126D10, 0);
    }
}
