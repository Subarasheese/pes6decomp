/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
extern char D_003FB420[];

void func_0012D3D0(s32 arg0, void *arg1, s32 arg2) {
    void **temp_s2;
    void *temp_a1;
    void *temp_s1;

    temp_s2 = ((void *)D_003FB420) + (arg0 * 4);
    *temp_s2 = arg1;
    temp_s1 = *temp_s2;
    func_001C48E8(temp_s1, 0, 0x3A0);
    M2C_FIELD(temp_s1, s32 *, 0) = (s32) ((s64) ((((u64) ((s64) arg1 << 0x20) >> 0x20) + 0x3A0) << 0x20) >> 0x20);
    M2C_FIELD(temp_s1, s32 *, 4) = arg2;
    M2C_FIELD(temp_s1, s32 *, 8) = 0;
    M2C_FIELD(temp_s1, s64 *, 0x10) = 0;
    temp_a1 = *temp_s2;
    if (temp_a1 != NULL) {
        M2C_FIELD(temp_a1, s32 *, 0xC) = (s32) ((M2C_FIELD(temp_a1, s32 *, 4) - M2C_FIELD(temp_a1, s32 *, 0)) - 0x10);
    }
}
