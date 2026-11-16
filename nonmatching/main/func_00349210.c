/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_0030EA70(s32, void *, s32, s32);
extern int func_0030E830(void);
extern int func_0030ED20(void *, u8);
extern char D_00CBCDE1[];

s32 func_00349210(void *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    s32 sp3C;
    s32 var_a2;
    s32 mode;
    void *temp_a1;
    void *temp_s0;
    void *temp_v1_2;

    var_a2 = arg2;
    mode = *(u8 *)D_00CBCDE1;
    if (mode == 4) {
        var_a2 = 4;
    } else if (mode == 3) {
        var_a2 = 3;
    } else if (mode == 2) {
        var_a2 = 2;
    } else if (mode == 1 || mode == 0) {
        var_a2 = 1;
    }
    temp_a1 = arg0 + (M2C_FIELD(arg0, u8 *, 0x13) * 8);
    M2C_FIELD(temp_a1, s32 *, 0x1C) = M2C_FIELD(temp_a1, s32 *, 0x18);
    M2C_FIELD(temp_a1, s32 *, 0x18) = var_a2;
    M2C_FIELD(arg0, s8 *, 4) = (s8) ((var_a2 == 2) & (M2C_FIELD(temp_a1, s32 *, 0x1C) == var_a2));
    if (M2C_FIELD(temp_a1, s32 *, 0x18) == 3) {
        func_0030ED20(&sp3C, M2C_FIELD(arg0, u8 *, 0x15));
        if (sp3C != 1) {
            return 1;
        }
    } else if (M2C_FIELD(temp_a1, s32 *, 0x18) != 4) {
        return 1;
    }
    M2C_FIELD(arg0, u8 *, 1) = M2C_FIELD(arg0, u8 *, 0);
    M2C_FIELD(arg0, u8 *, 0) = func_0030EA70(M2C_FIELD(temp_a1, s32 *, 0x1C) == var_a2, temp_a1, var_a2, arg3);
    M2C_FIELD(arg0, u8 *, 3) = M2C_FIELD(arg0, u8 *, 2);
    M2C_FIELD(arg0, u8 *, 2) = M2C_FIELD(arg0, u8 *, 0x13);
    M2C_FIELD(arg0, u8 *, 0x12) = M2C_FIELD(arg0, u8 *, 0x11);
    M2C_FIELD(arg0, u8 *, 0x11) = M2C_FIELD(temp_a1, s32 *, 0x18);
    temp_s0 = (M2C_FIELD(arg0, u8 *, 0x13) * 4) + arg0;
    temp_v1_2 = func_0030E830() + temp_s0;
    M2C_FIELD(temp_v1_2, u8 *, 9) = M2C_FIELD(temp_v1_2, u8 *, 9) + 1;
    return 1;
}
