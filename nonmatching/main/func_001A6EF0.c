/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
extern s32 func_00145590(void *);
extern u8 D_003E98B0;
extern char D_005215F0[];

void func_001A6EF0(u8 *arg0, s32 arg1) {
    u8 temp_a2;
    u8 temp_v1_2;
    void **temp_v1;
    void *temp_a0;
    void *temp_s0;

    temp_a2 = *arg0;
    temp_v1 = ((void *)D_005215F0) + (temp_a2 * 4);
    temp_s0 = *temp_v1;
    if (((s32) temp_a2 < 0x23) && (temp_s0 != NULL)) {
        *temp_v1 = NULL;
        temp_v1_2 = M2C_FIELD(temp_s0, u8 *, 2) - 1;
        M2C_FIELD(temp_s0, u8 *, 2) = temp_v1_2;
        if ((temp_v1_2 & 0xFF) > 0) {
            return;
        }
        if (arg1 != 0) {
            if ((s32) M2C_FIELD(temp_s0, u8 *, 3) >= 0x17) {
                func_00145590(M2C_FIELD(temp_s0, void **, 0xC));
                func_00145590(M2C_FIELD(temp_s0, void **, 0x10));
                temp_a0 = M2C_FIELD(temp_s0, void **, 0x18);
                if (temp_a0 != NULL) {
                    func_00153FA0(temp_a0);
                }
                M2C_FIELD(temp_s0, void **, 0x18) = NULL;
                M2C_FIELD(temp_s0, void **, 0xC) = NULL;
                M2C_FIELD(temp_s0, void **, 0x10) = NULL;
                M2C_FIELD(temp_s0, s8 *, 1) = 0;
            }
            M2C_FIELD(temp_s0, u8 *, 2) = 0U;
            D_003E98B0 = M2C_FIELD(temp_s0, u8 *, 3);
        }
        M2C_FIELD(temp_s0, u8 *, 2) = 0U;
    }
}
