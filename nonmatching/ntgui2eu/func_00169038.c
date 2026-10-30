/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00189AD0(void *, M2C_UNK);             /* extern */
M2C_UNK func_0018A148(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_00169038(void *arg0) {
    void *temp_s0;
    void *temp_s1;
    void *temp_s2;

    temp_s0 = arg0 + ((M2C_FIELD(arg0, s32 *, 0x4EC) * 0xA0) + 0x630);
    temp_s1 = temp_s0 + 0x10;
    temp_s2 = temp_s0 + 0x60;
    func_00189AD0(temp_s1, 2);
    func_0018A148(temp_s0 + 0x20, 0x98, 0);
    func_0018A148(temp_s0 + 0x30, 0xC0, 0);
    M2C_FIELD(temp_s0, s64 *, 0x60) = (s64) M2C_FIELD(temp_s0, s64 *, 0x10);
    M2C_FIELD(temp_s2, s64 *, 8) = (s64) M2C_FIELD(temp_s1, s64 *, 8);
    M2C_FIELD(temp_s2, s64 *, 0x10) = (s64) M2C_FIELD(temp_s1, s64 *, 0x10);
    M2C_FIELD(temp_s2, s64 *, 0x18) = (s64) M2C_FIELD(temp_s1, s64 *, 0x18);
    M2C_FIELD(temp_s2, s64 *, 0x20) = (s64) M2C_FIELD(temp_s1, s64 *, 0x20);
    M2C_FIELD(temp_s2, s64 *, 0x28) = (s64) M2C_FIELD(temp_s1, s64 *, 0x28);
}
