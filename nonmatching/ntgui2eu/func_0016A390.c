/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_0016AB80(void *, s16);
void func_0016A390(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *var_v1;

    var_v1 = NULL;
    if ((!(arg4 & 1) || (var_v1 = func_0016AB80(arg0, 5), (var_v1 != NULL))) && (!(arg4 & 2) || (var_v1 = func_0016AB80(arg0, 6), (var_v1 != NULL))) && (!(arg4 & 4) || (var_v1 = func_0016AB80(arg0, 7), (var_v1 != NULL))) && (var_v1 != NULL)) {
        M2C_FIELD(arg0, s32 *, 0xFD4) = arg1;
        M2C_FIELD(var_v1, s32 *, 0x14) = arg1;
        M2C_FIELD(arg0, s32 *, 0xFD8) = arg2;
        M2C_FIELD(var_v1, s32 *, 0x18) = arg2;
        M2C_FIELD(arg0, s32 *, 0xFDC) = arg3;
        M2C_FIELD(var_v1, s32 *, 0x1C) = arg3;
        M2C_FIELD(var_v1, s32 *, 0x20) = arg4;
        M2C_FIELD(arg0, s32 *, 0xFE0) = (s32) (M2C_FIELD(arg0, s32 *, 0xFE0) | arg4);
    }
}
