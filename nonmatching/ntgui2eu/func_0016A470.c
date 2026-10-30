/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0016AB80(void *, M2C_UNK);               /* extern */

void func_0016A470(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_v0;
    void *var_a0;

    var_a0 = NULL;
    if (!(arg4 & 1) || (var_a0 = func_0016AB80(arg0, 8), (var_a0 != NULL))) {
        var_v0 = arg4 & 4;
        if (!(arg4 & 2) || (var_a0 = func_0016AB80(arg0, 9), var_v0 = arg4 & 4, (var_a0 != NULL))) {
            if ((var_v0 == 0) || (var_a0 = func_0016AB80(arg0, 0xA), (var_a0 != NULL))) {
                if (var_a0 != NULL) {
                    M2C_FIELD(arg0, s32 *, 0xFD4) = arg1;
                    M2C_FIELD(var_a0, s32 *, 0x14) = arg1;
                    M2C_FIELD(arg0, s32 *, 0xFD8) = arg2;
                    M2C_FIELD(var_a0, s32 *, 0x18) = arg2;
                    M2C_FIELD(arg0, s32 *, 0xFDC) = arg3;
                    M2C_FIELD(var_a0, s32 *, 0x1C) = arg3;
                    M2C_FIELD(var_a0, s32 *, 0x20) = arg4;
                    M2C_FIELD(arg0, s32 *, 0xFE0) = (s32) (M2C_FIELD(arg0, s32 *, 0xFE0) & ~arg4);
                }
            }
        }
    }
}
