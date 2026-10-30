/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00259CB0(M2C_UNK *);                   /* extern */
s32 func_0025E0E0(M2C_UNK);                         /* extern */
M2C_UNK func_0025E100(M2C_UNK, M2C_UNK);            /* extern */
extern char D_0058CF84[];
extern char D_0058CFB1[];

void func_00259E20(void) {
    if (func_0025E0E0(5) == 2) {
        func_00259CB0(((void *)D_0058CF84));
        func_0025E100(5, 3);
        (*(s8 *)D_0058CFB1) = 0;
    }
}
