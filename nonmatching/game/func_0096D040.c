/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009142F0(u8);                              /* extern */
extern char D_00591DC4[];
extern char D_005926F2[];

s32 func_0096D040(u8 *arg0) {
    if (((s32) *arg0 % (s32) (*(u8 *)D_005926F2)) == ((u32) (*(u32 *)D_00591DC4) % (u8) (*(u8 *)D_005926F2))) {
        return 1;
    }
    return func_009142F0((*(u8 *)D_005926F2)) != 0;
}
