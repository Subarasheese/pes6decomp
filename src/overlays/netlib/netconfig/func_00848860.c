/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern char D_008B146D[];
extern char D_008B146E[];

u8 func_00848860(s32 arg0, s32 arg1) {
    if (arg0 != 0) {
        return (((s8 *)D_008B146D))[arg1];
    } else {
        if (((*(u8 *)D_008B146D) == 0) && ((*(u8 *)D_008B146E) == 0)) {
            return 0U;
        }
        return 1U;
    }
}
