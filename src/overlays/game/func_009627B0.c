/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 func_00BDB8B0(char *);
extern char D_0058E7F0[];
extern char D_005900B0[];
extern char Pes6MatchSides[];

u8 func_009627B0(s32 arg0, s32 arg1) {
    char *var_s2;
    s32 var_a2;
    s32 var_s1;
    char *temp_a0;

    if (!(arg0 & 0xFF)) {
        var_s2 = D_0058E7F0;
    } else {
        var_s2 = D_005900B0;
    }
    for (var_s1 = 0; var_s1 < 0xB; var_s1++, var_s2 += 0x240) {
        if (func_00BDB8B0(var_s2) != 0) {
            temp_a0 = Pes6MatchSides + *(u8 *)(var_s2 + 0x12) * 0x168;
            for (var_a2 = 0; var_a2 < 3; var_a2++) {
                if (*(u8 *)(var_s2 + 0x11) == *(u16 *)(temp_a0 + var_a2 * 2 + 0x154)) {
                    if ((arg1 & 0xFF) == *(u8 *)(temp_a0 + var_a2 + 0x15A)) {
                        return *(u8 *)var_s2;
                    }
                }
            }
        } else {
            /* original breaks out of the outer search? */
        }
    }
    return 0;
}
