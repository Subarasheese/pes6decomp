/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern char D_00CCB718[];

s32 func_00C375E0(s32 arg0) {
    return *(u8 *)(((u8 *)D_00CCB718) + ((arg0 - 1) * 0x94));
}
