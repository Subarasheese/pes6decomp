/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00225720(s32);                             /* extern */
void *func_002289B0();                              /* extern */
s32 func_0094C7B0();                                /* extern */
void *func_00994750();                              /* extern */
M2C_UNK func_00B20EF0(s32);                         /* extern */
u16 func_00B26F40();                                /* extern */
M2C_UNK func_00B35E00();                            /* extern */
extern void *D_003EADF0;
extern u8 D_003EADF4;
extern u8 D_003EADF8;

void func_00B15380(s32 arg0) {
    s32 temp_a0;
    s8 var_v1;
    u16 temp_v1;
    void *temp_s0;

    temp_s0 = D_003EADF0;
    if (temp_s0 != NULL) {
        M2C_FIELD(temp_s0, s32 *, 0xC34) = arg0;
        func_00B35E00();
        M2C_FIELD(temp_s0, void **, 0xC3C) = func_002289B0();
        M2C_FIELD(temp_s0, s8 *, 0xBF4) = 0;
        M2C_FIELD(temp_s0, s8 *, 0xBFE) = 0;
        M2C_FIELD(temp_s0, s8 *, 0xBF5) = 0;
        M2C_FIELD(temp_s0, s32 *, 0xC40) = (s32) M2C_FIELD(M2C_FIELD(temp_s0, void **, 0xC3C), s32 *, 0);
        M2C_FIELD(temp_s0, s32 *, 0xC44) = (s32) M2C_FIELD(M2C_FIELD(temp_s0, void **, 0xC3C), s32 *, 4);
        M2C_FIELD(temp_s0, u16 *, 0xC1E) = (u16) M2C_FIELD(func_00994750(), u16 *, 0xA);
        if (M2C_FIELD(temp_s0, u16 *, 0xC1E) != 0) {
            M2C_FIELD(temp_s0, s32 *, 0xC2C) = 1;
        } else {
            M2C_FIELD(temp_s0, s32 *, 0xC2C) = 0;
        }
        M2C_FIELD(temp_s0, s32 *, 0xC28) = 0;
        M2C_FIELD(temp_s0, s32 *, 0xC30) = 0;
        M2C_FIELD(temp_s0, s16 *, 0xC1C) = 6;
        M2C_FIELD(temp_s0, s16 *, 0xC00) = 4;
        if ((func_0094C7B0() == 0x12) && (M2C_FIELD(temp_s0, s32 *, 0xC34) == 4)) {
            M2C_FIELD(temp_s0, u16 *, 0xC08) = 0x20U;
            if (D_003EADF0 != NULL) {
                M2C_FIELD(D_003EADF0, u8 *, 0xC1A) = (u8) D_003EADF4;
                M2C_FIELD(D_003EADF0, u8 *, 0xC0E) = (u8) D_003EADF8;
            }
        } else {
            M2C_FIELD(temp_s0, u16 *, 0xC08) = func_00B26F40();
        }
        temp_v1 = M2C_FIELD(temp_s0, u16 *, 0xC08);
        if (temp_v1 != 0) {
            var_v1 = ((u32) ((temp_v1 - 1) & 0xFFFF) >> 5) + 1;
        } else {
            var_v1 = 1;
        }
        M2C_FIELD(temp_s0, s8 *, 0xC0B) = var_v1;
        M2C_FIELD(temp_s0, s8 *, 0xC0D) = 7;
        temp_a0 = M2C_FIELD(temp_s0, s32 *, 0xC34);
        if (temp_a0 == 3) {
            func_00B20EF0(func_00225720(temp_a0));
        }
        M2C_FIELD(temp_s0, s32 *, 0xC48) = 0;
    }
}
