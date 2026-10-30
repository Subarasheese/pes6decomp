/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00256250(u8, M2C_UNK, void *, s32);    /* extern */
extern void *D_003E7A08;
extern char Pes6MatchPlayers[];

void func_00997260(void) {
    M2C_UNK var_a1;
    s32 temp_a0;
    s32 var_a0;
    s32 var_a3;
    u8 temp_a0_2;
    u8 temp_v1;

    var_a3 = 0;
    temp_a0 = M2C_FIELD(D_003E7A08, s32 *, 4);
    var_a1 = 0;
    switch (temp_a0) {                              /* irregular */
    case 1:
        temp_a0_2 = M2C_FIELD(D_003E7A08, u8 *, 0x25);
        if ((temp_a0_2 != 6) && (temp_a0_2 != 0xA) && (temp_a0_2 != 0xC) && (temp_a0_2 != 7) && (temp_a0_2 != 5)) {

        } else {
            var_a3 = 1;
        }
        break;
    case 3:
    case 2:
        var_a3 = 1;
        break;
    case 4:
        var_a3 = 1;
        var_a1 = 2;
        break;
    }
    if (var_a3 != 0) {
        temp_v1 = M2C_FIELD(D_003E7A08, u8 *, 8);
        if (temp_v1 == 0xFF) {
            var_a0 = 1;
        } else {
            var_a0 = (s32) temp_v1 % 23;
        }
        func_00256250(M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0 * 0x240)), u8 *, 0x12), var_a1, D_003E7A08, var_a3);
    }
}
