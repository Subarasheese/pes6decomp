/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

M2C_UNK func_00BA5690(s32);
M2C_UNK func_00BC0A88(void *);

s32 func_00BA84F8(void *arg0) {
    void *temp_a0;
    void *temp_a0_2;

    func_00BA5690(M2C_FIELD(arg0, s32 *, 0x10));
    temp_a0 = M2C_FIELD(arg0, void **, 0x14);
    if (temp_a0 != NULL) {
        func_00BC0A88(temp_a0);
    }
    temp_a0_2 = M2C_FIELD(arg0, void **, 0x18);
    if (temp_a0_2 != NULL) {
        func_00BC0A88(temp_a0_2);
    }
    func_00BC0A88(arg0);
    return 0;
}
