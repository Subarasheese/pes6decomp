/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
extern u32 func_008B2C50(void);
s32 func_008BA640(u32, s32, u8);                    /* extern */
s8 func_008C8310(void *, u8, u8);                   /* extern */
M2C_UNK func_008E2830(void *, u8, M2C_UNK);         /* extern */
M2C_UNK func_008E2A00(void *, M2C_UNK);             /* extern */
M2C_UNK func_008E2A40(void *);                      /* extern */
M2C_UNK func_008E2A50(void *, M2C_UNK, s32, u8, s32 *); /* extern */

void func_008C84E0(void *arg0, s32 arg1, s32 arg2) {
    s32 sp48;
    s32 sp4C;
    s32 temp_s0;
    s64 temp_v1_2;
    s8 temp_v1;
    u8 temp_a2;

    temp_v1 = M2C_FIELD(arg0, s8 *, 8) + 1;
    M2C_FIELD(arg0, s8 *, 8) = temp_v1;
    temp_v1_2 = (s64) ((s64) temp_v1 << 0x38) >> 0x38;
    if (temp_v1_2 < 0x1E) {
        M2C_FIELD(arg0, s8 *, 0xA) = (s8) temp_v1_2;
        M2C_FIELD(arg0, u8 *, 9) = 0U;
        func_008E2A40(arg0 + 0x100);
        func_008E2A40(arg0 + 0x140);
        sp48 = 0;
        sp4C = func_001F08B0(0x010C0008);
        func_008E2A50(arg0 + 0x140, 5, arg2, M2C_FIELD(arg0, u8 *, 5), &sp48);
        func_008E2A00(arg0 + 0x140, 0);
        func_008E2830(arg0 + 0x140, M2C_FIELD(arg0, u8 *, 6), 1);
        M2C_FIELD(((M2C_FIELD(arg0, s8 *, 8) * 8) + arg0), s32 *, 0x10) = arg1;
        temp_s0 = func_001F08B0(arg1);
        M2C_FIELD(((M2C_FIELD(arg0, s8 *, 8) * 8) + arg0), s8 *, 0x14) = (s8) (((s32) (func_008BA640(func_008B2C50(), temp_s0, M2C_FIELD(arg0, u8 *, 0xD)) - 1) / (s32) M2C_FIELD(arg0, u8 *, 0xE)) + 1);
        temp_a2 = M2C_FIELD(arg0, u8 *, 9);
        M2C_FIELD(arg0, u8 *, 9) = temp_a2;
        M2C_FIELD(arg0, u8 *, 0xB) = temp_a2;
        M2C_FIELD(arg0, s8 *, 0xC) = func_008C8310(arg0, (u8) M2C_FIELD(arg0, s8 *, 8), temp_a2);
    }
}
