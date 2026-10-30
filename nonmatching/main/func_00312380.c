/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591A90[];
extern char Pes6MatchSquads[];

s32 func_00312380(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;
    s32 var_v0;
    u8 temp_a2;
    void *var_a5;

    temp_a1 = arg1 & 0xFF;
    var_v0 = 0;
    var_a5 = ((void *)D_00591A90) + (temp_a1 * 0x8B);
loop_1:
    temp_a2 = M2C_FIELD(var_a5, u8 *, 7);
    if ((arg2 & 0xFFFF) != M2C_FIELD((((void *)Pes6MatchSquads) + (temp_a1 * 0x6900) + (temp_a2 * 0x348)), u16 *, 0x46)) {
        var_v0 += 1;
        var_a5 += 1;
        if (var_v0 >= 0x20) {
            return 0;
        }
        goto loop_1;
    }
    *arg0 = temp_a2;
    return 1;
}
