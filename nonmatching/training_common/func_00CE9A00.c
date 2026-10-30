/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00CD7A00(M2C_UNK);                     /* extern */
s32 func_00CE4310();                                /* extern */
extern void *D_003E7E1C;

void func_00CE9A00(void) {
    s32 temp_s0;
    void *temp_s1;

    temp_s1 = D_003E7E1C;
    temp_s0 = M2C_FIELD(temp_s1, s32 *, 0x14C);
    if ((func_00CE4310() != 0) && (M2C_FIELD(((temp_s0 * 4) + temp_s1), s32 *, 0x154) != 0)) {
        M2C_FIELD(D_003E7E1C, s32 *, 0) = 1;
        func_00CD7A00(3);
    }
}
