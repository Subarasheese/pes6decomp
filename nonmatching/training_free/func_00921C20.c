/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00A07B40();                                /* extern */
extern char D_00591F14[];
extern char D_005926EC[];
extern char D_00CB52C8[];

s32 func_00921C20(void) {
    if ((*(u8 *)D_00591F14) != 0) {
        return 0;
    }
    if (func_00A07B40() == 0) {
        return 0;
    }
    return (s32) (*(u8 *)D_00CB52C8) >= (s32) (*(u8 *)D_005926EC);
}
