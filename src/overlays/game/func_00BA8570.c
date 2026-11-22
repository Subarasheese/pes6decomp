/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_00207390(void *, s32);
extern s32 func_00208610(void *);
extern void func_00209540(void *, u16, s32);
extern s32 func_00209A00(void *, s32, s32);

s32 func_00BA8570(void **arg0) {
    s32 var_v0;
    u16 temp_a1_2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a1;

    temp_a0 = M2C_FIELD(*arg0, void **, 4);
    temp_a1 = M2C_FIELD(temp_a0, void **, 4);
    if (M2C_FIELD(temp_a1, u16 *, 6) == 0x38C) {
        func_00209540(temp_a0, 0x48EU, (s32) M2C_FIELD(temp_a1, u16 *, 4));
        var_v0 = func_00207390(M2C_FIELD(*arg0, void **, 4), 8);
    } else {
        var_v0 = func_00208610(temp_a0);
    }
    temp_a0_2 = M2C_FIELD(*arg0, void **, 4);
    temp_a1_2 = M2C_FIELD(temp_a0_2, u16 *, 0x30);
    if ((temp_a1_2 == 0) || (temp_a1_2 == 0x1A7)) {
        var_v0 = func_00209A00(temp_a0_2, 0x489, 0);
    }
    return var_v0;
}
