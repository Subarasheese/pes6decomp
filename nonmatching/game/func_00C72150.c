/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EA820;
extern char D_00CCBD30[];

void func_00C72150(s32 arg0, s32 arg1) {
    void *temp_a2;

    D_003EA820 = arg0;
    temp_a2 = ((void *)D_00CCBD30) + (arg0 * 0x50);
    M2C_FIELD(temp_a2, u8 *, 0x29) = (u8) ((M2C_FIELD(temp_a2, u8 *, 0x29) & ~1) | (arg1 & 1));
}
