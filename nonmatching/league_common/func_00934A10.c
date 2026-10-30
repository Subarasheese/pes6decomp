/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0022F110(void);
extern void * func_0022F150(void);
extern s32 func_0022F0E0(void);
s32 func_00151EA0(M2C_UNK);                         /* extern */
M2C_UNK func_009364A0();                            /* extern */
u8 *func_009614F0();                                /* extern */
extern void *D_003E77B0;

void func_00934A10(void) {
    s32 temp_a0;
    s32 temp_s0;
    s32 var_a1;
    s32 var_a2;
    s32 var_s1;
    u64 temp_v1;
    u8 *temp_s1;
    void *temp_s2;

    temp_s2 = func_0022F150();
    temp_s1 = func_009614F0();
    temp_s0 = func_0022F0E0();
    if ((temp_s2 != NULL) && (temp_s1 != NULL) && (temp_s0 != 0)) {
        func_009364A0();
        temp_v1 = (u64) ((s64) *temp_s1 << 0x3C) >> 0x3E;
        switch (temp_v1) {                          /* switch 1; irregular */
        case 0:                                     /* switch 1 */
            var_s1 = 1;
            break;
        case 1:                                     /* switch 1 */
            var_s1 = 0;
            break;
        default:                                    /* switch 1 */
            var_s1 = func_00151EA0(2) & 0xFF;
            break;
        }
        func_0022F110();
        temp_a0 = var_s1 & 0xFF;
        switch (temp_a0) {                          /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            M2C_FIELD(temp_s0, u8 *, 4) = 3U;
            M2C_FIELD(temp_s0, u8 *, 5) = 0U;
            M2C_FIELD(temp_s0, u8 *, 8) = 0U;
block_18:
            M2C_FIELD(temp_s0, u8 *, 9) = 0U;
            break;
        case 1:                                     /* switch 2 */
            M2C_FIELD(temp_s0, u8 *, 4) = 0U;
            M2C_FIELD(temp_s0, u8 *, 5) = 0U;
            M2C_FIELD(temp_s0, u8 *, 8) = 3U;
            goto block_18;
        }
        var_a2 = 0;
        var_a1 = temp_s0;
        M2C_FIELD(temp_s0, s16 *, 0) = (s16) (M2C_FIELD(temp_s0, u8 *, 4) + M2C_FIELD(temp_s0, u8 *, 5));
        M2C_FIELD(temp_s0, s16 *, 2) = (s16) (M2C_FIELD(temp_s0, u8 *, 8) + M2C_FIELD(temp_s0, u8 *, 9));
        do {
            M2C_FIELD(var_a1, s8 *, 0x5F) = 0;
            var_a2 += 8;
            M2C_FIELD(var_a1, s8 *, 0x2DF) = 0;
            M2C_FIELD(var_a1, s8 *, 0x73) = 0;
            M2C_FIELD(var_a1, s8 *, 0x2F3) = 0;
            M2C_FIELD(var_a1, s8 *, 0x87) = 0;
            M2C_FIELD(var_a1, s8 *, 0x307) = 0;
            M2C_FIELD(var_a1, s8 *, 0x9B) = 0;
            M2C_FIELD(var_a1, s8 *, 0x31B) = 0;
            M2C_FIELD(var_a1, s8 *, 0xAF) = 0;
            M2C_FIELD(var_a1, s8 *, 0x32F) = 0;
            M2C_FIELD(var_a1, s8 *, 0xC3) = 0;
            M2C_FIELD(var_a1, s8 *, 0x343) = 0;
            M2C_FIELD(var_a1, s8 *, 0xD7) = 0;
            M2C_FIELD(var_a1, s8 *, 0x357) = 0;
            M2C_FIELD(var_a1, s8 *, 0xEB) = 0;
            M2C_FIELD(var_a1, s8 *, 0x36B) = 0;
            var_a1 += 0xA0;
        } while (var_a2 < 0x20);
        M2C_FIELD(D_003E77B0, s32 *, 0x20) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x20) & ~0x100);
        M2C_FIELD(D_003E77B0, s32 *, 0x20) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x20) & ~0x1000);
        M2C_FIELD(D_003E77B0, s32 *, 0x20) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x20) | 0x10);
        M2C_FIELD(temp_s0, u8 *, 0x11) = (u8) ((M2C_FIELD(temp_s0, u8 *, 0x11) & ~0xC0) | 0x40);
    }
}
