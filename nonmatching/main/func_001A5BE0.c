/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002CB8C0(s32);                         /* extern */
extern char D_003AFC30[];

void func_001A5BE0(s32 arg0) {
    s32 temp_a0;
    void *temp_s0;

    temp_s0 = ((void *)D_003AFC30) + (arg0 * 0x18);
    temp_a0 = M2C_FIELD(temp_s0, s32 *, 8);
    if (temp_a0 != 0) {
        func_002CB8C0(temp_a0);
    }
    M2C_FIELD(temp_s0, s32 *, 8) = 0;
}
