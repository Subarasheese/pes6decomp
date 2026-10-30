/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008FB318(s32, s32, s32, s32);          /* extern */

void func_008FBF40(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_a4;
    void *temp_v1;

    temp_a4 = arg2 * arg3;
    temp_a2 = arg2 * 0x10;
    temp_v1 = M2C_FIELD(arg0, void **, 0x40);
    temp_a3 = arg3 * 0x10;
    temp_a1 = (arg1 & 0x0FFFFFFF) | 0x20000000;
    M2C_FIELD(temp_v1, s32 *, 0xF4) = temp_a3;
    M2C_FIELD(temp_v1, s32 *, 0xEC) = temp_a1;
    M2C_FIELD(temp_v1, s32 *, 0xF8) = temp_a4;
    M2C_FIELD(temp_v1, s32 *, 0xF0) = temp_a2;
    M2C_FIELD(temp_v1, s32 *, 0xC4) = 0;
    func_008FB318(temp_a1, temp_a2, temp_a3, temp_a4);
}
