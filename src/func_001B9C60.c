/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00153FA0(void *);                      /* extern */
M2C_UNK func_001E5F20(s32);                         /* extern */

void func_001B9C60(void *arg0) {
    func_001E5F20(M2C_FIELD(arg0, s32 *, 0));
    func_001E5F20(M2C_FIELD(arg0, s32 *, 4));
    func_00153FA0(arg0);
}
