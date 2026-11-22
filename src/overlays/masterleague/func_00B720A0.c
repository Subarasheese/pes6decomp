/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_00955F10(s32);
extern u32 func_00B77020(void);

void func_00B720A0(void) {
    s32 var_s0;
    u32 temp_v0;
    u8 temp_a0;
    u8 temp_v0_2;

    var_s0 = 0;
    temp_v0 = func_00B77020();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, u8 *, 0x3CD);
        if (temp_a0 == 1) {
            temp_v0_2 = M2C_FIELD((M2C_FIELD(temp_v0, u8 *, 0x3D2) + temp_v0), u8 *, 0x3D3);
            switch (temp_v0_2) {
            case 0:
                var_s0 = 0x01130015;
                break;
            case 1:
                var_s0 = 0x01130016;
                break;
            case 2:
                var_s0 = 0x01130017;
                break;
            case 3:
                var_s0 = 0x01130018;
                break;
            case 4:
                var_s0 = 0x01130019;
                break;
            case 5:
                var_s0 = 0x0113001A;
                break;
            case 6:
                var_s0 = 0x0113001B;
                break;
            case 7:
                var_s0 = 0x0113001C;
                break;
            case 8:
                var_s0 = 0x0113001D;
                break;
            case 9:
                var_s0 = 0x0113001E;
                break;
            case 10:
                var_s0 = 0x0113001F;
                break;
            case 11:
                var_s0 = 0x01130020;
                break;
            }
        } else if (temp_a0 == 0) {
            var_s0 = 0x01130014;
        }
        func_00955F10(var_s0);
    }
}
