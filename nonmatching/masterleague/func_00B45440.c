/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B45600(void);
M2C_UNK func_00225680(u8);                          /* extern */
s32 func_00938F10(u16, M2C_UNK);                    /* extern */
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
M2C_UNK func_009BE2E0(u16, s32, M2C_UNK, M2C_UNK);  /* extern */
M2C_UNK func_00B46E60();                            /* extern */
M2C_UNK func_00B476C0(M2C_UNK);                     /* extern */

s32 func_00B45440(void) {
    u16 temp_s1;
    u32 temp_v0;
    u8 temp_a0;
    u8 var_a0;
    void *temp_v1;

    temp_v0 = func_00B45600();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x3B5) == 0) {
            if (M2C_FIELD(temp_v0, u8 *, 0x3B6) != 3) {
                if (M2C_FIELD(temp_v0, u8 *, 0x8FD) != 0) {
                    M2C_FIELD(temp_v0, u8 *, 0x3B5) = 5U;
                    temp_a0 = M2C_FIELD((M2C_FIELD(temp_v0, u8 *, 0x828) + temp_v0), u8 *, 0x7D0);
                    temp_v1 = M2C_FIELD(((temp_a0 * 4) + temp_v0), void **, 0x850);
                    temp_s1 = M2C_FIELD(temp_v1, u16 *, 4);
                    if ((((u64) ((s64) M2C_FIELD(temp_v1, u8 *, 0) << 0x39) >> 0x3A) == 5) && (((u64) ((s64) M2C_FIELD(temp_v1, u8 *, 1) << 0x39) >> 0x3C) == 2)) {
                        var_a0 = M2C_FIELD((temp_a0 + temp_v0), u8 *, 0x8DC);
                    } else {
                        var_a0 = func_00938F10(temp_s1, 5) & 0xFF;
                    }
                    func_00225680(var_a0);
                    func_009BE2E0(temp_s1, temp_v0 + 0x82C, 0, 2);
                    func_00B46E60();
                    func_00B476C0(1);
                    M2C_FIELD(temp_v0, s8 *, 0x3B4) = 1;
                    func_00958000(0x46);
                    goto block_21;
                }
                M2C_FIELD(temp_v0, u8 *, 0x3B5) = 7U;
                return 0;
            }
            goto block_21;
        }
        goto block_21;
    }
block_21:
    return 0;
}
