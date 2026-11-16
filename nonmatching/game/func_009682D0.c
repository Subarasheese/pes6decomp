/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_00968010(void *, void *);
s32 func_00990150(void *, s32, u16, s32, s32, u8 *);
extern char Pes6MatchPlayers[];
s32 func_009682D0(void *arg0) {
    u8 sp60[16];
    s32 temp_s0;
    s32 i;
    s32 r;
    u32 idx;
    u8 *p;

    temp_s0 = func_00990150(arg0, M2C_FIELD(arg0, u8 *, 0x13) ^ 1, M2C_FIELD(arg0, u16 *, 0x26), 0x4000, 0x400, sp60) & 0xFF;
    r = temp_s0 > 0;
    p = sp60;
    for (i = 0; i < temp_s0; i++, p++) {
        s32 s2 = 0;
        if (r != 0) {
            if (*p == 0xFF) {
                idx = 1;
            } else {
                idx = *p % 23;
            }
            if (func_00968010(arg0, Pes6MatchPlayers + idx * 0x240) != 0) {
                s2 = 1;
            }
        }
        r = s2;
    }
    return r;
}
