/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0097A070();                            /* extern */
M2C_UNK func_0099C7C0(s32);                         /* extern */
extern char D_00A68D58[];

void func_00978310(void) {
    if ((*(s32 *)D_00A68D58) != 0) {
        func_0097A070();
        func_0099C7C0((*(s32 *)D_00A68D58));
        (*(s32 *)D_00A68D58) = 0;
    }
}
