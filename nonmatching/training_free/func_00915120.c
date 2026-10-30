/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char Pes6MatchPlayers[];
extern char D_005926E1[];
extern char D_00CB52A0[];
extern char D_00CB5357[];

void func_00915120(void) {
    s32 temp_a0;
    s32 var_a4;
    s32 var_a7;
    void *temp_a0_2;

    if ((*(u8 *)D_00CB5357) != 0) {
        if (((*(u8 *)D_00CB5357) & 0xFF) > 0) {
            (*(u8 *)D_00CB5357) -= 1;
        }
    } else {
        var_a7 = 0;
        (*(u8 *)D_00CB5357) = (*(u8 *)D_005926E1);
        do {
            temp_a0 = (var_a7 & 0xFF) * 0xB;
            if ((temp_a0 + 2) != 0xFF) {
                var_a4 = (temp_a0 % 23) + 2;
            } else {
                var_a4 = 1;
            }
            var_a7 = (var_a7 + 1) & 0xFF;
            temp_a0_2 = ((void *)D_00CB52A0) + M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a4 * 0x240)), u8 *, 0x12);
            M2C_FIELD(temp_a0_2, s8 *, 0xB3) = 1;
            M2C_FIELD(temp_a0_2, s8 *, 0xB5) = 1;
        } while (var_a7 < 2);
    }
}
