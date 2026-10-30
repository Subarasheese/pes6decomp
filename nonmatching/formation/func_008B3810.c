/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008C92D0(u16);                             /* extern */
M2C_UNK func_008D5410(s32, s32);                    /* extern */
M2C_UNK func_008DCB70(void *, s32, s32);            /* extern */
M2C_UNK func_008E2AB0(void *, s32);                 /* extern */
M2C_UNK func_008E55F0(s32, s32);                    /* extern */

void func_008B3810(void *arg0, s32 arg1) {
    s32 temp_s2;
    u8 temp_s0;

    func_008E55F0(arg0 + 0x129C, arg1 & 0xFF);
    func_008D5410(arg0 + 0x1EF4, arg1 & 0xFF);
    temp_s0 = M2C_FIELD((arg1 + arg0), u8 *, 0x96E);
    if (M2C_FIELD((temp_s0 + arg0), u8 *, 0x39B) == 0) {
        temp_s2 = temp_s0 * 0x2C;
        func_008E2AB0(arg0 + 0x129C, M2C_FIELD(arg0, s32 *, 0x4FC) + temp_s2);
        func_008DCB70(arg0 + 0x2168, M2C_FIELD(arg0, s32 *, 0x4FC) + temp_s2, func_008C92D0(M2C_FIELD(((temp_s0 * 2) + arg0), u16 *, 0x500)));
        return;
    }
    func_008E2AB0(arg0 + 0x129C, 0);
    func_008DCB70(arg0 + 0x2168, 0, 0);
}
