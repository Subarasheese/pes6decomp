/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char Pes6MatchSquads[];

s32 func_00A0B060(char *arg0) {
    return ((u64) ((s64) M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((char *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x89) << 0x3A) >> 0x3F) != 0;
}
