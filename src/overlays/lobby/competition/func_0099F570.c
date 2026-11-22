/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_009BD590(s32);
extern char D_00A7DB70[];
extern char D_00A7DB78[];

s32 func_0099F570(void) {
    if (func_009BD590((*(s32 *)D_00A7DB78)) == 0) {
        (*(s32 *)D_00A7DB70) = 5;
        return 0;
    }
    return 6;
}
