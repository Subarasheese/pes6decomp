/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00847280(s64);
extern char D_008B21C0[];

s32 func_00859330(void *arg0, s64 arg1, s32 arg2, s32 arg3, s8 arg4, s32 arg5) {
    s64 temp_v0;
    s8 temp_v1;
    void *var_a0;

    if (M2C_FIELD(arg0, s8 *, 0xFD) != 0) {
        return -1;
    }
    if (func_00847280(arg1) == NULL) {
        return -1;
    }
    if (((void *)D_008B21C0) == NULL) {
        var_a0 = NULL;
    } else {
        temp_v0 = (s64) (arg1 << 0x30) >> 0x30;
        if ((temp_v0 > 0) && (temp_v0 < 9)) {
            var_a0 = ((void *)D_008B21C0) + ((temp_v0 - 1) * 0x1C);
        } else {
            var_a0 = NULL;
        }
    }
    temp_v1 = M2C_FIELD(var_a0, s8 *, 8);
    if ((temp_v1 != 2) && (temp_v1 != 1) && (temp_v1 != 0)) {
        return -1;
    }
    M2C_FIELD(var_a0, s32 *, 4) = arg2;
    M2C_FIELD(var_a0, s8 *, 8) = (s8) ((arg3 != 0) ? 2 : 1);
    M2C_FIELD(var_a0, s8 *, 0xA) = arg4;
    if (arg5 != 0) {
        M2C_FIELD(((arg3 * 2) + arg0), s16 *, 0xF0) = (s16) M2C_FIELD(var_a0, s16 *, 0);
    }
    return 0;
}
