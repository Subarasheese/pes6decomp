/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00BCAE40(s32, s32, void *);            /* extern */
extern char Pes6MatchPlayers[];
extern char D_00CE4F40[];

void func_00BC93A0(s32 arg0, s32 arg1) {
    s32 temp_v1;
    s32 var_v1;
    void *temp_a2;

    temp_a2 = ((void *)D_00CE4F40) + (arg0 * 0xC0);
    if (arg1 != M2C_FIELD(temp_a2, s32 *, 0x10)) {
        M2C_FIELD(temp_a2, s32 *, 0x10) = arg1;
        if (M2C_FIELD(temp_a2, s32 *, 0xC) == 2) {
            temp_v1 = M2C_FIELD(temp_a2, s32 *, 4);
            if (temp_v1 == 0xFF) {
                var_v1 = 1;
            } else {
                var_v1 = temp_v1 % 23;
            }
            func_00BCAE40(M2C_FIELD((((void *)Pes6MatchPlayers) + (var_v1 * 0x240)), s32 *, 4), M2C_FIELD(temp_a2, s32 *, 0x10), temp_a2);
        }
    }
}
