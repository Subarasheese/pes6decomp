/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBFAA0[];

void *func_00C13810(void) {
    if (M2C_FIELD(((void *)D_00CBFAA0), u16 *, 0xB222) == 0) {
        return (void *)-1;
    }
    return ((void *)D_00CBFAA0) + ((M2C_FIELD(((void *)D_00CBFAA0), u16 *, 0xB222) - 1) * 4);
}
