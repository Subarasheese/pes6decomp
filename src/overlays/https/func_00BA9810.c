/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

s32 func_0010AFA0(s32, s32, s32);
extern s32 *func_001C1AE8(void);
M2C_UNK func_00BA28E8(void *);
M2C_UNK func_00BA2910(void *);
s32 func_00BD7168(s32);

s32 func_00BA9810(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;

    *func_001C1AE8() = 0;
    temp_s0 = func_0010AFA0(M2C_FIELD(arg0, s32 *, 0x1C), arg1, arg2);
    func_00BA2910(arg0);
    if ((temp_s0 <= 0) && (func_00BD7168(temp_s0) != 0)) {
        func_00BA28E8(arg0);
    }
    return temp_s0;
}
