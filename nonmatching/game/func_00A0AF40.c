/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_00BBB780(s16);
extern char Pes6MatchSquads[];

s32 func_00A0AF40(char *arg0) {
    s32 temp_v1;
    char *temp_a0;

    temp_a0 = Pes6MatchSquads + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900) + (M2C_FIELD(arg0, u8 *, 0x11) * 0x348);
    if (((M2C_FIELD(temp_a0, u8 *, 0x8B) >> 2) & 1) != 0) {
        return 1;
    }
    temp_v1 = M2C_FIELD(temp_a0, u8 *, 0xAC) & 0x7F;
    if (temp_v1 >= 0x5A) {
        return 1;
    }
    if ((M2C_FIELD(temp_a0, u8 *, 0x9E) & 0x7F) < 0x5A) {
        if (func_00BBB780(temp_v1 - 0x28) == 0) {
            temp_a0 = Pes6MatchSquads + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900) + (M2C_FIELD(arg0, u8 *, 0x11) * 0x348);
            return func_00BBB780((M2C_FIELD(temp_a0, u8 *, 0x9E) & 0x7F) - 0x28) != 0;
        }
        return 1;
    }
    return 1;
}
