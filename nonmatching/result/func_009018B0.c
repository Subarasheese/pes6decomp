/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00C99AD0(s32, s32);                    /* extern */
extern char D_0058D7A7[];
extern char D_00921D44[];

void func_009018B0(M2C_UNK arg0, s32 arg1, s32 arg2) {
    func_0026E840(0x84028400);
    func_00C99AD0(arg1, arg2);
    (*(s8 *)D_0058D7A7) = 2;
    (*(s32 *)D_00921D44) = 8;
}
