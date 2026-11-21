/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 Pes6Scene_Get(s32);
extern char D_0092F0FC[];
extern char D_0092F0FF[];

s32 func_00303690(void) {
    s32 value;
    u8 value2;

    value = Pes6Scene_Get(0);
    if ((value != 0xC) && (value != 9)) {
        return 0;
    }
    value2 = *(((char *)D_0092F0FF) + (*(u8 *)D_0092F0FC));
    {
        s32 result;
        if ((value2 != 2) && (value2 != 1)) {
            result = 1;
        } else {
            result = 0;
        }
        return result;
    }
}
