/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_0011F248(f32);                             /* extern */
M2C_UNK func_00264B80(s32, s32, M2C_UNK);           /* extern */

void func_00264200(s32 arg0, void *arg1) {
    func_00264B80(arg0, func_0011F248(M2C_FIELD(arg1, f32 *, 0x1E0)), 4);
}
