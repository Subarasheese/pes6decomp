/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_001A72F0(u8);                            /* extern */
extern char D_005215F0[];

void func_001A7250(u8 *arg0) {
    u8 temp_a1;
    u8 temp_v0;
    void **temp_s0;
    void *temp_v0_2;
    void *temp_v1;

    temp_a1 = *arg0;
    temp_s0 = ((void *)D_005215F0) + (temp_a1 * 4);
    temp_v1 = *temp_s0;
    if ((temp_v1 != NULL) && ((s32) temp_a1 < 0x23) && (temp_v1 != NULL)) {
        *temp_s0 = NULL;
        temp_v0 = M2C_FIELD(temp_v1, u8 *, 2) - 1;
        M2C_FIELD(temp_v1, u8 *, 2) = temp_v0;
        if ((temp_v0 & 0xFF) <= 0) {
            M2C_FIELD(temp_v1, u8 *, 2) = 0U;
        }
    }
    temp_v0_2 = func_001A72F0(temp_a1);
    M2C_FIELD(temp_v0_2, u8 *, 2) = (u8) (M2C_FIELD(temp_v0_2, u8 *, 2) + 1);
    *temp_s0 = temp_v0_2;
}
