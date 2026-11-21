/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_00154090(s64);
extern s32 func_001540A0(s32);

extern char D_008B2440[];

void func_00880510(void) {
    if (!(func_001540A0(0xC) >= 2U)) {
        func_00154090(0xC);
        (*(s32 *)D_008B2440) = 0;
    } else {
        (*(s32 *)D_008B2440) = 1;
        return;
    }
}
