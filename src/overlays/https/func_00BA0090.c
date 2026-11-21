/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

M2C_UNK func_00B9E938(s32);
M2C_UNK func_00B9F690(s32);
M2C_UNK func_00BC0A88(void *);

void func_00BA0090(void *arg0) {
    if (arg0 != NULL) {
        func_00B9E938(M2C_FIELD(arg0, s32 *, 4));
        func_00B9F690(M2C_FIELD(arg0, s32 *, 8));
        func_00BC0A88(arg0);
    }
}
