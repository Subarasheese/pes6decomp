/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern char D_0092F0FC[];
extern char D_0092F0FF[];

s32 func_00303F30(void) {
    u8 temp_v1;

    temp_v1 = *(((char *)D_0092F0FF) + (*(u8 *)D_0092F0FC));
    if ((temp_v1 != 9) && (temp_v1 != 8) && (temp_v1 != 7) && (temp_v1 != 6)) {
        return 0;
    }
    return 1;
}
