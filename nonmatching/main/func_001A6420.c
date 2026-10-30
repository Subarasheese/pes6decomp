/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001A64B0(void *, u8);                  /* extern */
extern char D_00520640[];

void func_001A6420(u8 *arg0, s32 arg1) {
    u8 temp_a2;
    u8 temp_v1_2;
    void **temp_v1;
    void *temp_s0;

    temp_a2 = *arg0;
    temp_v1 = ((void *)D_00520640) + (temp_a2 * 4);
    temp_s0 = *temp_v1;
    if (((s32) temp_a2 < 0x23) && (temp_s0 != NULL)) {
        *temp_v1 = NULL;
        temp_v1_2 = M2C_FIELD(temp_s0, u8 *, 2) - 1;
        M2C_FIELD(temp_s0, u8 *, 2) = temp_v1_2;
        if ((temp_v1_2 & 0xFF) > 0) {
            return;
        }
        if (arg1 != 0) {
            func_001A64B0(temp_s0, temp_a2);
        }
        M2C_FIELD(temp_s0, u8 *, 2) = 0U;
    }
}
