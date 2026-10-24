/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 func_00270EE0(u8);
extern char D_00591C09[];

void func_00270E90(void) {
    if (((*(u8 *)D_00591C09) != 4) && ((*(u8 *)D_00591C09) != 1) && ((*(u8 *)D_00591C09) != 2)) {
        func_00270EE0((*(u8 *)D_00591C09));
    }
}
