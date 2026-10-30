/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00991EB0(M2C_UNK, M2C_UNK);                /* extern */
s32 func_009946A0(M2C_UNK);                         /* extern */
extern void *D_003E7A08;

void func_00994EF0(u8 *arg0) {
    if (func_009946A0(0) == 0) {
        if (M2C_FIELD(D_003E7A08, u8 *, 8) != *arg0) {
            goto block_2;
        }
        if (func_00991EB0(6, 0) >= 5) {
            M2C_FIELD(D_003E7A08, s32 *, 0x284) = 0;
            M2C_FIELD(D_003E7A08, s8 *, 0x288) = 0;
        } else {
block_2:
            M2C_FIELD(D_003E7A08, s32 *, 0x284) = 6;
            M2C_FIELD(D_003E7A08, s8 *, 0x28B) = 0;
        }
    }
}
