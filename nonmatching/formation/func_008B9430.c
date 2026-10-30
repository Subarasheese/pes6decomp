/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008EE190[];

s32 func_008B9430(void) {
    return ((*(u16 *)D_008EE190) & 0x40) != 0;
}
