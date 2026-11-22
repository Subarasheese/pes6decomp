/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/m2c.h"

extern s32 func_00189948(void *, void *, void *, void *);

extern s32 (*D_005C00F8)(void *);

void func_0017D0C8(void *arg0) {
    s32 var_s1;

    var_s1 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x538) != 0) {
        var_s1 = M2C_FIELD(arg0, s32 *, 0x53C) != 0;
    }
    D_005C00F8(arg0);
    if (var_s1 != 0) {
        func_00189948(((s8 *)arg0) + 0x540, ((s8 *)arg0) + 0x930, ((s8 *)arg0) + 0x950, ((s8 *)arg0) + 0x940);
    }
}
