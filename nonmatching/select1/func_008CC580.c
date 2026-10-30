/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001AA5E0(s32, s32);
extern void func_0027AA00(int);
extern void func_0017E120(int);
extern void func_00209670(void *, s32);
M2C_UNK func_001A5750();                            /* extern */
extern s8 D_003E9E88;
extern s8 D_003E9E89;
extern char Pes6MatchPlayers[];
extern char D_00591BB0[];
extern char D_00591BB2[];
extern char D_00591BB6[];
extern char D_00591DCC[];
extern char D_00591DCD[];

void func_008CC580(void) {
    s32 *temp_a0;
    s32 var_a0;
    s32 var_s0;
    void *temp_v1;

    func_001A5750();
    func_001AA5E0(1, 0);
    (*(s8 *)D_00591DCC) = 0;
    D_003E9E88 = 0;
    (*(s8 *)D_00591DCD) = 0;
    var_s0 = 0;
    D_003E9E89 = 0;
    (*(s8 *)D_00591BB6) = 1;
    (*(s16 *)D_00591BB0) = 0xFFFF;
    (*(s16 *)D_00591BB2) = 0xFFFF;
    do {
        if (var_s0 == 0xFF) {
            var_a0 = 1;
        } else {
            var_a0 = var_s0 % 23;
        }
        temp_v1 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
        M2C_FIELD(temp_v1, s16 *, 0x26) = 0xC000;
        temp_a0 = M2C_FIELD(temp_v1, s32 **, 4);
        func_00209670(temp_a0, *temp_a0);
        var_s0 += 1;
    } while (var_s0 < 0x17);
    func_0017E120(1);
    func_0027AA00(1);
}
