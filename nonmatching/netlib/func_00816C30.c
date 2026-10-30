/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D0BAF0();                                /* extern */
extern char D_008A3A38[];
extern char D_008A3A40[];

s32 func_00816C30(s32 arg0) {
    if (func_00D0BAF0() != 0) {
        switch (arg0) {                             /* irregular */
        case 0x4324:
        case 0x4327:
            break;
        case 0x4322:
            if ((*(s8 *)D_008A3A38) == 1) {
                (*(s8 *)D_008A3A40) = 1;
            }
            break;
        }
        return 4;
    }
    return 2;
}
