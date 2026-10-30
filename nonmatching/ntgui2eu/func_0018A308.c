/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00135018(s32);                         /* extern */
extern char D_005C5990[];

void func_0018A308(void) {
    if ((*(s32 *)D_005C5990) != 0) {
        func_00135018((*(s32 *)D_005C5990));
        (*(s32 *)D_005C5990) = 0;
    }
}
