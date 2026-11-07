/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0024ED10();                            /* extern */
M2C_UNK func_00255EF0();                            /* extern */
M2C_UNK func_00271BA0();                            /* extern */
M2C_UNK func_00B25BD0();                            /* extern */
extern char D_00591BCE[];
extern char D_00591DB5[];
extern char D_00591DD9[];
extern char D_005922F6[];

void func_00271DB0(void) {
    if ((*(s8 *)D_00591DB5) == 0) {
        (*(s8 *)D_00591DD9) = 0;
        func_00271BA0();
        if (((*(u8 *)D_00591BCE) == 1) && ((*(u8 *)D_005922F6) == 0)) {
            func_00271BA0();
        }
        (*(u8 *)D_005922F6) = 0;
    } else {
        func_00B25BD0();
    }
    func_00255EF0();
    func_0024ED10();
}
