/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_0058D3BC[];
extern char D_0058D3E0[];
extern char D_00591C09[];

s32 func_002630B0(void) {
    s32 value;

    value = 0xA;
    if ((*(u8 *)D_00591C09) == 5) {
        value = ((s32 *)D_0058D3BC)[*(u8 *)D_0058D3E0];
    }
    return value == 5;
}
