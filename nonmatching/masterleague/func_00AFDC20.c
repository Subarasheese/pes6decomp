/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_0022F150(void);
void *func_00223E00();                              /* extern */
s32 func_009847F0(s32);                             /* extern */

s32 func_00AFDC20(M2C_UNK arg0, s32 arg1) {
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_s1_2;
    s32 var_v0;
    u32 temp_v0;
    u8 temp_a0;
    void *temp_s0;
    void *temp_s1;

    temp_s1 = func_00223E00();
    temp_s0 = func_0022F150();
    if (temp_s1 == NULL) {
        goto block_20;
    }
    if (temp_s0 != NULL) {
        temp_s1_2 = M2C_FIELD(temp_s1, u16 *, 4) & 0x3FF;
        temp_v0 = func_009847F0(arg1) & 0xFF;
        if (temp_v0 == 0) {
            var_v0 = 0;
        } else {
            var_v0 = (temp_v0 >> 1) & 0xFFFF;
        }
        temp_a2 = var_v0 & 0xFFFF;
        temp_a1 = temp_s1_2 & 0xFFFF;
        if (temp_a1 < 0x1E) {
            temp_a0 = M2C_FIELD(temp_s0, u8 *, 7);
            if ((temp_a0 == 1) && (temp_a1 >= (temp_a2 & 0xFFFF))) {
                return 1;
            }
            if ((temp_a0 == 2) && (temp_a1 >= ((temp_a2 & 0xFFFF) + 0xF))) {
                return 1;
            }
            goto block_20;
        }
        return 1;
    }
block_20:
    return 0;
}
