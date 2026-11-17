/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"


s32 func_00A09950(void *, s32, u32);                /* extern */
extern void *Pes6Ball_Current;
extern char D_00591E4C[];
extern char D_005926EC[];
extern char Pes6MatchSquads[];

s32 func_00AEBB60(void *arg0, s32 arg1) {
    s32 temp_a1;
    s32 temp_q;
    u16 temp_v1;
    s32 temp_a3;

    if (arg1 >= 0x400001) {
        return 0;
    }
    temp_a1 = ((u32) M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x8C) >> 2) + 0x94;
    temp_a3 = temp_a1 * -0x90;
    temp_q = temp_a3 / 183;
    if (M2C_FIELD((((*(u8 *)D_005926EC) * 4) + Pes6Ball_Current), f32 *, 0x7FC) <= (f32) temp_q) {
        return 0;
    }
    if ((*(u8 *)D_00591E4C) != 0) {
        if (func_00A09950(arg0, temp_q, (u32) temp_a3 >> 31) != 1) {
            return 0;
        }
    }
    temp_v1 = M2C_FIELD(Pes6Ball_Current, u16 *, 0x84);
    if ((temp_v1 == 0xB) || (temp_v1 == 0xF) || (temp_v1 == 0xA)) {
        if (arg1 >= 0x100001) {
            return 0;
        }
    }
    return 1;
}
