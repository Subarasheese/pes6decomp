/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern void *func_00BAD1A0(void);

M2C_UNK func_00BB6148(s32);
M2C_UNK func_00BC0748(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK);
extern char D_00C4ACF8[];

void func_00BB3308(void) {
    s32 temp_a0;
    void *temp_s0;

    temp_s0 = func_00BAD1A0();
    func_00BC0748(9, 1, ((void *)D_00C4ACF8), 0x13E);
    temp_a0 = M2C_FIELD(temp_s0, s32 *, 4);
    if (temp_a0 != 0) {
        func_00BB6148(temp_a0);
        M2C_FIELD(temp_s0, s32 *, 4) = 0;
    }
    func_00BC0748(0xA, 1, ((void *)D_00C4ACF8), 0x14D);
}
