/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002D5960(void *, s16);
extern void func_002D5980(void *, s16);
extern s32 D_003EA870;
extern char D_00CCC070[];
extern char D_00CCC080[];

void func_00C7F0D0(s16 arg0) {
    M2C_UNK *var_s0;
    s32 *var_s1;
    s32 var_s2;
    void *temp_s4;

    var_s2 = 0;
    var_s1 = ((void *)D_00CCC070);
    var_s0 = ((void *)D_00CCC080);
    do {
        if (*var_s1 != 0) {
            temp_s4 = var_s0 + 4;
            D_003EA870 = var_s2;
            func_002D5980(temp_s4, arg0);
            func_002D5960(temp_s4, 0);
        }
        var_s2 += 1;
        var_s1 += 4;
        var_s0 += 0x58;
    } while (var_s2 < 2);
}
