/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

s32 func_00131760(s32);
extern char D_011D4DD8[];

void func_00131870(s32 arg0) {
    s32 (*temp_v1)(void *);
    void *temp_a0;

    temp_a0 = (arg0 << 5) + ((void *)D_011D4DD8);
    temp_v1 = M2C_FIELD(temp_a0, s32 (**)(void *), 0x18);
    M2C_FIELD(temp_a0, s32 *, 0x10) = (s32) (M2C_FIELD(temp_a0, s32 *, 0x10) + 1);
    if (temp_v1 != NULL) {
        if (temp_v1(temp_a0) == 1) {
            func_00131760(arg0);
        }
    }
}
