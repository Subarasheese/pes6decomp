/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00C13AB0(void *, s32, s32);
extern char D_00CCAE00[];

void func_00C17160(s32 arg0, void *arg1) {
    s32 temp_a1;
    s32 var_a5;
    u8 temp_v1;
    void *temp_a0;
    void *temp_v1_2;
    void *var_a4;

    var_a5 = 0;
    temp_a1 = M2C_FIELD(arg1, u8 *, 0) * 0x14;
    var_a4 = ((void *)D_00CCAE00) + temp_a1;
    do {
        temp_a0 = arg1 + var_a5;
        temp_v1 = M2C_FIELD(temp_a0, u8 *, 1);
        var_a5 += 5;
        M2C_FIELD(var_a4, u8 *, 1) = temp_v1;
        M2C_FIELD(var_a4, u8 *, 2) = (u8) M2C_FIELD(temp_a0, u8 *, 2);
        M2C_FIELD(var_a4, u8 *, 3) = (u8) M2C_FIELD(temp_a0, u8 *, 3);
        M2C_FIELD(var_a4, u8 *, 4) = (u8) M2C_FIELD(temp_a0, u8 *, 4);
        M2C_FIELD(var_a4, u8 *, 5) = (u8) M2C_FIELD(temp_a0, u8 *, 5);
        var_a4 += 5;
    } while (var_a5 < 6);
    temp_v1_2 = temp_a1 + ((void *)D_00CCAE00);
    M2C_FIELD((var_a5 + temp_v1_2), u8 *, 1) = (u8) M2C_FIELD((var_a5 + arg1), u8 *, 1);
    M2C_FIELD(temp_v1_2, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
    func_00C13AB0(((void *)D_00CCAE00) + 0x28, arg0, (s32) arg1);
}
