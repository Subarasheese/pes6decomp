/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern char *Pes6BallOwnerRecord;
extern char D_0058E5C3[];

s32 func_00992220(char *arg0) {
    s32 temp_a2_2;
    s32 temp_v1;
    s32 var_a2;
    s32 var_a3;
    u8 temp_a2;
    u8 temp_a3;
    u8 temp_a4;
    u8 temp_v0;

    temp_v0 = M2C_FIELD(Pes6BallOwnerRecord, u8 *, 8);
    if (temp_v0 == 0) return 0;
    temp_a2 = M2C_FIELD(Pes6BallOwnerRecord, u8 *, 0x48);
    if (temp_a2 == 0) return 0;
    temp_a3 = M2C_FIELD(Pes6BallOwnerRecord, u8 *, 0x88);
    if (temp_a3 == 0) return 0;
    if (temp_a2 == 0xFF) {
        var_a2 = 1;
    } else {
        var_a2 = (s32) temp_a2 % 23;
    }
    temp_a4 = M2C_FIELD(arg0, u8 *, 0x13);
    if (temp_a4 == *(((char *)D_0058E5C3) + (var_a2 * 0x240))) return 0;
    if (temp_a3 == 0xFF) {
        var_a3 = 1;
    } else {
        var_a3 = (s32) temp_a3 % 23;
    }
    if (temp_a4 == *(((char *)D_0058E5C3) + (var_a3 * 0x240))) return 0;
    temp_a2_2 = M2C_FIELD(Pes6BallOwnerRecord, s32 *, 0x44);
    if (temp_a2_2 == 2) {
        if (M2C_FIELD(Pes6BallOwnerRecord, u32 *, 0x68) >= 0x02400001U) return 0;
    } else if (temp_a2_2 == 1) {
        if (M2C_FIELD(Pes6BallOwnerRecord, u32 *, 0x6C) >= 0x02400001U) return 0;
    }
    if (temp_v0 != M2C_FIELD(arg0, u8 *, 0)) return 0;
    temp_v1 = M2C_FIELD(Pes6BallOwnerRecord, s32 *, 4);
    if (temp_v1 == 10) return 1;
    if (temp_v1 == 0xF || temp_v1 == 6) {
        if (temp_a2_2 == 4) return 1;
    }
    return 0;
}
