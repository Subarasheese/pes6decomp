/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00A14EC0(void *, void *);                  /* extern */
M2C_UNK func_00AABA00(void *, s32, s32, s32);
extern char Pes6MatchSquads[];

void func_00AABD50(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a0;

    if ((func_00A14EC0(arg0, arg0) == 0) || (M2C_FIELD(arg0, u32 *, 0x114) < 0x121U)) {
        if (M2C_FIELD(arg0, s32 *, 0x11C) >= 0x01000001) {
            temp_a0 = (*(u8 *)((u8 *)Pes6MatchSquads + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900) + (M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + 0x8C) >> 2) + 0x94;
            func_00AABA00(arg0, (temp_a0 * -0x1A4) / 183, 0, arg3);
        } else {
            temp_a0 = (*(u8 *)((u8 *)Pes6MatchSquads + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900) + (M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + 0x8C) >> 2) + 0x94;
            func_00AABA00(arg0, (temp_a0 * -0x220) / 183, 0, arg3);
        }
    }
}
