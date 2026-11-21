/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

M2C_UNK func_00B9E938(s32);
s32 func_00BB89C8(s32);

s32 func_00BDEC18(s32 *arg0, s32 arg1) {
    if ((arg0 == NULL) || (arg1 == 0)) {
        return 0;
    }
    func_00B9E938(*arg0);
    *arg0 = func_00BB89C8(arg1);
    return 1;
}
