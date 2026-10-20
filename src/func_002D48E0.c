/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 *func_00255E60();                               /* extern */
s32 func_00270570();                                /* extern */
M2C_UNK func_00C952F0();                            /* extern */
M2C_UNK func_00C95440();                            /* extern */
extern u8 D_003E9FD4;
extern char D_00510FD0[];

s32 func_002D48E0(void) {
    if ((*(s32 *)D_00510FD0) == 0xC) {
        switch (D_003E9FD4) {                       /* irregular */
        case 0:
            break;
        case 1:
            if (func_00270570() != 0) {
                func_00C952F0();
            }
            break;
        case 2:
            func_00C95440();
            break;
        }
    }
    return *func_00255E60();
}
