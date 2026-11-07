/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"


extern char D_011D6E00[];
extern char D_011D6F00[];

void func_00134238(void) {
    s32 var_v1;
    s8 *var_v0;

    var_v1 = 0xFF;
    var_v0 = (s8 *)D_011D6E00;
    var_v0 += var_v1;
    do {
        *var_v0 = 0;
        var_v1 -= 1;
        var_v0 -= 1;
    } while (var_v1 >= 0);
    (*(s32 *)D_011D6F00) = 0;
}
