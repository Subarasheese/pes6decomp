/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0026B580(void *, s32, s32);
M2C_UNK func_00C99A90(void *);                      /* extern */
extern void *D_003AE9D0;

void func_008FFD10(s32 arg0) {
    s16 temp_s0;
    void *temp_a0;

    temp_a0 = M2C_FIELD(D_003AE9D0, void **, 0x150);
    temp_s0 = M2C_FIELD(temp_a0, s16 *, 0x10);
    func_00C99A90(temp_a0);
    M2C_FIELD(D_003AE9D0, void **, 0x150) = NULL;
    if (temp_s0 == 0) {
        func_0026B580(D_003AE9D0, 6, arg0);
        M2C_FIELD(D_003AE9D0, s8 *, 0x149) = -1;
    }
}
