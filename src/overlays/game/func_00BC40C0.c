/* compiler: mwcc-3.0.1b151 */

#include "types.h"

extern u8 D_00591BBF[];
extern s32 func_002BE490(s32, s32);

s32 func_00BC40C0(void) {
    s32 result;
    s32 home, away;
    if (D_00591BBF[0] == 2) {
        home = (s16)func_002BE490(0, 1);
        away = (s16)func_002BE490(1, 1);
        if (home != away)
            result = 5;
        else
            result = 3;
    } else
        result = 3;
    return result;
}
