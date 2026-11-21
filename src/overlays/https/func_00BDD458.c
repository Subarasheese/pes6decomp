/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

M2C_UNK func_00BC0A88(void *);
M2C_UNK func_00BE3280(s32);

void func_00BDD458(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0) == 1) {
        func_00BE3280(M2C_FIELD(arg0, s32 *, 4));
    }
    func_00BC0A88(arg0);
}
