/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00C32010(void *, u8);
extern char Pes6MatchSquads[];

void func_00C31B90(void *arg0, void *arg1, s32 *arg2) {
    s32 *p;
    s32 i;
    s32 a1;
    u8 idx;
    u8 *ent;
    u8 *base;
    u8 *s1;

    i = 0;
    p = arg2;
    base = (u8 *)Pes6MatchSquads + M2C_FIELD(arg0, u8 *, 0) * 0x6900;
    do {
        s1 = (u8 *)arg0 + i;
        idx = M2C_FIELD(s1, u8 *, 0x8C);
        if (func_00C32010(arg0, idx) == 0) {
            *p = 0x64;
        } else {
            ent = base + idx * 0x348;
            *p = M2C_FIELD(ent, s32 *, 0xD8) / (M2C_FIELD(ent, s32 *, 0x18) / 100);
            if (M2C_FIELD(arg1, u8 *, 0xE) < 3) {
                a1 = M2C_FIELD(ent, u8 *, 0x89) & 7;
                if ((s32)M2C_FIELD(arg0, u8 *, 0x15) < a1) {
                    *p += a1;
                    if (*p >= 0x65) {
                        *p = 0x64;
                    }
                }
            }
        }
        if (M2C_FIELD(s1, u8 *, 0xC0) == 0) {
            *p = 0x64;
        }
        i += 1;
        p += 1;
    } while (i < 0xB);
}
