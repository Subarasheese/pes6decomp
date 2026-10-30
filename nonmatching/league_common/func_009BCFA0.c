/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001A58E0(void *, signed char);
extern void func_001EF900(void *, s8);
extern s32 D_003EA9C4;
extern char Pes6MatchPlayers[];

void func_009BCFA0(s32 arg0, s32 arg1) {
    s32 temp_s1;
    s8 temp_s0;

    temp_s1 = D_003EA9C4;
    if (temp_s1 != 0) {
        temp_s0 = arg0 & 0xFF;
        func_001A58E0(*M2C_FIELD((((void *)Pes6MatchPlayers) + ((arg1 + 1) * 0x240)), void ***, 4), temp_s0);
        if (temp_s0 == 1) {
            func_001EF900(M2C_FIELD(((arg1 * 4) + temp_s1), void **, 0x558), 0);
        }
    }
}
