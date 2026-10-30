/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(void *, s32, s32);            /* extern */
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
extern void *D_003E7E1C;

void func_00CE42B0(s32 arg0, s32 arg1) {
    void *temp_s0;

    temp_s0 = D_003E7E1C;
    func_001C48E8(temp_s0 + 0x154, 0, 0x30);
    func_001C4730(temp_s0 + 0x154, arg0, arg1 * 4);
    M2C_FIELD(temp_s0, s32 *, 0x150) = arg1;
}
