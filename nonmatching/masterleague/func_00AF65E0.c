/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_00AF65E0(s32 arg0) {
    s64 var_a2;
    void *temp_v0;
    void *var_a1;

    temp_v0 = func_00228A80();
    if (temp_v0 != NULL) {
        var_a2 = 0;
        var_a1 = temp_v0;
loop_2:
        if ((arg0 & 0xFFFF) != M2C_FIELD(var_a1, u16 *, 0xA68C)) {
            var_a2 = (s64) ((var_a2 + 1) << 0x30) >> 0x30;
            var_a1 += 0x32;
            if (var_a2 >= 0x25) {

            } else {
                goto loop_2;
            }
        } else {
            func_001C48E8(temp_v0 + (((s64) (var_a2 << 0x30) >> 0x30) * 0x32) + 0xA68C, 0, 0x32);
        }
    }
}
