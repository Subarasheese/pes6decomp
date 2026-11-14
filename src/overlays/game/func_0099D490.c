/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00C9A3A0[];
extern char D_00C9A3A4[];
extern char D_00C9A3A5[];

void func_0099D490(u8 arg0, s32 arg1) {
    *(((u8 *)D_00C9A3A0) + arg1) = arg0;
    if ((arg1 == 0) && ((*(u8 *)D_00C9A3A4) == 0xFF)) {
        (*(u8 *)D_00C9A3A4) = arg0;
        (*(s8 *)D_00C9A3A5) = 0;
    }
}
