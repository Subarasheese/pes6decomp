/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0026B580(void *, s32, s32);
extern void func_00910F00(s64);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0090F820();                                /* extern */
M2C_UNK func_00911D80(s32);                         /* extern */
extern void *D_00923FC8;

s32 func_00911CF0(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    if (func_0090F820() != 0) {
        return 0;
    }
    if (M2C_FIELD(D_00923FC8, s16 *, 2) == M2C_FIELD(D_00923FC8, s16 *, 0)) {
        func_0026E840(0x84008401);
        func_00911D80(arg3);
        func_00910F00(0);
        func_0026B580(D_00923FC8 + 4, 0x18, arg3);
        return 2;
    }
    return 0;
}
