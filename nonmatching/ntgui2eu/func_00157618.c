/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00134FB0(s32);                         /* extern */
extern char D_005BEDA0[];

void func_00157618(void) {
    if ((*(s32 *)D_005BEDA0) != 0) {
        func_00134FB0((*(s32 *)D_005BEDA0));
        (*(s32 *)D_005BEDA0) = 0;
    }
}
