/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0026B580(void *, s32, s32);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00C99AD0(s32, s32);                    /* extern */
extern char D_00921D44[];
extern void *D_00923FC8;

s32 func_0090BD00(M2C_UNK arg0, M2C_UNK arg1, s32 arg2) {
    func_0026E840(0x84028400);
    func_00C99AD0(M2C_FIELD(D_00923FC8, s32 *, 0x98), arg2);
    (*(s32 *)D_00921D44) = 7;
    func_0026B580(D_00923FC8 + 0x38, 0x12, arg2);
    return 2;
}
