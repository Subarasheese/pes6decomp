/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591BE4[];
extern char D_00CBCC64[];

s32 func_00B7B850(void) {
    if (((*(u8 *)D_00591BE4) * 3) >= (*(s32 *)D_00CBCC64)) {
        return 0;
    }
    return 1;
}
