/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0027A5B0(void *, s8);
s32 func_00AFBA70(u8);                              /* extern */
extern char Pes6MatchPlayers[];

void func_00ACCF30(u8 *arg0) {
    s32 var_a1;
    u8 *temp_v1;
    u8 temp_a1;

    if ((func_00AFBA70(*arg0) & 0xFF) == 0xFF) {
        var_a1 = 1;
    } else {
        var_a1 = (s32) (func_00AFBA70(*arg0) & 0xFF) % 23;
    }
    temp_v1 = ((void *)Pes6MatchPlayers) + (var_a1 * 0x240);
    if (arg0 != temp_v1) {
        temp_a1 = *temp_v1;
        if ((u32) M2C_FIELD(((temp_a1 * 4) + arg0), u32 *, 0x158) < 0x24001U) {
            func_0027A5B0(arg0, (s8) temp_a1);
        }
    }
}
