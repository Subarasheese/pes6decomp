/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00AE57F0(s32);                         /* extern */
s32 func_00AE9DC0();                                /* extern */
extern void *D_003EADA4;
extern s32 D_003EADA8;

s32 func_00AE32F0(void) {
    void *temp_s0;

    temp_s0 = D_003EADA4;
    if (temp_s0 != NULL) {
        D_003EADA8 = M2C_FIELD(temp_s0, s32 *, 0x3DB8);
        if ((M2C_FIELD(temp_s0, s32 *, 0x59F4) == 1) && (M2C_FIELD(temp_s0, s32 *, 0x59F0) == 2)) {
            func_00AE57F0(M2C_FIELD(temp_s0, s32 *, 0x3DC0));
        }
        M2C_FIELD(temp_s0, s32 *, 0x59F8) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x59F8) + 1);
        return func_00AE9DC0();
    }
    return 1;
}
