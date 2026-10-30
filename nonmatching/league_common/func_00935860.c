/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0022F110(void);
extern s32 func_0022F0E0(void);
s32 func_00151EA0(M2C_UNK);                         /* extern */
s16 func_00225680(u8);                              /* extern */
s32 func_00225B20(u8);                              /* extern */
s32 func_002307F0();                                /* extern */
M2C_UNK func_009364A0();                            /* extern */
u8 *func_009614F0();                                /* extern */
M2C_UNK func_00983FF0();                            /* extern */
u8 func_009846F0(M2C_UNK);                          /* extern */
M2C_UNK func_0099E5A0();                            /* extern */
extern void *D_003E77B0;
extern char D_00591BB0[];
extern char D_00591BB2[];
extern char D_005922E8[];

s32 func_00935860(void) {
    s32 temp_s1;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a1;
    s32 var_s2;
    u8 *temp_s0;
    u8 *temp_v0;
    u8 var_v0;

    temp_s0 = func_009614F0();
    temp_s1 = func_0022F0E0();
    if (temp_s0 == NULL) {
        return 0;
    }
    if (temp_s1 == 0) {
        return 0;
    }
    if ((func_002307F0() & 0xFF) != 1) {
        func_009364A0();
    } else {
        func_0099E5A0();
    }
    temp_v0 = func_009614F0();
    if (temp_v0 != NULL) {
        func_00983FF0();
        if (((u64) ((s64) M2C_FIELD(temp_v0, u8 *, 1) << 0x3D) >> 0x3F) == 0) {
            M2C_FIELD(D_003E77B0, u8 *, 0x2C) = func_009846F0(0);
            M2C_FIELD(D_003E77B0, u8 *, 0x2D) = func_009846F0(1);
            (*(s16 *)D_00591BB0) = func_00225680(M2C_FIELD(D_003E77B0, u8 *, 0x2C));
            (*(s16 *)D_00591BB2) = func_00225680(M2C_FIELD(D_003E77B0, u8 *, 0x2D));
        }
    }
    *temp_s0 = (*temp_s0 & ~3) | 2;
    if ((func_00225B20(M2C_FIELD(D_003E77B0, u8 *, 0x2C)) == 1) && (func_00225B20(M2C_FIELD(D_003E77B0, u8 *, 0x2D)) == 0)) {
        var_s2 = 1;
        var_v0 = (*temp_s0 & ~0xC) | ((0 & 3) * 4);
    } else if ((func_00225B20(M2C_FIELD(D_003E77B0, u8 *, 0x2C)) == 0) && (func_00225B20(M2C_FIELD(D_003E77B0, u8 *, 0x2D)) == 1)) {
        var_s2 = 0;
        var_v0 = (*temp_s0 & ~0xC) | ((1 & 3) * 4);
    } else {
        var_s2 = func_00151EA0(2) & 0xFF;
        var_v0 = (*temp_s0 & ~0xC) | (((1 - var_s2) & 3) * 4);
    }
    *temp_s0 = var_v0;
    func_0022F110();
    temp_v1 = var_s2 & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(temp_s1, u8 *, 4) = 3U;
        M2C_FIELD(temp_s1, u8 *, 5) = 0U;
        M2C_FIELD(temp_s1, u8 *, 8) = 0U;
block_23:
        M2C_FIELD(temp_s1, u8 *, 9) = 0U;
        break;
    case 1:
        M2C_FIELD(temp_s1, u8 *, 4) = 0U;
        M2C_FIELD(temp_s1, u8 *, 5) = 0U;
        M2C_FIELD(temp_s1, u8 *, 8) = 3U;
        goto block_23;
    }
    var_a1 = 0;
    var_a0 = temp_s1;
    M2C_FIELD(temp_s1, s16 *, 0) = (s16) (M2C_FIELD(temp_s1, u8 *, 4) + M2C_FIELD(temp_s1, u8 *, 5));
    M2C_FIELD(temp_s1, s16 *, 2) = (s16) (M2C_FIELD(temp_s1, u8 *, 8) + M2C_FIELD(temp_s1, u8 *, 9));
    do {
        M2C_FIELD(var_a0, s8 *, 0x5F) = 0;
        var_a1 += 8;
        M2C_FIELD(var_a0, s8 *, 0x2DF) = 0;
        M2C_FIELD(var_a0, s8 *, 0x73) = 0;
        M2C_FIELD(var_a0, s8 *, 0x2F3) = 0;
        M2C_FIELD(var_a0, s8 *, 0x87) = 0;
        M2C_FIELD(var_a0, s8 *, 0x307) = 0;
        M2C_FIELD(var_a0, s8 *, 0x9B) = 0;
        M2C_FIELD(var_a0, s8 *, 0x31B) = 0;
        M2C_FIELD(var_a0, s8 *, 0xAF) = 0;
        M2C_FIELD(var_a0, s8 *, 0x32F) = 0;
        M2C_FIELD(var_a0, s8 *, 0xC3) = 0;
        M2C_FIELD(var_a0, s8 *, 0x343) = 0;
        M2C_FIELD(var_a0, s8 *, 0xD7) = 0;
        M2C_FIELD(var_a0, s8 *, 0x357) = 0;
        M2C_FIELD(var_a0, s8 *, 0xEB) = 0;
        M2C_FIELD(var_a0, s8 *, 0x36B) = 0;
        var_a0 += 0xA0;
    } while (var_a1 < 0x20);
    M2C_FIELD(D_003E77B0, s32 *, 0x20) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x20) & ~0x100);
    M2C_FIELD(D_003E77B0, s32 *, 0x20) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x20) & ~0x1000);
    M2C_FIELD(D_003E77B0, s32 *, 0x20) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x20) | 0x10);
    (*(s8 *)D_005922E8) = 1;
    M2C_FIELD(temp_s1, u8 *, 0x11) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x11) & ~0xC0) | 0x40);
    return 0;
}
