/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_011FC830[];

void func_0018F490(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_a0;

    temp_a0 = M2C_FIELD((((void *)D_011FC830) + (arg0 * 0x28)), void **, 0xC);
    M2C_FIELD(temp_a0, s64 *, 0x20) = (s64) (0xFFFFFF & arg1);
    M2C_FIELD(temp_a0, s64 *, 0) = (s64) ((M2C_FIELD(temp_a0, s64 *, 0) & ~0x80) | ((arg2 & 1) << 7));
}
