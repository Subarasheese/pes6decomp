/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002211C0(int, int, int, int);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00C99AD0(void *, s32);                 /* extern */
extern void *D_003AE9D0;

s32 func_00901260(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_002211C0(arg0, arg1, arg2, arg3);
    func_0026E840(0x84028400);
    func_00C99AD0(M2C_FIELD(D_003AE9D0, void **, 0x4C), arg2);
    M2C_FIELD(M2C_FIELD(D_003AE9D0, void **, 0x4C), s16 *, 0x10) = 0;
    return 2;
}
