/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0030E690(s32);
extern int Pes6MatchPlayer_GetSquadIndex(u8);
extern void func_00338930(int);
s32 func_00345500(void *arg0) {
    u8 temp_s0;
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg0, void **, 0x3C);
    if (M2C_FIELD(temp_s1, u8 *, 8) == 0) {
        return 0;
    }
    temp_s0 = M2C_FIELD(temp_s1, u8 *, 0x78);
    if (func_0030E690((s32) temp_s0) != 0) {
        M2C_FIELD((Pes6MatchPlayer_GetSquadIndex(temp_s0) + temp_s1), s8 *, 0x326) = 1;
    }
    func_00338930((s32) arg0);
    return 1;
}
