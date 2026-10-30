/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AE7320(void);
extern s32 func_00235B60(void);
s32 func_00225940(u8);                              /* extern */
s8 func_00229010(u8);                               /* extern */
s16 func_002290D0(u8);                              /* extern */
M2C_UNK func_0094C620(s32, s32);                    /* extern */
M2C_UNK func_009610A0(void *);                      /* extern */
void *func_009614F0();                              /* extern */
extern void *D_003E77B0;
extern void *D_003E77B4;
extern char D_00591BB0[];
extern char D_00591BB2[];

s32 func_00AE6F60(void) {
    s32 temp_s2;
    s32 temp_v0_2;
    s32 var_v0;
    u32 temp_v0;
    u8 temp_a0;
    void *temp_v0_3;

    temp_v0 = func_00AE7320();
    if (temp_v0 == 0) {
        return 1;
    }
    temp_v0_2 = M2C_FIELD(temp_v0, s32 *, 0x590);
    switch (temp_v0_2) {                            /* irregular */
    case 4:
        temp_a0 = M2C_FIELD(((M2C_FIELD(D_003E77B4, u8 *, 0x16F1) * 0xC) + D_003E77B4), u8 *, 0x4AB8);
        if (((s32) temp_a0 % 2) == 1) {
            var_v0 = M2C_FIELD(temp_v0, u8 *, 0x589) + (temp_a0 * M2C_FIELD(temp_v0, u8 *, 0x58A));
        } else {
            var_v0 = M2C_FIELD(temp_v0, u8 *, 0x589) + ((temp_a0 - 1) * M2C_FIELD(temp_v0, u8 *, 0x58A));
        }
        M2C_FIELD(D_003E77B4, u8 *, 0x16F1) = func_00235B60();
        M2C_FIELD(D_003E77B4, u8 *, 0x16F2) = (u8) M2C_FIELD(temp_v0, u8 *, 0x58E);
        M2C_FIELD(D_003E77B4, u8 *, 0x16F3) = (u8) M2C_FIELD(temp_v0, u8 *, 0x58F);
        (*(s16 *)D_00591BB0) = func_002290D0(M2C_FIELD(temp_v0, u8 *, 0x58E));
        (*(s16 *)D_00591BB2) = func_002290D0(M2C_FIELD(temp_v0, u8 *, 0x58F));
        M2C_FIELD(D_003E77B0, s8 *, 0) = func_00229010(M2C_FIELD(temp_v0, u8 *, 0x58E));
        M2C_FIELD(D_003E77B0, s8 *, 0) = func_00229010(M2C_FIELD(temp_v0, u8 *, 0x58F));
        temp_s2 = func_00225940(M2C_FIELD(D_003E77B0, u8 *, 0x2C));
        func_0094C620(temp_s2, func_00225940(M2C_FIELD(D_003E77B0, u8 *, 0x2D)));
        M2C_FIELD(((M2C_FIELD(D_003E77B4, u8 *, 0x16F1) * 0xC) + D_003E77B4), s8 *, 0x4AB7) = (s8) (var_v0 & 0xFF & 0xFF);
        func_009610A0(D_003E77B4);
        temp_v0_3 = func_009614F0();
        if (temp_v0_3 != NULL) {
            M2C_FIELD(temp_v0_3, u8 *, 1) = (u8) ((M2C_FIELD(temp_v0_3, u8 *, 1) & ~4) | 4);
        }
        /* fallthrough */
    case 3:
        return M2C_FIELD(temp_v0, s32 *, 0x590);
    default:
        return temp_v0_2;
    }
}
