/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_002EC8A0(void *arg0, s32 arg1) {
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a1;
    s32 var_v1;

    M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x1940) * 0x18) + arg0), s32 *, 0x1914) = arg1;
    temp_a2 = M2C_FIELD(arg0, s32 *, 0x1940) * 0x18;
    M2C_FIELD((temp_a2 + arg0), s32 *, 0x1920) = (s32) ((s32) M2C_FIELD((temp_a2 + arg0), s32 *, 0x1914) % 4);
    temp_a2_2 = M2C_FIELD(arg0, s32 *, 0x1940) * 0x18;
    temp_v1 = M2C_FIELD((temp_a2_2 + arg0), s32 *, 0x1914);
    var_a1 = temp_v1 >> 2;
    if (temp_v1 < 0) {
        var_a1 = (s32) (temp_v1 + 3) >> 2;
    }
    M2C_FIELD((temp_a2_2 + arg0), s32 *, 0x1924) = var_a1;
    temp_v1_2 = M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x1940) * 0x18) + arg0), s32 *, 0x1914);
    if (temp_v1_2 >= 8) {
        if (temp_v1_2 >= 0x10) {
            if (temp_v1_2 >= 0x14) {
                var_v1 = -1;
            } else {
                var_v1 = 2;
            }
        } else {
            var_v1 = 1;
        }
    } else {
        var_v1 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0xF8) = var_v1;
    M2C_FIELD(arg0, s32 *, 0x48) = 1;
}
