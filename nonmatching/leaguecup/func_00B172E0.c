/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_0022F190(void);
M2C_UNK func_00B16E50(u8);                          /* extern */
M2C_UNK func_00B17090(u8);                          /* extern */
extern void *D_003EAD78;

void func_00B172E0(void) {
    void *temp_s0;
    void *temp_v0;

    temp_v0 = func_0022F190();
    temp_s0 = D_003EAD78;
    if ((temp_s0 != NULL) && (temp_v0 != NULL)) {
        func_00B17090(M2C_FIELD(temp_s0, u8 *, 0x2C));
        func_00B16E50(M2C_FIELD(temp_s0, u8 *, 0x2C));
    }
}
