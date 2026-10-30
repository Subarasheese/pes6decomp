/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00256140(void);
M2C_UNK func_002FE050(s32, u8, u8);                 /* extern */
extern char D_00591BC2[];
extern char D_00591DB5[];
extern char D_00591F2C[];

s32 func_00C952A0(void) {
    if ((*(s8 *)D_00591DB5) != 0) {
        return 0;
    }
    func_002FE050(func_00256140() + 0x620, (*(u8 *)D_00591BC2), (*(u8 *)D_00591F2C));
    return 1;
}
