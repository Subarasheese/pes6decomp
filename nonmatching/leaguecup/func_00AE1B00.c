/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229460(void);
s32 func_00228F20(u8);                              /* extern */
M2C_UNK func_0098C510();                            /* extern */
M2C_UNK func_00AE1980();                            /* extern */
extern void *D_003E77B4;

void func_00AE1B00(void) {
    s8 var_v0;
    u8 temp_s0;
    u8 temp_s1;
    void *temp_v0;
    void *var_v1;

    temp_v0 = func_00229460();
    if (temp_v0 != NULL) {
        temp_s0 = M2C_FIELD(temp_v0, u8 *, 0x16F2);
        temp_s1 = M2C_FIELD(temp_v0, u8 *, 0x16F3);
        if (((func_00228F20(temp_s0) & 0xFF) > 0) && ((func_00228F20(temp_s1) & 0xFF) > 0)) {
            var_v1 = (M2C_FIELD(D_003E77B4, u8 *, 0x16F1) * 0xC) + D_003E77B4;
            var_v0 = M2C_FIELD(var_v1, u8 *, 0x4AC0) + 2;
            goto block_7;
        }
        if (((func_00228F20(temp_s0) & 0xFF) > 0) || ((func_00228F20(temp_s1) & 0xFF) > 0)) {
            var_v1 = (M2C_FIELD(D_003E77B4, u8 *, 0x16F1) * 0xC) + D_003E77B4;
            var_v0 = M2C_FIELD(var_v1, u8 *, 0x4AC0) + 1;
block_7:
            M2C_FIELD(var_v1, s8 *, 0x4AC0) = var_v0;
        }
        func_00AE1980();
        func_0098C510();
    }
}
