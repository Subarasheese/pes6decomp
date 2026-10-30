/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0099C7C0(s32);                         /* extern */
M2C_UNK func_009E0400();                            /* extern */
extern char D_00A7E018[];

void func_009F0C80(void) {
    if ((*(s32 *)D_00A7E018) != 0) {
        func_009E0400();
        func_0099C7C0((*(s32 *)D_00A7E018));
        (*(s32 *)D_00A7E018) = 0;
    }
}
