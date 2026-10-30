/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_011FC830[];

void func_0018FCE8(s32 arg0) {
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;

    var_v0 = 0xA;
    do {
        var_v0 -= 1;
    } while (var_v0 >= 0);
    var_v0_2 = 8;
    do {
        var_v0_2 -= 1;
    } while (var_v0_2 >= 0);
    var_v0_3 = 0xB;
    do {
        var_v0_3 -= 1;
    } while (var_v0_3 >= 0);
    var_v0_4 = 7;
    do {
        var_v0_4 -= 1;
    } while (var_v0_4 >= 0);
    var_v0_5 = 4;
    if (M2C_FIELD((((void *)D_011FC830) + (arg0 * 0x28)), s32 *, 0xC) != 0) {
        do {
            var_v0_5 -= 1;
        } while (var_v0_5 >= 0);
    }
}
