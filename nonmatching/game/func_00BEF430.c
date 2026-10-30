/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BC03A0(u16, M2C_UNK *, s32);             /* extern */
extern char Pes6MatchSquads[];

void func_00BEF430(void *arg0, s32 *arg1, s32 *arg2) {
    u8 temp_a2;

    if (M2C_FIELD(arg0, u8 *, 0x24) != 0) {
        M2C_FIELD(arg0, u8 *, 0x4D) = 0x55U;
    }
    *arg1 = (((u8) M2C_FIELD(arg0, u8 *, 0x4D) >> 3) * 0x120) + 0x4000;
    *arg2 = ((u8) M2C_FIELD(arg0, u8 *, 0x4D) >> 3) + 0x18;
    temp_a2 = M2C_FIELD(arg0, u8 *, 0x12);
    if (((u64) ((s64) M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (temp_a2 * 0x6900))), u8 *, 0x88) << 0x38) >> 0x3F) == 0) {
        *arg1 -= 0x900;
        *arg2 -= 8;
    }
    if (func_00BC03A0(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30), ((void *)Pes6MatchSquads), temp_a2 * 0x69) == 0x59) {
        *arg1 += 0x800;
        *arg2 += 4;
    }
}
