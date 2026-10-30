/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001737F8(void *, s32, s32);
M2C_UNK func_001746C0(void *, s32, void *, void *, void *); /* extern */

void func_001734B0(void *arg0, s32 arg1, s8 arg2, s32 arg3, s32 arg4) {
    s32 temp_s3;
    s32 temp_v1;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0xB80) + (arg1 * 0x24);
    temp_s3 = (M2C_FIELD(arg0, s32 *, 0xD04) != 0) ? arg4 : 0;
    func_001737F8(arg0, arg1, temp_s3);
    M2C_FIELD(temp_s0, s32 *, 0) = (s32) arg2;
    temp_v1 = M2C_FIELD(temp_s0, s32 *, 4) & 0xAF;
    M2C_FIELD(temp_s0, s32 *, 4) = (s32) ((((temp_s3 == 0) ? temp_v1 : (temp_v1 | 0x50)) & 0xF8) | arg3);
    func_001746C0(arg0, arg2 & 0xFF, temp_s0 + 0x10, temp_s0 + 0x14, temp_s0 + 0x18);
}
