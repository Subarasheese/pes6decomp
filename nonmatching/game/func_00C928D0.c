/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EA8AC;
extern char D_00591DCC[];

void func_00C928D0(s32 arg0, f32 fparg0) {
    u32 temp_a1;
    void *temp_a2;

    temp_a1 = (*(u8 *)D_00591DCC) ^ arg0;
    if ((D_003EA8AC != 0) && (temp_a1 < 2U)) {
        temp_a2 = (temp_a1 * 0x14) + D_003EA8AC;
        M2C_FIELD(temp_a2, f32 *, 0x10) = fparg0;
        M2C_FIELD(temp_a2, u8 *, 8) = (u8) ((M2C_FIELD(temp_a2, u8 *, 8) & ~2) | 2);
    }
}
