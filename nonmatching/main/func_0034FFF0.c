/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00338AA0(s32, s32);
extern s32 func_00338750(void *, s32);
s32 func_00338AD0(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_00C17200(M2C_UNK *, M2C_UNK *);        /* extern */
extern char D_003E6408[];
extern u8 D_003E9F6C;
extern char D_0061C6F8[];
extern M2C_UNK func_0034FC90;
extern M2C_UNK func_0034FDC0;

s32 func_0034FFF0(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_00338AD0(0x30, &func_0034FC90, 0xA, ((void *)D_003E6408));
    func_00338AA0(temp_v0, arg0);
    func_00338750((void *) temp_v0, 0x1E);
    if (D_003E9F6C == 0) {
        func_00C17200(((void *)D_0061C6F8), &func_0034FDC0);
        D_003E9F6C = 1;
    }
    return 1;
}
