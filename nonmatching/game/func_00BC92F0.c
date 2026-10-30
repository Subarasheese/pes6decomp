/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char Pes6MatchPlayers[];
extern char D_00CBD3B0[];

void func_00BC92F0(s32 arg0) {
    s32 var_a1;
    s32 var_a2;
    s32 var_a4;
    s32 var_t3;
    s32 var_v0;
    s32 var_v1;
    void *var_t1;
    void *var_t2;

    var_v0 = 0;
    var_a2 = 0;
    var_a1 = 1;
    var_v1 = 0;
    var_t1 = ((void *)D_00CBD3B0) + (arg0 * 0x34);
loop_1:
    var_t3 = 0;
    if (var_a1 != 0xFF) {
        var_a4 = (var_v1 % 23) + 1;
    } else {
        var_a4 = 1;
    }
    var_t2 = ((void *)Pes6MatchPlayers) + (var_a4 * 0x240);
loop_5:
    if (M2C_FIELD(var_t2, u8 *, 0x11) == M2C_FIELD((var_t1 + var_t3), u8 *, 0xC)) {
        var_t3 += 1;
        var_t2 += 0x240;
        if (var_t3 >= 0xB) {

        } else {
            goto loop_5;
        }
    } else {
        var_v0 = 1;
    }
    if (var_v0 == 0) {
        var_a2 += 1;
        var_a1 += 0xB;
        var_v1 += 0xB;
        var_t1 += 0xB;
        if (var_a2 < 2) {
            goto loop_1;
        }
    }
}
