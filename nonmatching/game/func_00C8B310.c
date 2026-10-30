/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001EDBA0(void *, void *);
extern s32 func_00C8B0C0(void);
M2C_UNK func_001DC980(s32);                         /* extern */
s32 *func_00C8B090(M2C_UNK);                        /* extern */

void func_00C8B310(void) {
    s32 *temp_v0;
    s32 temp_s0;

    temp_s0 = func_00C8B0C0();
    func_001EDBA0((void *) temp_s0, M2C_FIELD(func_00C8B090(0), void **, 4));
    func_001DC980(*func_00C8B090(0));
    temp_v0 = func_00C8B090(0);
    M2C_FIELD(temp_v0, s32 *, 0) = 0;
    M2C_FIELD(temp_v0, s32 *, 4) = 0;
    M2C_FIELD(temp_v0, s32 *, 8) = 0;
    M2C_FIELD(temp_v0, s32 *, 0xC) = 0;
}
