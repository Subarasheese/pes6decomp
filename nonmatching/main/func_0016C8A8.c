/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001795E0(void);
extern int func_00179658(void);
s32 func_0016C8A8(void *arg0, s32 arg1, s64 arg2, s64 arg3, s32 arg4) {
    s32 var_s4;
    s8 temp_v1;

    var_s4 = 0;
    func_001795E0();
    temp_v1 = M2C_FIELD(arg0, s8 *, 2);
    if ((temp_v1 == 0) || (temp_v1 == 3) || (temp_v1 == 9)) {
        M2C_FIELD(arg0, s32 *, 0x30) = arg1;
        M2C_FIELD(arg0, s8 *, 1) = 2;
        M2C_FIELD(arg0, s8 *, 2) = 1;
        var_s4 = 1;
        M2C_FIELD(arg0, s32 *, 0x18) = arg4;
        M2C_FIELD(arg0, s64 *, 0x20) = arg3;
        M2C_FIELD(arg0, s64 *, 0x28) = arg2;
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    func_00179658();
    return var_s4;
}
