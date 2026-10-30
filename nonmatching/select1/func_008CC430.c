/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0027AA00(int);
extern void func_001AC410(void);
extern void func_001A58E0(void *, signed char);
extern void func_0017E120(int);
extern void func_001AC500(s32, s32);
M2C_UNK func_001A5900();                            /* extern */
M2C_UNK func_001A5A20(s32);                         /* extern */
M2C_UNK func_008CC650(s32);                         /* extern */
extern s32 D_003EA4CC;
extern char Pes6MatchPlayers[];

void func_008CC430(void) {
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_s0;
    s32 var_s0_2;

    var_s0 = 0;
    do {
        func_008CC650(var_s0);
        func_001AC500(var_s0 + 0x7531, 1);
        if (var_s0 == 0xFF) {
            var_a0 = 1;
        } else {
            var_a0 = var_s0 % 23;
        }
        M2C_FIELD(M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0 * 0x240)), void **, 4), s8 *, 0x2C) = 0;
        if (var_s0 != 0xFF) {
            var_a0_2 = var_s0 % 23;
        } else {
            var_a0_2 = 1;
        }
        func_001A58E0(*M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0_2 * 0x240)), void ***, 4), 0);
        if (var_s0 == 0xFF) {
            var_a0_3 = 1;
        } else {
            var_a0_3 = var_s0 % 23;
        }
        func_001A5A20(*M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0_3 * 0x240)), s32 **, 4));
        var_s0 += 1;
    } while (var_s0 < 0x17);
    func_001A5900();
    func_001AC410();
    var_s0_2 = 0;
    do {
        func_001AC500(var_s0_2 + 0x7531, 1);
        var_s0_2 += 1;
    } while (var_s0_2 < 0x17);
    func_001AC500(0x7530, 1);
    D_003EA4CC = 0;
    func_0017E120(0);
    func_0027AA00(0);
}
