/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EF900(void *, s8);
extern void *D_003EA9C4;

void func_009BD930(s8 arg0) {
    s32 var_s1;
    void *temp_a0;
    void *temp_s0;

    temp_s0 = D_003EA9C4;
    if (temp_s0 != NULL) {
        var_s1 = 0;
        if ((s32) M2C_FIELD(temp_s0, u8 *, 0x548) > 0) {
            do {
                temp_a0 = M2C_FIELD((temp_s0 + ((var_s1 & 0xFF) * 4)), void **, 0x558);
                if (temp_a0 != NULL) {
                    func_001EF900(temp_a0, arg0);
                }
                var_s1 = (var_s1 + 1) & 0xFF;
            } while (var_s1 < (s32) M2C_FIELD(temp_s0, u8 *, 0x548));
        }
    }
}
