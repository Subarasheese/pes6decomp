/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern char D_008A3C78[];
extern char D_008A3C88[];

s32 func_00817CC0(void) {
    if ((*(s32 *)D_008A3C78) != 0) {
        (*(s32 *)D_008A3C88) = 1;
        return 0;
    }
    return 1;
}
