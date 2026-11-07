/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"


s32 func_009142F0(u8 *);                              /* extern */
extern char D_00591DC4[];
extern char D_005926F2[];

s32 func_0096D040(u8 *arg0) {
    u8 d = *(u8 *)D_005926F2;
    u8 x = *arg0;

    if (((s32) x % (s32) d) == ((u32) (*(u32 *)D_00591DC4) % d)) {
        return 1;
    }
    return func_009142F0(arg0) != 0;
}
