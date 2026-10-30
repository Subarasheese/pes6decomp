/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00A14EC0(void *);                          /* extern */
M2C_UNK func_00AABA00(void *, s32, M2C_UNK);        /* extern */
extern char Pes6MatchSquads[];

void func_00AABD50(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;

    if ((func_00A14EC0(arg0) == 0) || ((u32) M2C_FIELD(arg0, u32 *, 0x114) < 0x121U)) {
        if (M2C_FIELD(arg0, s32 *, 0x11C) >= 0x01000001) {
            temp_a0 = ((u64) ((s64) M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x8C) << 0x38) >> 0x3A) + 0x94;
            func_00AABA00(arg0, ((temp_a0 * -0x1A4) / 183) + ((u32) (temp_a0 * -0x1A4) >> 0x1F), 0);
        } else {
            temp_a0_2 = ((u64) ((s64) M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x8C) << 0x38) >> 0x3A) + 0x94;
            func_00AABA00(arg0, ((temp_a0_2 * -0x220) / 183) + ((u32) (temp_a0_2 * -0x220) >> 0x1F), 0);
        }
    }
}
