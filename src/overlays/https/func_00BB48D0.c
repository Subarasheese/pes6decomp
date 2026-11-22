/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern s32 func_001C48E8(s32 *, s32, s32);

M2C_UNK func_00BC0A88(s32 *);

void func_00BB48D0(s32 *arg0) {
    s32 *temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 **, 0xC);
    if (temp_a0 != NULL) {
        func_001C48E8(temp_a0, 0, M2C_FIELD(arg0, s32 *, 8));
        func_00BC0A88(M2C_FIELD(arg0, s32 **, 0xC));
    }
    func_00BC0A88(arg0);
}
