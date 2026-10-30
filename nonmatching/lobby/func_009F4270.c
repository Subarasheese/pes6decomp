/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00A7E258[];
extern char D_00A7E260[];

s32 func_009F4270(void) {
    if (((*(u8 *)D_00A7E258) & 1) != 1) {
        return -1;
    }
    return (*(s32 *)D_00A7E260);
}
