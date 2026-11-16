/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00BAC710(void);

s32 func_00C350E0(s32 arg0) {
    s32 temp_v1;
    s32 temp_v0;
    s32 var_s0;

    temp_v1 = arg0 & 0xFFFF;
    var_s0 = 0x2710;
    if (temp_v1 < 0x59A) {
        if (temp_v1 == 0x42F) var_s0 = 0x1261;
        else if (temp_v1 == 0x424) var_s0 = 0;
        else if (temp_v1 == 0x525) var_s0 = 0xEA6;
        else if (temp_v1 == 0x534) var_s0 = 0x341;
        else if (temp_v1 == 0x4FB) var_s0 = 0x24C3;
        else if (temp_v1 == 0x412) var_s0 = 0x24C3;
        else if (temp_v1 == 0x3F9) var_s0 = 0x80A;
        else if (temp_v1 == 0x3F8) var_s0 = 0x24C3;
        else if (temp_v1 == 0x3F5) var_s0 = 0x1CB8;
    } else {
        temp_v0 = func_00BAC710();
        if (temp_v0 == 0x1B6) var_s0 = 0x24C3;
        else if (temp_v0 == 0x1B5) var_s0 = 0x1015;
        else if (temp_v0 == 0x1B2) var_s0 = 0x24C3;
        else if (temp_v0 == 0x1B1) var_s0 = 0x1388;
        else if (temp_v0 == 0x1AE) var_s0 = 0x24C3;
    }
    return var_s0;
}
