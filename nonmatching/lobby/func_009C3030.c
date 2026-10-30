/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001C7E10(s32);                             /* extern */
M2C_UNK func_0099C570(s32);                         /* extern */
M2C_UNK func_0099C660(s32);                         /* extern */
extern void *D_00A7DD50;

void func_009C3030(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_s2;
    s8 temp_v1;

    if ((D_00A7DD50 != NULL) && (arg0 < 3)) {
        if (arg0 < 0) {
            return;
        }
        temp_s2 = arg0 * 4;
        temp_a0 = M2C_FIELD((temp_s2 + D_00A7DD50), s32 *, 0x420);
        if ((temp_a0 != arg1) && ((temp_a0 == 0) || (arg1 == 0) || (func_001C7E10(temp_a0) != 0)) && (M2C_FIELD((temp_s2 + D_00A7DD50), s32 *, 0x420) = arg1, temp_v1 = M2C_FIELD(D_00A7DD50, s8 *, 5), (temp_v1 == arg0))) {
            temp_a0_2 = M2C_FIELD(((temp_v1 * 4) + D_00A7DD50), s32 *, 0x420);
            if (temp_a0_2 == 0) {
                func_0099C570(temp_a0_2);
                return;
            }
            func_0099C660(temp_a0_2);
        }
    }
}
