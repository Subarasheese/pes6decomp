/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern s32 func_001C48E8(s32 *, s32, s32);

M2C_UNK func_00BC0A88(s32 *);

void func_00BCA140(void *arg0) {
    s32 *temp_a0;
    s32 *temp_a0_2;
    s32 *temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 **, 0x50);
    temp_a0 = M2C_FIELD(temp_s0, s32 **, 0x30);
    if (temp_a0 != NULL) {
        func_00BC0A88(temp_a0);
    }
    temp_a0_2 = M2C_FIELD(temp_s0, s32 **, 0x34);
    if (temp_a0_2 != NULL) {
        func_00BC0A88(temp_a0_2);
    }
    func_001C48E8(temp_s0, 0, 0x130);
    func_00BC0A88(temp_s0);
    M2C_FIELD(arg0, s32 **, 0x50) = NULL;
}
