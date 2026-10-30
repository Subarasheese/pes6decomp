/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00223C10(void);
void func_00938E60(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s16 arg4) {
    u8 temp_a0;
    void *temp_v0;

    temp_v0 = func_00223C10();
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, u8 *, 0) = (u8) ((M2C_FIELD(temp_v0, u8 *, 0) & ~0xF) | (arg2 & 0xF));
        temp_a0 = (M2C_FIELD(temp_v0, u8 *, 1) & ~0xFC) | ((arg3 & 0x3F) * 4);
        M2C_FIELD(temp_v0, u8 *, 1) = temp_a0;
        M2C_FIELD(temp_v0, u8 *, 0) = (s16) (((u16) M2C_FIELD(temp_v0, u8 *, 0) & ~0x3F0) | ((((u64) ((s64) temp_a0 << 0x38) >> 0x3A) & 0x3F) * 0x10));
        M2C_FIELD(temp_v0, s16 *, 4) = arg4;
        M2C_FIELD(temp_v0, s16 *, 2) = arg4;
    }
}
