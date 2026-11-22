/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern char D_00591C09[];
extern char D_00591CB8[];

s32 func_00B29310(void) {
    s32 value;

    value = 0;
    if ((*(u8 *)D_00591C09) != 5) {
        return value;
    }
    if ((*(s32 *)D_00591CB8) == 1) {
        value = 1;
    }
    return value;
}
