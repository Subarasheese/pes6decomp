/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00C13280();                              /* extern */
extern char D_00CCB350[];

void func_00C32AD0(s32 arg0) {
    u16 *temp_a1;
    u16 temp_v1;
    u8 temp_a0;

    if (arg0 != -1) {
        temp_a0 = M2C_FIELD(func_00C13280(), u8 *, 1);
        temp_a1 = ((void *)D_00CCB350) + (temp_a0 * 2);
        temp_v1 = *temp_a1;
        if ((s32) temp_v1 < 0x20) {
            M2C_FIELD(((temp_v1 * 4) + ((temp_a0 << 7) + ((void *)D_00CCB350))), s32 *, 0x1F8) = arg0;
            *temp_a1 += 1;
        }
    }
}
