/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00BD67A0(M2C_UNK *, s32, M2C_UNK **);  /* extern */
extern char D_00CBC460[];

M2C_UNK *func_00BD6770(s32 arg0) {
    M2C_UNK *sp1C;

    sp1C = ((void *)D_00CBC460);
    func_00BD67A0(((void *)D_00CBC460), arg0, &sp1C);
    return sp1C;
}
