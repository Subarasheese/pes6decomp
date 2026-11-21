/* compiler: mwcc-3.0.1b198 */
#include "types.h"

extern char D_008A4398[];
extern char D_008A9DDC[];

s32 func_008247A0(s32 arg0) {
    s32 *entry;

    if ((*(s32 *)D_008A4398) == 0) {
        entry = 0;
    } else if ((*(s32 *)D_008A9DDC) == 0) {
        entry = 0;
    } else {
        entry = ((void *)D_008A9DDC);
    }
    if (entry == 0) {
        return 1;
    }
    *entry = arg0;
    return 4;
}
