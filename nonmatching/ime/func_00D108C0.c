/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_003637D0(s32);
extern char D_00D376C8[];
extern char D_00D376D8[];
extern char D_00D376E0[];

s32 func_00D108C0(void) {
    if ((*(s32 *)D_00D376E0) == 0) {
        return 1;
    }
    (*(s32 *)D_00D376D8) = 0;
    func_003637D0((*(s32 *)D_00D376C8));
    (*(s32 *)D_00D376C8) = 0;
    return 0;
}
