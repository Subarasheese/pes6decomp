/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char Pes6MatchSquads[];

s32 func_00A9C840(char *arg0) {
    return (M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((char *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x8B) & 1) == 1;
}
