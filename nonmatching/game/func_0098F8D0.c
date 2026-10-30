/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0098F0C0(void *, s32);                     /* extern */
s32 func_00BDB8B0(void *);                          /* extern */
extern char Pes6MatchPlayers[];

s32 func_0098F8D0(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_a0;
    s32 var_s0;
    s32 var_s1;
    void *var_s3;

    temp_a0 = (arg0 & 0xFF) * 0xB;
    var_s1 = 0;
    if ((temp_a0 + 1) != 0xFF) {
        var_a0 = (temp_a0 % 23) + 1;
    } else {
        var_a0 = 1;
    }
    var_s0 = 0;
    var_s3 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
    do {
        if (func_00BDB8B0(var_s3) != 0) {
            if (func_0098F0C0(var_s3, arg1) != 0) {
                var_s1 += 1;
            }
        }
        var_s0 += 1;
        var_s3 += 0x240;
    } while (var_s0 < 0xB);
    return var_s1 & 0xFF;
}
