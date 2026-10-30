/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00214290(s32);                         /* extern */
M2C_UNK func_0099C7C0(s32 *);                       /* extern */
extern s32 *D_00A68D78;

void func_00979D70(void) {
    if (D_00A68D78 != NULL) {
        func_00214290(*D_00A68D78);
        func_0099C7C0(D_00A68D78);
        D_00A68D78 = NULL;
    }
}
