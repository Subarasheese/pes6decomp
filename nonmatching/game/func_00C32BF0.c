/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00C13280();                              /* extern */
s32 func_00C18DC0(u8);                              /* extern */
extern char D_00CCB350[];

void func_00C32BF0(s32 arg0) {
    u8 temp_a0;

    if (arg0 != -1) {
        temp_a0 = M2C_FIELD(func_00C13280(), u8 *, 1);
        if (((s32) temp_a0 >> 7) == 0) {
            M2C_FIELD((((temp_a0 & 0x7F) * 4) + ((void *)D_00CCB350)), s32 *, 4) = arg0;
            return;
        }
        M2C_FIELD((((func_00C18DC0(temp_a0) & 0xFF) * 4) + ((void *)D_00CCB350)), s32 *, 0x1E8) = arg0;
    }
}
