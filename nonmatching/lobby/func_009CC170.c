/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00A7DDA8;

void func_009CC170(s32 arg0, s32 arg1) {
    s32 var_v1;
    u8 temp_v1;
    void *temp_a2;
    void *temp_a5;

    if (M2C_FIELD(D_00A7DDA8, u8 *, 0) == 2) {
        temp_a2 = arg0 + D_00A7DDA8;
        M2C_FIELD(temp_a2, u8 *, 0xC) = (u8) ((((M2C_FIELD(temp_a2, u8 *, 0xC) + 2) & 0xFF) + (arg1 & 0xFF)) & 0xFF & 1);
        return;
    }
    do {
        temp_a5 = arg0 + D_00A7DDA8;
        M2C_FIELD(temp_a5, u8 *, 0xC) = (u8) ((((M2C_FIELD(temp_a5, u8 *, 0xC) + 4) & 0xFF) + (arg1 & 0xFF)) & 0xFF & 3);
        temp_v1 = M2C_FIELD((arg0 + D_00A7DDA8), u8 *, 0xC);
        switch (temp_v1) {                          /* irregular */
        case 2:
            if (M2C_FIELD(D_00A7DDA8, u8 *, 6) != 0) {
                var_v1 = 0;
            } else {
            default:
block_13:
                var_v1 = 1;
            }
            break;
        case 0:
            if (M2C_FIELD(D_00A7DDA8, u8 *, 5) != 0) {
                var_v1 = 0;
            } else {
                goto block_13;
            }
            break;
        }
    } while (var_v1 == 0);
}
