/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00230410(u32);                             /* extern */
extern void *D_003E77B0;
extern void *D_003E77B4;
extern u8 *D_003E7B0C;

s32 func_0096C4A0(void) {
    u32 temp_a0;
    u8 temp_v1;

    temp_a0 = M2C_FIELD(D_003E77B0, u32 *, 0x20);
    if (!(temp_a0 & 8)) {
        temp_v1 = *D_003E7B0C;
        switch (temp_v1) {                          /* irregular */
        case 0:
            if ((s32) M2C_FIELD(D_003E77B4, u8 *, 0x4AB6) < (s32) M2C_FIELD(D_003E77B4, u8 *, 0x4ABA)) {
                if (temp_a0 & 0x200000) {
                    return 0;
                }
                return 1;
            }
            goto block_23;
        case 3:
        case 1:
            return (temp_a0 & 0x200000) == 0;
        case 4:
        case 2:
            if ((func_00230410(temp_a0) == 1) || !(M2C_FIELD(D_003E77B0, u32 *, 0x20) & 0x4000)) {
                if (M2C_FIELD(D_003E77B0, u32 *, 0x20) & 0x200000) {
                    return 0;
                }
                goto block_23;
            }
            goto block_23;
        default:
            return 0;
        }
    } else {
block_23:
        return 1;
    }
}
