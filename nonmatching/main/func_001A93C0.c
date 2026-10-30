/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001A9450(void *);                      /* extern */
extern u8 D_003E98C8;
extern char D_00521D50[];

void func_001A93C0(u8 *arg0, s32 arg1) {
    u8 temp_v1_2;
    void **temp_v1;
    void *temp_s0;

    temp_v1 = ((void *)D_00521D50) + (*arg0 * 4);
    temp_s0 = *temp_v1;
    if (temp_s0 != NULL) {
        *temp_v1 = NULL;
        D_003E98C8 = M2C_FIELD(temp_s0, u8 *, 0xA);
        temp_v1_2 = M2C_FIELD(temp_s0, u8 *, 9) - 1;
        M2C_FIELD(temp_s0, u8 *, 9) = temp_v1_2;
        if ((temp_v1_2 & 0xFF) > 0) {
            return;
        }
        if (arg1 != 0) {
            func_001A9450(temp_s0);
        }
        M2C_FIELD(temp_s0, u8 *, 9) = 0U;
    }
}
