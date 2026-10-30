/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_001C48E8(M2C_UNK, M2C_UNK);            /* extern */

s32 func_0095CC20(void *arg0, s32 arg1) {
    s32 temp_s1;
    s32 temp_v1;
    s32 var_s2;
    u16 var_v1;

    if (arg0 != NULL) {
        if (arg1 != 0) {
            func_001C48E8(0, 0x2B4);
            func_001C4730(arg0, arg1, 0x2B4);
            var_v1 = M2C_FIELD(arg0, u16 *, 8);
            if ((s32) var_v1 >= 0xA) {
                var_v1 = 0xA;
            }
            temp_s1 = var_v1 & 0xFFFF;
            var_s2 = 0;
loop_9:
            temp_v1 = var_s2 & 0xFFFF;
            if (temp_v1 < temp_s1) {
                func_001C4730(arg0 + ((var_s2 & 0xFFFF) * 0x44) + 0xC, arg1 + (((temp_s1 - 1) - temp_v1) * 0x44) + 0xC, 0x44);
                var_s2 = (var_s2 + 1) & 0xFFFF;
                goto loop_9;
            }
            return 1;
        }
        goto block_4;
    }
block_4:
    return 0;
}
