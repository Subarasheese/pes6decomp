/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00803C30(u16);                             /* extern */
extern char D_00591BE4[];
extern char D_00829822[];

s32 func_00803BC0(void) {
    if ((s32) (*(u16 *)D_00829822) >= ((*(u8 *)D_00591BE4) * 5)) {
        return 1;
    }
    return func_00803C30((*(u16 *)D_00829822));
}
