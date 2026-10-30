/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00AFBA70(s32);
M2C_UNK func_009143D0(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_00BDB8B0(void *);                          /* extern */
extern char Pes6MatchPlayers[];

void func_0098A8B0(s32 arg0) {
    s32 temp_s0;
    s32 var_a0;
    s32 var_s1;
    void *var_s2;

    temp_s0 = arg0 & 0xFF;
    if ((temp_s0 > 0) && (temp_s0 < 0x17)) {
        if ((func_00AFBA70(arg0) & 0xFF) == 0xFF) {
            var_a0 = 1;
        } else {
            var_a0 = (s32) (func_00AFBA70(arg0) & 0xFF) % 23;
        }
        var_s1 = 0;
        var_s2 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
        do {
            if ((func_00BDB8B0(var_s2) != 0) && (M2C_FIELD(var_s2, u8 *, 0x1DD) == 0x27) && (M2C_FIELD(var_s2, s32 *, 0x1E8) == temp_s0)) {
                func_009143D0(var_s2, 3, 1);
            }
            var_s1 += 1;
            var_s2 += 0x240;
        } while (var_s1 < 0xB);
    }
}
