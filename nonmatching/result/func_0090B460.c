/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0026C760(void);
extern char D_0058D7AA[];
extern char D_00591C09[];

s32 func_0090B460(void) {
    if (((*(u8 *)D_00591C09) != 0) && ((*(u8 *)D_00591C09) != 8) && ((*(u8 *)D_00591C09) != 7)) {
        return 0;
    }
    if ((*(s8 *)D_0058D7AA) != 0) {
        return 0;
    }
    return func_0026C760();
}
