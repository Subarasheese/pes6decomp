/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern s32 func_00BBD440(void);
M2C_UNK func_00BBDDD0(s32, s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK func_00BBFE50(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK, M2C_UNK);
extern s32 func_00BC1088(void);

s32 func_00BAD2E8(void *arg0, s32 arg1) {
    s32 var_s2;

    var_s2 = 0;
    if (arg1 == 0) {
        var_s2 = 0x2721;
    } else if (M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
        var_s2 = 0x2722;
    } else {
        func_00BBFE50(arg1, 1, 2, 0, func_00BC1088(), 0, 0);
        func_00BBDDD0(M2C_FIELD(arg0, s32 *, 0x1C), func_00BBD440(), arg1, 0, 0);
    }
    return var_s2;
}
