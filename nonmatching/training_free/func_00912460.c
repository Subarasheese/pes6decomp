/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0090BD80(void *, void *, s32, s32);    /* extern */
s32 func_0090CDF0(void *, s32, s32);                /* extern */
s32 func_0098ED30(u8);                              /* extern */
s32 func_00BDB8B0(void *);                          /* extern */
extern char Pes6MatchPlayers[];

void func_00912460(void *arg0, s32 arg1) {
    s32 temp_a2;
    s32 temp_s1;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_v0;
    void *temp_s0;

    temp_v1 = arg1 & 0xFF;
    if (temp_v1 != 0xFF) {
        var_a0 = temp_v1 % 23;
    } else {
        var_a0 = 1;
    }
    temp_s0 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
    if (func_00BDB8B0(temp_s0) != 0) {
        temp_s1 = func_0098ED30(M2C_FIELD(arg0, u8 *, 0)) & 0xFF;
        temp_a2 = func_0090CDF0(arg0, arg1, temp_s1) & 0xFFFF;
        temp_v1_2 = M2C_FIELD(arg0, s16 *, 0x1D2) + temp_a2;
        var_v0 = temp_v1_2 >> 1;
        if (temp_v1_2 < 0) {
            var_v0 = (s32) (temp_v1_2 + 1) >> 1;
        }
        M2C_FIELD(arg0, s16 *, 0x1D2) = (s16) var_v0;
        func_0090BD80(arg0, temp_s0, temp_a2, temp_s1);
    }
}
