/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002EC980(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a2;
    s32 temp_v0;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a1;
    s32 var_a4;
    s32 var_a5;
    s32 var_v1;
    void *temp_v1;
    void *var_a2;
    void *var_a3;

    var_a5 = 0;
    var_a3 = arg0;
loop_1:
    var_a4 = 0;
    var_a2 = var_a3;
loop_2:
    if ((arg2 & 0xFFFF) != M2C_FIELD(var_a2, s32 *, 0x1944)) {
        var_a4 += 1;
        var_a2 += 4;
        if (var_a4 >= 0x14) {
            var_a5 += 1;
            var_a3 += 0x4A4;
            if (var_a5 >= 0x14) {
                return 0;
            }
            goto loop_1;
        }
        goto loop_2;
    }
    temp_v0 = arg1 * 0x18;
    temp_v1 = temp_v0 + arg0;
    M2C_FIELD(temp_v1, s32 *, 0x1910) = var_a4;
    M2C_FIELD(temp_v1, s32 *, 0x1914) = var_a5;
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
    temp_a2 = M2C_FIELD(((M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x1940) * 0x18) + arg0), s32 *, 0x1914) * 0x4A4) + arg0), s32 *, 0x1948);
    if (((temp_a2 != 0xFFFF) || (M2C_FIELD(arg0, s32 *, 0x1908) == 1)) && (temp_a2 != 0x11E)) {
        M2C_FIELD(arg0, s32 *, 0x190C) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x190C) = 0;
    }
    M2C_FIELD((temp_v0 + arg0), s32 *, 0x1920) = (s32) ((s32) M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x1940) * 0x18) + arg0), s32 *, 0x1914) % 4);
    temp_v1_3 = M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x1940) * 0x18) + arg0), s32 *, 0x1914);
    var_a1 = temp_v1_3 >> 2;
    if (temp_v1_3 < 0) {
        var_a1 = (s32) (temp_v1_3 + 3) >> 2;
    }
    M2C_FIELD((temp_v0 + arg0), s32 *, 0x1924) = var_a1;
    M2C_FIELD(arg0, s32 *, 0x48) = 1;
    return 1;
}
