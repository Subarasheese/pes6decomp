/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"


void func_00165890();                            /* extern */

s32 func_00165848(M2C_UNK arg0, s32 *arg1, s32 *arg2) {
    func_00165890();
    *arg1 = (s32) *arg1 >> 4;
    return *arg2 >>= 4;
}
