/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00802910(M2C_UNK);                     /* extern */
M2C_UNK func_0087F8F0();                            /* extern */
M2C_UNK func_00C99AD0(s32, s32);                    /* extern */
extern char D_0058D7AC[];
extern char D_0058D800[];
extern char D_00921D44[];
extern char D_00924090[];

s32 func_00901A60(M2C_UNK arg0, s32 arg1, s32 arg2) {
    func_0026E840(0x84028400);
    func_00C99AD0(arg1, arg2);
    (*(s8 *)D_0058D7AC) = 0;
    (*(s32 *)D_00924090) = 0;
    (*(s32 *)D_0058D800) = 1;
    func_0087F8F0();
    func_00802910(5);
    (*(s32 *)D_00921D44) = 8;
    return 2;
}
