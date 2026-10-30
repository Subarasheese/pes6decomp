/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00135018(s32);                         /* extern */
s32 func_001731D0(void *, s32, s32, s32, s32);      /* extern */
M2C_UNK func_00173558(s32, s32, M2C_UNK, s32);      /* extern */

s32 func_001730D8(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_a3;
    s32 var_a1;
    void *temp_v1;

    temp_a3 = M2C_FIELD(arg0, s32 *, 0xBF0) - arg1;
    if (temp_a3 > 0) {
        temp_a2 = M2C_FIELD(arg0, s32 *, 0xB80);
        func_00173558(((arg1 + arg3) * 0x24) + temp_a2, (arg1 * 0x24) + temp_a2, 0x24, temp_a3);
    }
    var_a1 = 0;
    if (arg3 > 0) {
        do {
            temp_a0 = (arg1 + var_a1) * 0x24;
            var_a1 += 1;
            temp_v1 = temp_a0 + M2C_FIELD(arg0, s32 *, 0xB80);
            M2C_FIELD(temp_v1, s32 *, 4) = (s32) (M2C_FIELD(temp_v1, s32 *, 4) & 0xAF);
        } while (var_a1 < arg3);
    }
    M2C_FIELD(arg0, s32 *, 0xBF0) = (s32) (M2C_FIELD(arg0, s32 *, 0xBF0) + func_001731D0(arg0, arg1, arg2, arg3, arg4));
    if (M2C_FIELD(arg0, s32 *, 0xC84) != 0) {
        M2C_FIELD(arg0, s32 *, 0xC84) = 0;
        func_00135018(arg2);
    }
    return 1;
}
