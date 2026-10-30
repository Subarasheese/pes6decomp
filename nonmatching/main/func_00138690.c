/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00138120(void *, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_008FAF18(M2C_UNK *);                   /* extern */
M2C_UNK func_008FBD30(M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
extern char D_004FDC80[];
extern M2C_UNK func_001387B0;
extern M2C_UNK func_00138800;
extern M2C_UNK func_00138830;
extern M2C_UNK func_00138860;
extern M2C_UNK func_001388A0;

s32 func_00138690(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    func_008FAF18(((void *)D_004FDC80));
    func_008FBD30(((void *)D_004FDC80), 0, &func_001388A0, 0);
    func_008FBD30(((void *)D_004FDC80), 1, &func_00138860, 0);
    func_008FBD30(((void *)D_004FDC80), 2, &func_00138830, 0);
    func_008FBD30(((void *)D_004FDC80), 3, &func_00138800, 0);
    func_008FBD30(((void *)D_004FDC80), 5, &func_001387B0, 0);
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    func_00138120(arg0, arg3, arg4, arg5, arg6, arg7);
    return 1;
}
