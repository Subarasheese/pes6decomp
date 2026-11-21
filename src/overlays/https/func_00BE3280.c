/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

M2C_UNK func_00B9F690(s32);
s32 func_00BC0778(s32, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK);
M2C_UNK func_00BC0A88(void *);
M2C_UNK func_00BE0280(s32);
M2C_UNK func_00BE0BD0(s32);
extern char D_00C4E660[];

void func_00BE3280(void *arg0) {
    void *temp_a0;

    if (arg0 != NULL) {
        if (func_00BC0778(arg0 + 0x14, -1, 3, ((void *)D_00C4E660), 0x6B) <= 0) {
            func_00BE0BD0(M2C_FIELD(arg0, s32 *, 4));
            func_00BE0280(M2C_FIELD(arg0, s32 *, 8));
            func_00B9F690(M2C_FIELD(arg0, s32 *, 0xC));
            temp_a0 = M2C_FIELD(arg0, void **, 0x18);
            if (temp_a0 != NULL) {
                func_00BC0A88(temp_a0);
            }
            func_00BC0A88(arg0);
        }
    }
}
