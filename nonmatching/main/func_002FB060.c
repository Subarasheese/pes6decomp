/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005E9A98[];
extern char D_005E9A9A[];

u8 func_002FB060(void) {
    if ((*(u8 *)D_005E9A98) != 1) {
        return 0U;
    }
    return (*(u8 *)D_005E9A9A);
}
