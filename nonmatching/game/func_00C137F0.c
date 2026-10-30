/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBFAA0[];

void *func_00C137F0(void) {
    return ((void *)D_00CBFAA0) + (M2C_FIELD(((void *)D_00CBFAA0), u16 *, 0xB222) * 4);
}
