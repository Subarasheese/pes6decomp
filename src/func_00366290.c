/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
void *func_00221210();                              /* extern */
s32 func_00309420();                                /* extern */
extern char D_00510FD0[];
extern char D_00591C09[];

s32 func_00366290(void) {
    void *temp_s0;

    temp_s0 = func_00221210();
    if (((*(s32 *)D_00510FD0) != 0xC) && (func_00309420() == 0) && ((*(u8 *)D_00591C09) == 0) && (M2C_FIELD(temp_s0, u8 *, 0x11) != 0)) {
        return 1;
    }
    return 0;
}
