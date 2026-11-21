/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

M2C_UNK func_00BBDD68(s32);
M2C_UNK func_00BBFDA0(s32);
s32 func_00BC0778(s32, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK);
M2C_UNK func_00BC0A88(void *);
extern char D_00C4C318[];

void func_00BC6730(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    void *temp_a0_3;

    if (arg0 != NULL) {
        if (func_00BC0778(arg0 + 0x10, -1, 9, ((void *)D_00C4C318), 0xDB) <= 0) {
            temp_a0 = M2C_FIELD(arg0, s32 *, 0xC);
            if (temp_a0 != 0) {
                func_00BBDD68(temp_a0);
            }
            temp_a0_2 = M2C_FIELD(arg0, s32 *, 4);
            if (temp_a0_2 != 0) {
                func_00BBFDA0(temp_a0_2);
            }
            temp_a0_3 = M2C_FIELD(arg0, void **, 0x18);
            if (temp_a0_3 != NULL) {
                func_00BC0A88(temp_a0_3);
            }
            func_00BC0A88(arg0);
        }
    }
}
