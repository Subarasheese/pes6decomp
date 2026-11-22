/* compiler: ee-gcc-2.96-Os-G0 */
#include "pes6/m2c.h"

extern void func_00117270(s32, s32, s32);
extern void func_00117394(s32, s32);

void func_00116F2C(s32 arg0) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_s1;
    s32 temp_v0;

    temp_a2 = M2C_FIELD(arg0, s32 *, 0xF0);
    temp_v0 = M2C_FIELD(arg0, s32 *, 0xA84);
    temp_s1 = temp_a2 - temp_v0;
    if (temp_v0 == -1) {
        M2C_FIELD(arg0, s32 *, 0xA84) = temp_a2;
        func_00117270(arg0, temp_a2, 8);
        return;
    }
    if (temp_s1 > 0) {
        func_00117394(arg0, temp_s1);
        temp_a1 = M2C_FIELD(arg0, s32 *, 0xF0);
        M2C_FIELD(arg0, s32 *, 0xA84) = temp_a1;
        func_00117270(arg0, (temp_a1 - temp_s1) + 8, temp_s1);
        return;
    }
    if (temp_s1 >= 0) {
        return;
    }
    func_00117394(arg0, temp_s1);
    temp_a1_2 = M2C_FIELD(arg0, s32 *, 0xF0);
    M2C_FIELD(arg0, s32 *, 0xA84) = temp_a1_2;
    func_00117270(arg0, temp_a1_2, -temp_s1);
}
