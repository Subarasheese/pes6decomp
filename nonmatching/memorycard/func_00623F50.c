/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00530C74[];

s32 func_00623F50(s32 arg0) {
    if (arg0 >= 0x50) {
        return 0;
    }
    return (*(s32 *)D_00530C74) + (arg0 * 0x260);
}
