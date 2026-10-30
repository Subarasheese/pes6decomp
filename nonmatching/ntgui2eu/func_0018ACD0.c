/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0018ACD0(u64 *arg0, void *arg1) {
    s32 temp_a0;
    s64 temp_v1;
    u64 temp_v0;

    temp_v0 = *arg0;
    temp_v1 = temp_v0 & (-1U >> 0xC);
    M2C_FIELD(arg1, s32 *, 4) = (s32) (temp_v0 >> 0x3F);
    temp_a0 = (temp_v0 >> 0x34) & 0x7FF;
    switch (temp_a0) {                              /* irregular */
    case 0x0:
        M2C_FIELD(arg1, s32 *, 0) = 2;
        return;
    case 0x7FF:
        if (temp_v1 == 0) {
            M2C_FIELD(arg1, s32 *, 0) = 4;
            return;
        }
        if (temp_v1 & (0x8000 << 0x24)) {
            M2C_FIELD(arg1, s32 *, 0) = 1;
        } else {
            M2C_FIELD(arg1, s32 *, 0) = 0;
        }
        M2C_FIELD(arg1, s64 *, 0x10) = temp_v1;
        return;
    default:
        M2C_FIELD(arg1, s64 *, 0x10) = (s64) ((temp_v1 << 8) | (0x8000 << 0x2D));
        M2C_FIELD(arg1, s32 *, 8) = (s32) (temp_a0 - 0x3FF);
        M2C_FIELD(arg1, s32 *, 0) = 3;
        return;
    }
}
