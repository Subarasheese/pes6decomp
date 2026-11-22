/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern char D_00CCCE30[];

char *func_00C8B090(s32 arg0) {
    s32 var_a0;

    var_a0 = arg0;
    if (var_a0 != 0) {
        var_a0 = 0;
    }
    return ((char *)D_00CCCE30) + (var_a0 * 0x10) + 0x230;
}
