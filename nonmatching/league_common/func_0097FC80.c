/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F4CE0(void *, s8);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
extern void *D_003EA970;
extern u8 D_003EA974;

void func_0097FC80(void) {
    s32 temp_a0;
    u8 temp_s0;
    u8 var_v1;
    void *temp_s1;

    temp_s1 = D_003EA970;
    if (temp_s1 != NULL) {
        if (temp_s1 != NULL) {
            var_v1 = M2C_FIELD(temp_s1, u8 *, 5);
        } else {
            var_v1 = 0;
        }
        temp_a0 = var_v1 & 0xFF;
        if (temp_a0 != 0) {
            temp_s0 = M2C_FIELD(temp_s1, u8 *, 0x1006);
            if ((s32) temp_s0 >= (temp_a0 - 1)) {
                if (temp_a0 >= 3) {
                    M2C_FIELD(temp_s1, u8 *, 0x1006) = 0U;
                }
            } else {
                M2C_FIELD(temp_s1, u8 *, 0x1006) = (u8) (temp_s0 + 1);
            }
            D_003EA974 = M2C_FIELD(temp_s1, u8 *, 0x1006);
            if (D_003EA970 != NULL) {
                func_002F4CE0(M2C_FIELD(D_003EA970, void **, 0), M2C_FIELD(temp_s1, u8 *, 0x1006) & 0xFF);
            }
            if (temp_s0 != M2C_FIELD(temp_s1, u8 *, 0x1006)) {
                func_0026E840(0x8400F802);
            }
        }
    }
}
