/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001F08B0(s32);                             /* extern */
extern char D_00659558[];
extern char D_00659560[];
extern char D_00659740[];
extern char D_0065D9D0[];
extern char D_0065DBB0[];

void func_00645710(void) {
    s32 *var_s0;
    s32 *var_s1;
    s32 *var_s1_2;
    s32 *var_s2_2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_s0_2;
    s32 var_s2;

    var_s2 = 0;
    var_s1 = ((void *)D_00659560);
    var_s0 = ((void *)D_0065D9D0);
    do {
        temp_a0 = *var_s1;
        if (temp_a0 == 0) {
            *var_s0 = (*(s32 *)D_00659558);
        } else {
            *var_s0 = func_001F08B0(temp_a0);
        }
        if (*var_s0 == 0) {
            *var_s0 = (*(s32 *)D_00659558);
        }
        var_s2 += 1;
        var_s1 += 4;
        var_s0 += 4;
    } while (var_s2 < 0x75);
    var_s0_2 = 0;
    var_s2_2 = ((void *)D_00659740);
    var_s1_2 = ((void *)D_0065DBB0);
    do {
        temp_a0_2 = *var_s2_2;
        if (temp_a0_2 == 0) {
            *var_s1_2 = (*(s32 *)D_00659558);
        } else {
            *var_s1_2 = func_001F08B0(temp_a0_2);
        }
        if (*var_s1_2 == 0) {
            *var_s1_2 = (*(s32 *)D_00659558);
        }
        var_s0_2 += 1;
        var_s2_2 += 4;
        var_s1_2 += 4;
    } while (var_s0_2 < 0x91);
}
