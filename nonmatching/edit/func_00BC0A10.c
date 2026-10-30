/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001B79C0();                            /* extern */
M2C_UNK func_001B7ED0(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_001C48E8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00B91490(M2C_UNK, s64, M2C_UNK, s8);   /* extern */
M2C_UNK func_00BC2520(void *);                      /* extern */
M2C_UNK func_00BC26F0(void *);                      /* extern */
extern char D_00CB6DD0[];

void func_00BC0A10(void *arg0, s32 *arg1) {
    s32 temp_a1;
    s32 temp_hi;
    s32 temp_v0;
    s32 temp_v1;
    s64 temp_a1_2;
    s8 temp_a3;

    func_001C48E8(0, 0x24);
    M2C_FIELD(arg0, s32 *, 8) = 4;
    M2C_FIELD(arg0, s32 **, 0) = arg1;
    M2C_FIELD(arg0, u8 *, 0x16) = (u8) (M2C_FIELD(arg0, u8 *, 0x16) | 0x20);
    func_00BC26F0(arg0);
    func_00BC2520(arg0);
    temp_v0 = *arg1;
    M2C_FIELD(arg0, s32 *, 0x10) = temp_v0;
    if (temp_v0 < 0x28) {
        M2C_FIELD(arg0, s8 *, 0x1A) = 0;
        M2C_FIELD(arg0, s8 *, 0x1B) = 0;
    } else {
        M2C_FIELD(arg0, s8 *, 0x1A) = 1;
        M2C_FIELD(arg0, s8 *, 0x1B) = 1;
    }
    temp_a3 = M2C_FIELD(arg0, s8 *, 0x1A);
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x10);
    temp_a1 = temp_a3 * 0x28;
    M2C_FIELD(arg0, s16 *, 0x20) = (s16) (((temp_v1 - temp_a1) / 10) + ((u32) (temp_v1 - temp_a1) >> 0x1F));
    temp_hi = (s32) (M2C_FIELD(arg0, s32 *, 0x10) - (M2C_FIELD(arg0, s8 *, 0x1A) * 0x28)) % 10;
    M2C_FIELD(arg0, s16 *, 0x1E) = (s16) temp_hi;
    temp_a1_2 = (s64) ((s64) temp_hi << 0x30) >> 0x30;
    M2C_FIELD(arg0, s8 *, 0x1C) = (s8) (temp_a1_2 + (M2C_FIELD(arg0, s16 *, 0x20) * 0xA));
    func_00B91490(0x13, temp_a1_2, 0xA, temp_a3);
    func_001B79C0();
    func_001B7ED0(((void *)D_00CB6DD0), 2);
}
