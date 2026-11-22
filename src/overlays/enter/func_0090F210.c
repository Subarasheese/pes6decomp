/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern char D_0092F0ED[];
extern char D_0092F1B0[];

s8 func_0090F210(void) {
    s8 var_v0;

    var_v0 = (*(s8 *)D_0092F0ED);
    if (var_v0 > 0) {
        var_v0 = *(((char *)D_0092F1B0) + var_v0);
    }
    return var_v0;
}
