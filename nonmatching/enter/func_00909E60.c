/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001A58E0(void *, signed char);
M2C_UNK func_0027B450(void *, M2C_UNK, s32);        /* extern */
void **func_00299FE0(s32);                          /* extern */
M2C_UNK func_0029A020(s32);                         /* extern */
s32 func_00BA9430(s32);                             /* extern */
extern char D_0092F0D0[];

void func_00909E60(void) {
    s32 temp_s0;
    s32 temp_s1;
    s32 var_s2;

    if (!((*(s32 *)D_0092F0D0) & 0x80)) {
        var_s2 = 0;
        do {
            temp_s0 = var_s2 & 0xFF;
            func_0029A020(temp_s0);
            temp_s1 = func_00BA9430((temp_s0 % 3) + 1);
            func_0027B450(*func_00299FE0(temp_s0), 2, temp_s1);
            func_001A58E0(*func_00299FE0(temp_s0), 0);
            var_s2 = (var_s2 + 1) & 0xFF;
        } while (var_s2 < 3);
    }
}
