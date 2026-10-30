/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229460(void);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_0098B2B0(void) {
    s32 var_s2;
    s32 var_s3;
    void *temp_v0;

    temp_v0 = func_00229460();
    if (temp_v0 != NULL) {
        func_001C48E8(temp_v0 + 0x5156, 0, 0xF0);
        var_s3 = 0;
        do {
            var_s2 = 0;
loop_3:
            func_001C48E8(temp_v0 + ((var_s3 & 0xFF) << 7) + ((var_s2 & 0xFF) * 4) + 0x5246, 0, 4);
            var_s2 = (var_s2 + 1) & 0xFF;
            if (var_s2 < 0x20) {
                goto loop_3;
            }
            var_s3 = (var_s3 + 1) & 0xFF;
        } while (var_s3 < 0x20);
    }
}
