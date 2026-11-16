/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_00288670(s32, s32);
s32 func_00BBB8C0(s32);
extern char Pes6MatchSquads[];

s32 func_00AA2B40(void *arg0, s32 arg1) {
    s32 t;
    s32 half;
    s32 a0;
    s32 temp_s0;

    t = (0x63 - func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((char *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x80) & 0x7F, 0x28)) + 0x63;
    half = t / 2;
    a0 = (half * arg1) / 200;
    temp_s0 = (a0 * 5) / 10;
    return temp_s0 + func_00BBB8C0(temp_s0);
}
