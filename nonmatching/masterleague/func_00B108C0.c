/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001D5A10(M2C_UNK);                         /* extern */
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
M2C_UNK func_00972040(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_009720E0(s32, M2C_UNK);                /* extern */
M2C_UNK func_00B0AF30();                            /* extern */
M2C_UNK func_00B0D690(u8, s32, u16, s32);           /* extern */
M2C_UNK func_00B0E4C0(u8, s32);                     /* extern */
M2C_UNK func_00B0E9C0(u8);                          /* extern */
M2C_UNK func_00B0FC20();                            /* extern */
M2C_UNK func_00B10200();                            /* extern */
s32 func_00B15250(u8, s32);                         /* extern */
void *func_00B15370();                              /* extern */

void func_00B108C0(void) {
    u8 temp_s1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_v0 = func_00B15370();
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0) = func_001D5A10(0x102AF);
        M2C_FIELD(temp_v0, s32 *, 4) = func_001D5A10(0x10330);
        temp_v0_2 = func_00B15370();
        if (temp_v0_2 != NULL) {
            func_00B10200();
            func_00B0FC20();
            if (M2C_FIELD(temp_v0_2, s32 *, 0xC34) != 4) {
                func_00958000(0x24);
            } else {
                func_00958000(0x2F);
            }
        }
        func_00B0E9C0(M2C_FIELD(temp_v0, u8 *, 0xC0A));
        func_00B0E4C0(M2C_FIELD(temp_v0, u8 *, 0xC0A), M2C_FIELD(temp_v0, s32 *, 0xC30));
        func_00B0D690(M2C_FIELD(temp_v0, u8 *, 0xC0C), func_00B15250(M2C_FIELD(temp_v0, u8 *, 0xC0A), (M2C_FIELD(temp_v0, u8 *, 0xC0E) + M2C_FIELD(temp_v0, u8 *, 0xC1A)) & 0xFF) & 0xFFFF, M2C_FIELD(temp_v0, u16 *, 0xC1E), M2C_FIELD(temp_v0, s32 *, 0xC2C));
        func_00B0AF30();
        temp_s1 = M2C_FIELD(temp_v0, u8 *, 0xC0E);
        temp_v0_3 = func_00B15370();
        if (temp_v0_3 != NULL) {
            if (M2C_FIELD(temp_v0_3, s32 *, 0xC28) != 5) {
                func_009720E0(M2C_FIELD(temp_v0_3, s32 *, 0x330), 0);
                func_00972040(M2C_FIELD(temp_v0_3, s32 *, 0x330), 0, temp_s1 & 0xFF);
            } else {
                func_009720E0(M2C_FIELD(temp_v0_3, s32 *, 0x330), 1);
            }
        }
    }
}
