/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001EDC80(void *, s32);
extern void func_001EF900(void *, s8);
extern void * func_002F96F0(void *, u32);
extern s32 D_003EA5F4;
extern char D_0092F720[];

void func_00928A30(s32 arg0) {
    s32 temp_a0_2;
    s32 var_a2;
    s32 var_s1;
    void *temp_a0;
    void *temp_a1;
    void *temp_v0;
    void *temp_v0_2;
    void *var_s0;

    temp_a0 = ((void *)D_0092F720) + (D_003EA5F4 << 9);
    if (((u64) ((s64) M2C_FIELD(temp_a0, u8 *, 0x74) << 0x3E) >> 0x3F) != 0) {
        var_s0 = NULL;
        temp_v0 = func_002F96F0(M2C_FIELD(temp_a0, void **, 4), 0U);
        if (temp_v0 != NULL) {
            var_s0 = M2C_FIELD(temp_v0, void **, 0xC);
        }
        var_s1 = 0;
        do {
            temp_v0_2 = func_001EDC80(var_s0, var_s1);
            temp_a1 = ((void *)D_0092F720) + (D_003EA5F4 << 9);
            temp_a0_2 = M2C_FIELD(temp_a1, s32 *, 0x78) + var_s1;
            var_a2 = 0;
            if ((temp_a0_2 < 0x20) && (M2C_FIELD((temp_a1 + (temp_a0_2 * 0xC)), s32 *, 0x88) >= 0)) {
                var_a2 = 1;
            }
            if (var_a2 == 1) {
                func_001EF900(temp_v0_2, arg0 & 0xFF);
            } else {
                func_001EF900(temp_v0_2, 0);
            }
            var_s1 += 1;
        } while (var_s1 < 8);
    }
}
