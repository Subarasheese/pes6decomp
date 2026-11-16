/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern void *func_001BB370(void);
extern s32 D_0058D410;
extern s32 D_0058D414;
extern void *D_0058D41C;

s32 func_00265990(void) {
    s32 var_s0;
    void *temp_v0;

    var_s0 = 0;
    temp_v0 = func_001BB370();
    if ((M2C_FIELD(temp_v0, s32 *, 0x10) == D_0058D410) && (M2C_FIELD(temp_v0, s32 *, 0x14) == D_0058D414)) {
        var_s0 = 1;
        D_0058D41C = temp_v0;
    }
    return var_s0;
}
