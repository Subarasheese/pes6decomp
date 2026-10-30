/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008C92D0(u16);                             /* extern */
s32 func_008C9350(void *);                          /* extern */
M2C_UNK func_008DCB70(void *, s32, s32);            /* extern */

void func_008B3A70(void *arg0) {
    u8 temp_s0;
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg0, void **, 0x3220);
    if (temp_s1 != NULL) {
        temp_s0 = M2C_FIELD(((func_008C9350(arg0 + 0x2B0C) & 0xFF) + temp_s1), u8 *, 0x96E);
        if (M2C_FIELD((temp_s0 + temp_s1), u8 *, 0x39B) == 0) {
            func_008DCB70(arg0 + 0x2168, M2C_FIELD(temp_s1, s32 *, 0x4FC) + (temp_s0 * 0x2C), func_008C92D0(M2C_FIELD(((temp_s0 * 2) + temp_s1), u16 *, 0x500)));
        } else {
            func_008DCB70(arg0 + 0x2168, 0, 0);
        }
    }
}
