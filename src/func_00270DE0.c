/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_00591DCC[];
extern char D_00591DCD[];

void func_00270DE0(u8 arg0) {
    (*(u8 *)D_00591DCD) = arg0;
    (*(s8 *)D_00591DCC) = (s8) ((s32) (*(u8 *)D_00591DCD) % 2);
}
