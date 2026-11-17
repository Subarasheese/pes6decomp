/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern void func_00B94B20(u8, u8, s32, s32, s32, s32, s32);
extern char D_00592A55[];
extern char D_00592A56[];

void func_00B94A70(char *arg0) {
    s32 temp_a3;
    s32 temp_a4;
    s32 var_a6;
    u8 temp_a1;
    u8 temp_v1;

    temp_a1 = M2C_FIELD(arg0, u8 *, 0x11);
    temp_v1 = M2C_FIELD(arg0, u8 *, 0x12);
    temp_a3 = temp_v1 * 0x6900;
    temp_a4 = temp_a1 * 0x348;
    var_a6 = 1;
    if ((*(u8 *)(D_00592A55 + temp_a3 + temp_a4) < 2) && (*(u8 *)(D_00592A56 + temp_a3 + temp_a4) <= 0)) {
        var_a6 = 0;
    }
    if (var_a6 != 0) {
        func_00B94B20(temp_v1, temp_a1, M2C_FIELD(arg0, u8 *, 0x10) == 0, temp_a3, temp_a4, temp_a1 * 0x69, var_a6);
    }
}
