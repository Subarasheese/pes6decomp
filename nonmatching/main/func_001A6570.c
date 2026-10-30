/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_001A66D0(void *);                        /* extern */
extern void *D_003E9894;
extern char D_00520640[];

void func_001A6570(void) {
    u8 temp_a0;
    u8 temp_v0;
    void **temp_s0;
    void *temp_v0_2;
    void *temp_v1;
    void *var_s1;

    var_s1 = D_003E9894;
    if (var_s1 != NULL) {
        do {
            if (M2C_FIELD(var_s1, u8 *, 1) != 0) {
                temp_a0 = M2C_FIELD(var_s1, u8 *, 0);
                temp_s0 = ((void *)D_00520640) + (temp_a0 * 4);
                temp_v1 = *temp_s0;
                if ((temp_v1 != NULL) && ((s32) temp_a0 < 0x23) && (temp_v1 != NULL)) {
                    *temp_s0 = NULL;
                    temp_v0 = M2C_FIELD(temp_v1, u8 *, 2) - 1;
                    M2C_FIELD(temp_v1, u8 *, 2) = temp_v0;
                    if ((temp_v0 & 0xFF) <= 0) {
                        M2C_FIELD(temp_v1, u8 *, 2) = 0U;
                    }
                }
                temp_v0_2 = func_001A66D0(var_s1);
                M2C_FIELD(temp_v0_2, u8 *, 2) = (u8) (M2C_FIELD(temp_v0_2, u8 *, 2) + 1);
                *temp_s0 = temp_v0_2;
            }
            var_s1 = M2C_FIELD(var_s1, void **, 0x24);
        } while (var_s1 != NULL);
    }
}
