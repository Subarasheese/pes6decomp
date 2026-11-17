/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_00BC03A0(u16, char *, s32, s32);
extern char Pes6MatchSquads[];

void func_00BEF430(char *arg0, s32 *arg1, s32 *arg2, s32 arg3) {
    u8 temp_a2;

    if (*(u8 *)(arg0 + 0x24) != 0) {
        *(u8 *)(arg0 + 0x4D) = 0x55;
    }
    *arg1 = ((*(u8 *)(arg0 + 0x4D) >> 3) * 0x120) + 0x4000;
    *arg2 = (*(u8 *)(arg0 + 0x4D) >> 3) + 0x18;
    temp_a2 = *(u8 *)(arg0 + 0x12);
    if (((u64) ((u64) *(u8 *)(Pes6MatchSquads + temp_a2 * 0x6900 + *(u8 *)(arg0 + 0x11) * 0x348 + 0x88) << 0x38) >> 0x3F) == 0) {
        *arg1 -= 0x900;
        *arg2 -= 8;
    }
    if (func_00BC03A0(*(u16 *)(*(char **)(arg0 + 4) + 0x30), Pes6MatchSquads, temp_a2 * 0x69, arg3) == 0x59) {
        *arg1 += 0x800;
        *arg2 += 4;
    }
}
