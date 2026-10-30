/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001A58E0(void *, signed char);
extern void func_001AC500(s32, s32);
M2C_UNK func_001A5A20(s32);                         /* extern */
M2C_UNK func_008CC650();                            /* extern */
extern char Pes6MatchPlayers[];

void func_008CB9F0(s32 arg0) {
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;

    func_008CC650();
    func_001AC500(arg0 + 0x7531, 1);
    if (arg0 == 0xFF) {
        var_a0 = 1;
    } else {
        var_a0 = arg0 % 23;
    }
    M2C_FIELD(M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0 * 0x240)), void **, 4), s8 *, 0x2C) = 0;
    if (arg0 != 0xFF) {
        var_a0_2 = arg0 % 23;
    } else {
        var_a0_2 = 1;
    }
    func_001A58E0(*M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0_2 * 0x240)), void ***, 4), 0);
    if (arg0 == 0xFF) {
        var_a0_3 = 1;
    } else {
        var_a0_3 = arg0 % 23;
    }
    func_001A5A20(*M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0_3 * 0x240)), s32 **, 4));
}
