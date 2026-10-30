/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0090F820();                                /* extern */
extern char D_00924000[];
extern char D_00924008[];
extern char D_0092400C[];
extern char D_0092408C[];

s32 func_00901B70(void) {
    if (func_0090F820() == 0) {
        func_0026E840(0x8400F802);
        (*(s32 *)D_0092408C) = 1;
        (*(s32 *)D_0092400C) = 0;
        (*(s32 *)D_00924000) = (s32) ((*(s32 *)D_00924000) + 1) % (s32) (*(s32 *)D_00924008);
        return 0;
    }
    return 0;
}
