/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001ED8B0(void *, void *);
extern void func_001EDA50(void *, void *);
M2C_UNK func_00C74CC0(s32);                         /* extern */

void func_008FD380(void *arg0, f32 fparg0, f32 fparg1) {
    f32 sp30;
    f32 sp34;

    if (arg0 != NULL) {
        func_00C74CC0(M2C_FIELD(arg0, s32 *, 4));
        func_001ED8B0(M2C_FIELD(arg0, void **, 0x20), &sp30);
        sp30 = fparg0;
        sp34 = fparg1;
        func_001EDA50(M2C_FIELD(arg0, void **, 0x20), &sp30);
    }
}
