/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern char D_008A3CA0[];
extern char D_008A3CA8[];

s32 func_00818890(void) {
    if (((*(s32 *)D_008A3CA0) != 0)) {
        (*(s32 *)D_008A3CA8) = 1;
        return 0;
    }
    return 1;
}
