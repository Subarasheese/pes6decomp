/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

M2C_UNK func_001C4730(s32, s32, s32);
extern s32 func_00BC0350(void);

s32 func_00BD9208(void *arg0, s32 arg1) {
    s32 temp_s0;

    if ((arg0 == NULL) || (arg1 == 0)) {
        return 0;
    }
    temp_s0 = M2C_FIELD(arg0, s32 *, 0xA8);
    func_001C4730(arg1, temp_s0, func_00BC0350());
    return arg1;
}
