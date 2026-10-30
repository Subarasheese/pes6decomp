/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00BD6510(M2C_UNK *, s32, s32 *);       /* extern */
extern char D_00CBC460[];
extern char D_00CE56A4[];

s32 func_00BD64D0(s32 arg0) {
    s32 sp1C;

    sp1C = (*(s32 *)D_00CE56A4);
    func_00BD6510(((void *)D_00CBC460), arg0, &sp1C);
    return sp1C;
}
