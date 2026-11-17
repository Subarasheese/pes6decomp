/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

s32 func_002CA7A0(void *);
extern char Pes6MatchPlayers[];

s32 func_00B27500(s32 arg0) {
    s32 temp_s1;
    s32 var_a1;
    s32 var_s2;
    s32 var_s3;
    char *temp_s0;

    var_a1 = 1;
    var_s3 = 0;
    temp_s1 = (arg0 != 0) ? 0xC : 1;
    if (temp_s1 != 0xFF) {
        var_a1 = temp_s1 % 23;
    }
    temp_s0 = Pes6MatchPlayers + var_a1 * 0x240;
    for (var_s2 = temp_s1; var_s2 < temp_s1 + 0xB; var_s2++) {
        if (*(u8 *)(*(char **)(temp_s0 + 4) + 0x2C) == 1) {
            if (func_002CA7A0(temp_s0) != 0) {
                var_s3 += 1;
            }
        }
    }
    return var_s3;
}
