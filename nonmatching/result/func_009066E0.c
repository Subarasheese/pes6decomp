/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0022FD00(void);
extern s32 func_0026C760(void);
extern char D_0058D7A5[];

s32 func_009066E0(void) {
    if ((*(s8 *)D_0058D7A5) != 0) {
        return 0;
    }
    if (func_0026C760() == 0) {
        return 0;
    }
    return func_0022FD00() != 0;
}
