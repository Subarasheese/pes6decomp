/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_00351E70(u8);                              /* extern */
extern char D_0051FF40[];
extern char D_0051FF45[];
extern char D_0051FF46[];

s32 func_001A1550(void) {
    if (((*(u8 *)D_0051FF45) == 0) && ((*(u8 *)D_0051FF46) == 1) && (func_00351E70((*(u8 *)D_0051FF40)) == 0)) {
        return 1;
    }
    return 0;
}
