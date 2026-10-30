/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_0022F150(void);
extern void func_00210E50(void);
extern void func_00241640(void);
extern void *D_003E77B0;

void func_00935810(void) {
    void *temp_v0;

    temp_v0 = func_0022F150();
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s16 *, 0x5FC) = 0xFFFF;
    }
    M2C_FIELD(D_003E77B0, s32 *, 0x20) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x20) & 0xFFFDFFFF);
    func_00210E50();
    func_00241640();
}
