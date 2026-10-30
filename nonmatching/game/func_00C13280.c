/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBFAA0[];

void *func_00C13280(u16 *arg0) {
    if (arg0 == (u16 *)-1) {
        return NULL;
    }
    return ((void *)D_00CBFAA0) + *arg0 + 0x4E20;
}
