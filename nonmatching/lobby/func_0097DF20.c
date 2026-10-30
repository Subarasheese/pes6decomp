/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00214290(s32);                         /* extern */
M2C_UNK func_0099C7C0(void *);                      /* extern */
extern void *D_00A68FF8;

void func_0097DF20(void) {
    if (D_00A68FF8 != NULL) {
        func_00214290(M2C_FIELD(D_00A68FF8, s32 *, 8));
        func_0099C7C0(D_00A68FF8);
        D_00A68FF8 = NULL;
    }
}
