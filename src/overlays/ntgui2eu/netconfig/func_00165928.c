/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"
M2C_UNK func_00165970();                            /* extern */
void func_00165928(M2C_UNK arg0, s32 *arg1, s32 *arg2) {
    s32 v;
    func_00165970();
    v = *arg1;
    *arg1 = v << 4;
    v = *arg2;
    *arg2 = v << 4;
}
