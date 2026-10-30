/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00214290(s32);                         /* extern */
M2C_UNK func_0099C7C0(void *);                      /* extern */
extern void *D_00A7DD60;

void func_009C63F0(void) {
    if (D_00A7DD60 != NULL) {
        func_00214290(M2C_FIELD(D_00A7DD60, s32 *, 0xC));
        func_00214290(M2C_FIELD(D_00A7DD60, s32 *, 0x10));
        func_0099C7C0(D_00A7DD60);
        D_00A7DD60 = NULL;
    }
}
